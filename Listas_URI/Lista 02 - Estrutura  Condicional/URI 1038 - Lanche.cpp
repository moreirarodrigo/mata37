#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo, quantidade;

    cin >> codigo;
    cin >> quantidade;

    switch(codigo) {
    case 1:
        cout << "Total: R$ " << fixed << setprecision(2) << 4.00*quantidade<<endl;
        break;
    case 2:
        cout << "Total: R$ " << fixed << setprecision(2) << 4.50*quantidade<<endl;
        break;
    case 3:
        cout << "Total: R$ " << fixed << setprecision(2) << 5.00*quantidade<<endl;
        break;
    case 4:
        cout << "Total: R$ " << fixed << setprecision(2) << 2.00*quantidade<<endl;
        break;
    case 5:
        cout << "Total: R$ " << fixed << setprecision(2) << 1.50*quantidade<<endl;
        break;
    default:
        break;
    }
    
    return 0;
}
