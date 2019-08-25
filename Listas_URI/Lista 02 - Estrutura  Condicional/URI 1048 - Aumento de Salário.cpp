#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario, reajuste;
    cin >> salario;
    if(salario>0 && salario<=400){
        reajuste = salario+(salario*0.15);
        cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste-salario << endl;
        cout << "Em percentual: 15 %"<< endl;
    }
    if(salario>=400.01 && salario<=800){
        reajuste = salario+(salario*0.12);
        cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste-salario << endl;
        cout << "Em percentual: 12 %"<< endl;
    }
    if(salario>=800.01 && salario<=1200){
        reajuste = salario+(salario*0.10);
        cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste-salario << endl;
        cout << "Em percentual: 10 %"<< endl;
    }
    if(salario>=1200.01 && salario<=2000){
        reajuste = salario+(salario*0.07);
        cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste-salario << endl;
        cout << "Em percentual: 7 %"<< endl;
    }
    if(salario>2000){
        reajuste = salario+(salario*0.04);
        cout << "Novo salario: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste-salario << endl;
        cout << "Em percentual: 4 %"<< endl;
    }
    return 0;
}
