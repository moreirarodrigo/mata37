#include <iostream>

using namespace std;

int main(){
    int valor, maior = 0, pos = 0;
    for(int i = 1; i <= 100; i++){
        cin >> valor;
        if(valor>maior){
            maior = valor;
            pos = i;
        }
    }
    cout << maior << endl;
    cout << pos << endl;
    return 0;
}
