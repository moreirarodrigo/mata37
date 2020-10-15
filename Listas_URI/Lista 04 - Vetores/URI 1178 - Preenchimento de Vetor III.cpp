#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x;
    double f[100];

    cin >> x;

    for(int i = 0; i < 100; i++) {
        f[i] = x;
        x = x/2;
        
        cout << "N[" << i << "] = " << fixed << setprecision(4) <<  f[i] << endl;
    }

    return 0;
}
