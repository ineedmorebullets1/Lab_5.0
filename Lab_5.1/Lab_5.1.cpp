// Lab 5_1, Варіант 6
#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y);   // прототип

int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double h1 = h(s * s, t * t);
    double h2 = h(s + t, 1);
    double h3 = h(s * t, 2);

    double c = (h1 + h2 * h2) / (1 + h3 * h3);

    cout << "c = " << c << endl;

    return 0;
}

double h(const double x, const double y)    // визначення
{
    return (x * y) / (1 + x * x * y * y);
}