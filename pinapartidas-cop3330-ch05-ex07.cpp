#include "header.h"

int main() 
{
    double a;
    double b;
    double c;
    double isReal;
    double x1;
    double x2;
    double checkCorr1;
    double checkCorr2;

    cout << "Please enter a: "; 
    cin >> a;
    cout << "\nPlease enter b: ";
    cin >> b;
    cout << "\nPlease enter c: ";
    cin >> c;
    cout << "\n";

    isReal = (pow(b, 2)) - (4 * a * c);

    if (isReal < 0)
        cout << "The equation has no real roots.\n";
    else
    {
        x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
        x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    }

    checkCorr1 = (a * pow(x1, 2)) + (b * x1) + c;
    checkCorr2 = (a * pow(x2, 2)) + (b * x2) + c;

    if (checkCorr1 == 0 && checkCorr2 == 0)
        cout << "The roots are " << x1 << " and " << x2 << ".\n";

    return 0;
}
