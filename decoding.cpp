#include <iostream>
#include <string>

using namespace std;

int main(){
    string sen;
    cout<<"type the sentence with encryption"<<endl;
    getline(cin, sen);
    
    string anw=sen;
    for(size_t i=0;i<sen.size();i++){
        anw[i]=sen[i]-7;
    }
    
    cout<<anw;
    
    
}