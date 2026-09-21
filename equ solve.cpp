#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
        if ((b*b-(4*a*c))>0){
            double x1=(-b+sqrt(b*b-4*a*c))/2*a;
            double x2=(-b-sqrt(b*b-4*a*c))/2*a;
            cout<<"x1="<<x1<<" "<<"x2="<<x2<< endl;
            
        }
        else if ((b*b-(4*a*c))==0){
            double t=(-b+sqrt(b*b-4*a*c))/2*a;
            cout<<"there is only one root: "<<t<< endl;
            
        }
        else {
            cout<<"there is no root"<< endl;
            
        }
}
