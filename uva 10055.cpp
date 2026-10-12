#include <iostream>
using namespace std;

int main(){
    double a,b;
    while(cin>>a>>b){
        cout << (a >= b ? a - b : b - a) << endl;
    }
}