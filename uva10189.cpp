#include <iostream>
#include <array>
using namespace std;

int main(){
    int i,j;
    cin>>i>>j;
    char s[i][j]={};
    char s2[i][j]={};
    
    for(int a=0 ; a<i ; a++){
        for(int b=0 ; b<j ; b++){
        cin>>s[a][b];
        }
    }

    for(int a=0 ; a<i ; a++){
        for(int b=0 ; b<j ; b++){
        int c=0;
        if(s[a][b]=='.'){

            for(int x=-1;x<2;x++){
                for(int y=-1;y<2;y++){
                if(a+x >= 0 && b+y >=0 && a+x<i && b+y<j){
                    if(s[a+x][b+y]=='*'){
                        c++;
                    }
                }
                }
            }
            s2[a][b]='0'+c;
        }
        else{

            s2[a][b]=s[a][b];
        }
    
        cout<<s2[a][b];
        }
    cout<<'\n';
    }
}