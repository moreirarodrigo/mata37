#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, reajuste;

    cin >> salario;

    if(salario>0 && salario<=400) reajuste = 0.15;
    else if(salario>=400.01 && salario<=800) reajuste = 0.12;
    else if(salario>=800.01 && salario<=1200) reajuste = 0.10;
    else if(salario>=1200.01 && salario<=2000) reajuste = 0.07;
    else if(salario>2000) reajuste = 0.04;

    cout << "Novo salario: " << fixed << setprecision(2) << salario+(salario*reajuste) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salario*reajuste << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << reajuste*100 << " %"<< endl;

    return 0;
}
