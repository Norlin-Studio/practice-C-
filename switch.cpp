#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char oper;
    
    cout<<"type the number: ";
    cin>>num1;
    cout<<"type the number: ";
    cin>>num2;
    cout<<"type the operator: ";
    cin>>oper;
    
    switch (oper){
        case '+':
            cout<<"the anwser is "<<num1+num2;
            break;
        case '-':
            cout<<"the anwser is "<<num1-num2;
            break;
        case '*':
            cout<<"the anwser is "<<num1*num2;
            break;
        case '/':
            cout<<"the anwser is "<<num1/num2;
            break;
        default:
            cout << "Invalid operator";
    }
}