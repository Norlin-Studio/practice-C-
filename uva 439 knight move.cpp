#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int count;
    string a,b;
    cin>>a>>b;
    int i1=a[0]-96,j1=a[1]-48,i2=b[0]-96,j2=b[1]-48;
    int countx= ((i2 - i1)>=0 ? (i2 - i1) : (i1 - i2));
    int county= ((j2 - j1)>=0 ? (j2 - j1) : (j1 - j2));

    if (countx > county){
    int rx=(countx%3)/2,x=countx/3;
    count = rx + x;
    }
    else if (county > countx){
    int ry=(county%3)/2,y=county/3;
    count = ry + y;
    }
    else {
    int rx=(countx%3)/2,x=countx/3;
    count = rx + x;
    }
    cout<<"To get from "<<a<<" to "<<b<<" takes "<<count<<" Knight moves";

    
}