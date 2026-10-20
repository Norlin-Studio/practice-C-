#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> lines;
    string s;
    size_t maxLen = 0;

    while (getline(cin, s)) {
        lines.push_back(s);
        maxLen = max(maxLen, s.size());
    }

    for (size_t i = 0; i < maxLen; ++i) {
        for (int j = static_cast<int>(lines.size()) - 1; j >= 0; --j) {
            if (i < lines[j].size())
                cout << lines[j][i];
            else
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}