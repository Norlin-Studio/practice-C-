#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    bool first = true;

    for(long long i=2;i<=n;i++){
        long long s=n%i;

        if (s==0){
            long long a=0;

            while(n%i==0){
                n=n/i;
                a++;

            }
            if(!first) cout << "*";
            cout<<i<<"^"<<a;
            first = false;
        }
    }

}