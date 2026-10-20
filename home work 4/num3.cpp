#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cout<<"enter the positive number: ";
    getline(cin,a);

    for(size_t i=0 ; i<a.size() / 2; i++){
        int b;
        b = a[i];
        a[i] = a[a.size()-i-1];
        a[a.size()-i-1] = b;
    }
    cout<<"The reversed number is: "<<a; 
}