#include <iostream>
using namespace std;

int Power(int, int);

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power (positive integer): ";
    cin >> power;

    result = Power(base, power);
    cout << base << "^" << power << " = " << result;

    return 0;
}

int Power(int base, int power)
{
    if (power!= 1)
        return (base*Power(base, power-1));
    else
        return 1;
}
