#include <iostream>
#include <iomanip>
#include <string>
#define comissao 0.15
using namespace std;

int main()
{
    string nome;
    double salario, total_vendas;
    cin >> nome;
    cin >> salario;
    cin >> total_vendas;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << salario+(total_vendas*comissao) << endl;
    return 0;
}
