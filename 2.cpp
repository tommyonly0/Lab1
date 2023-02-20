#include <iostream>
#include <cmath>

using namespace std;

void quadraticEquation(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "There are two real roots: " << x1 << " and " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "There is one real root: " << x << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        cout << "There are two complex roots: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}
