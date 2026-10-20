#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the first number(positive): ";
    cin>>m;
    cout<<"Enter the second number(positive): ";
    cin>>n;
    cout<<"the greatest common divisor (GCD) between "<<m<<" and "<<n<<" is:" ;

    if(m < n){
        int c;c=m;m=n;n=c;
    }

    while(m % n!=0){
    m = m % n;
        if(m < n){
        int c;c=m;m=n;n=c;
        }
    }
    cout<<n;

}