#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    for (int i = 0; i < 5; i++)
        cout << setw(2) << "Ce" << " "
         << setw(6) << "Fahr" << "   ";
    cout << "\n";

    for (int i = 0; i < 5; i++)
        cout << setw(2) << "--" << " "
         << setw(6) << "------" << "   ";
    cout << "\n";

    double F;
    cout << fixed << setprecision(2);

    for(int i=0 ; i<20 ; i++){
        for(int j=0 ; j<5 ; j++){
        int C = i + j * 20;
        double F = C * 180.0 / 100.0 + 32;

        cout << setw(2) << C << " "
             << setw(6) << F << "   ";
        }
    cout << "\n";
    }
}