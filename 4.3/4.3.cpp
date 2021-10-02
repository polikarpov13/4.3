#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x, xp, xk, dx;

    double F = 0;

    cout << "A = ";

    cin >> a;
    
    cout << endl;

    cout << "B = ";

    cin >> b;

    cout << endl;

    cout << "C = ";

    cin >> c;

    cout << endl;

    cout << "XP = ";

    cin >> xp;

    cout << endl;

    cout << "XK = ";

    cin >> xk;

    cout << endl;

    cout << "DX = ";

    cin >> dx;

    cout << endl;

    x = xp;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "F" << "    |" << endl;
    cout << "---------------------------" << endl;

    while (x <= xk) {

        if (x < 1 && c != 0)
            F = a * pow(x, 2) + (b / c);
        if (x > 1.5 && c == 0)
            F = (x - a) / (pow(x - c, 2));
        if (!(x < 3 && b != 0) && !(x > 1.5 && c == 0))
            F = (pow(x, 2)) / (pow(c, 2));

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += dx;
    }


    system("pause");
    return 0;
}
