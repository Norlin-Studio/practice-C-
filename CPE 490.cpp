#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> all;
    string sen;
    bool have = true;
    while (have){
        getline(cin,sen);
        all.push_back(sen);

        if(empty(sen))
        have = false;
    }

    int count=0;
    for(size_t i=0;i<all.size();i++){
        if(size(all[i])>count)
            count=size(all[i]);
    }

    for(int j=0;j<count;j++){
        for(size_t i=0;i<all.size();i++){
            cout<<all[all.size() - i - 1][j]<<' ';
        }
        cout<<endl;
    }
}