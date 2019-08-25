#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario;
    cin >> salario;
    if(salario>0 && salario<=2000){
        cout << "Isento" << endl;
    }
    if(salario>=2000.01 && salario<=3000){
        cout << "R$ " << fixed << setprecision(2) << (salario-2000)*0.08 << endl;
    }
    if(salario>=3000.01 && salario<=4500){
        cout << "R$ " << fixed << setprecision(2) << (salario-3000)*0.18+80 << endl;
    }
    if(salario>4500){
        cout << "R$ " << fixed << setprecision(2) << (salario-4500)*0.28+350 << endl;
    }
    return 0;
}
