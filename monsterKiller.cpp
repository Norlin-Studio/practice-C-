#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> h(n + 1);
    ll total_h = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
        total_h += h[i];
    }

    // L[i] 表示以 i 為最後爆炸點，向左能保留的最大連鎖血量總和
    vector<ll> L(n + 1, 0);
    vector<int> st; // 單調棧儲存 index

    // 1. 計算向左的 DP
    for (int i = 1; i <= n; ++i) {
        // 維護單調棧：尋找左側第一個斜率限制比當前更嚴格的位置 j
        while (!st.empty() && h[st.back()] - st.back() >= h[i] - i) {
            st.pop_back();
        }
        int j = st.empty() ? 0 : st.back();

        // 判斷向左遞減的血量，是否在碰到 j 之前就已經降到 0
        if (j <= i - h[i]) {
            // 從 i 往左，血量會自然降到 0，形成完整的 1 ~ h[i] 等差級數
            L[i] = h[i] * (h[i] + 1) / 2;
        } else {
            // 受限於 j，形成梯形加上 L[j]
            ll len = i - j;
            ll min_val = h[i] - len + 1; // 梯形的最小高度
            L[i] = L[j] + (min_val + h[i]) * len / 2;
        }
        st.push_back(i);
    }

    // R[i] 表示以 i 為最後爆炸點，向右能保留的最大連鎖血量總和
    vector<ll> R(n + 2, 0);
    st.clear();
    
    // 2. 計算向右的 DP
    for (int i = n; i >= 1; --i) {
        while (!st.empty() && h[st.back()] + st.back() >= h[i] + i) {
            st.pop_back();
        }
        int j = st.empty() ? n + 1 : st.back();

        // 判斷向右遞減的血量，是否在碰到 j 之前就已經降到 0
        if (j >= i + h[i]) {
            R[i] = h[i] * (h[i] + 1) / 2;
        } else {
            ll len = j - i;
            ll min_val = h[i] - len + 1;
            R[i] = R[j] + (min_val + h[i]) * len / 2;
        }
        st.push_back(i);
    }

    // 3. 找出最小總花費
    ll min_cost = -1;
    for (int i = 1; i <= n; ++i) {
        // 總花費 = 原本所有怪物的總血量 - 免費連鎖炸掉的血量 + 引爆卷軸花費
        // 連鎖炸掉的血量 = L[i] + R[i] - h[i]
        // 引爆卷軸花費 = h[i]
        ll current_cost = total_h - L[i] - R[i] + 2 * h[i];
        
        if (min_cost == -1 || current_cost < min_cost) {
            min_cost = current_cost;
        }
    }

    cout << min_cost << "\n";
}

int main() {
    // 競賽加速優化
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}