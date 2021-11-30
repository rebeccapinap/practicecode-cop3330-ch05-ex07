// Includes header file
#include "header.h"

int main() 
{
    // Data dictionary
    double a;
    double b;
    double c;
    double isReal;
    double x1;
    double x2;
    double checkCorr1;
    double checkCorr2;

    // Asks for user input
    cout << "Please enter a: "; 
    cin >> a;
    cout << "\nPlease enter b: ";
    cin >> b;
    cout << "\nPlease enter c: ";
    cin >> c;
    cout << "\n";

    // Calculates if roots are real
    isReal = (pow(b, 2)) - (4 * a * c);

    // If roots are not real isReal is negative and will give output
    // If isReal is positive both roots will be calculated
    if (isReal < 0)
        cout << "The equation has no real roots.\n";
    else
    {
        x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
        x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    }

    // Checks if roots are correct by plugging into a*x^2 + b*x + c
    checkCorr1 = (a * pow(x1, 2)) + (b * x1) + c;
    checkCorr2 = (a * pow(x2, 2)) + (b * x2) + c;

    // If both roots plugged in are equal to 0, roots were correct
    if (checkCorr1 == 0 && checkCorr2 == 0)
        cout << "The roots are " << x1 << " and " << x2 << ".\n";

    return 0;
}
