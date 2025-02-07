# include <iostream>
# include <windows.h>
# include <cmath>
#include <iomanip>

int main() {
    using namespace std;
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float xa, ya, xb, yb, xc, yc;

    cout << "Введите координаты xa, ya, xb, yb, xc, yc: ";
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    const double ab = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    const double bc = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
    const double ca = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));

    cout << fixed << setprecision(2);
    cout << "Длина стороны AB = " << ab << endl;
    cout << "Длина стороны BC = " << bc << endl;
    cout << "Длина стороны CA = " << ca << endl;

    const double P = ab + bc + ca;
    const double s = P / 2;
    const double S = sqrt(s * (s - ab) * (s - bc) * (s - ca));

    cout << "Периметр треугольника: " << P << endl;
    cout << "Площадь треугольника: " << S << endl;

    return 0;
}
