#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159
#define potencia 2

using namespace std;

int main()
{
    double raio, area;
    cin >> raio;
    area = pi*pow(raio, potencia);
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}
