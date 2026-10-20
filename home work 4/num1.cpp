#include <iostream>
using namespace std;

int main() {
    int num=0;
    cout<<"Enter a number between 1 & 100:";
    cin>>num;
    cout<<"the factors are:"<<"\n";
    for(int i=1;i<=num;i++){
        if( num % i == 0)
            cout<< i <<" ";
    
    }
}