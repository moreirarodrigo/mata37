#include <iostream>

using namespace std;

int main() {
    int numero, resto;

    cin >> numero;

    cout << numero <<"\n";
    cout << numero/100 << " nota(s) de R$ 100,00\n";
    resto = (numero%100);

    cout << resto/50 << " nota(s) de R$ 50,00\n";
    resto = (resto%50);

    cout << resto/20 << " nota(s) de R$ 20,00\n";
    resto = (resto%20);

    cout << resto/10 << " nota(s) de R$ 10,00\n";
    resto = (resto%10);

    cout << resto/5 << " nota(s) de R$ 5,00\n";
    resto = (resto%5);

    cout << resto/2 << " nota(s) de R$ 2,00\n";
    resto = (resto%2);

    cout << resto/1 << " nota(s) de R$ 1,00\n";

    return 0;
}
