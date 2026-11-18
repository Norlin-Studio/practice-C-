#include "zeller.h"
using namespace std;

int main ()
{
Zeller z1 (3, 29, 2016);
z1.print ();
Zeller z2 (5, 24, 2015);
z2.print ();
Zeller z3 (8, 7, 2017);
z3.print ();
return 0;
}