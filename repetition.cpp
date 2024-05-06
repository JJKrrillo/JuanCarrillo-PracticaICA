#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 0;
    int mult;
    cout << "ingrese un numero multiplicador: ";
    cin >> n;      

    while (i < 11)
    {
        mult = i*n;
        cout << i << "  x " << n << " = " << mult << "\n" ;
        i = i + 1;
    }
    return 0;
}
