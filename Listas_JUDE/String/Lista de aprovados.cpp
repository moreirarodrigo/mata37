#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra, nome;
    int n;
    bool coisa = false;
    getline(cin, nome);
    cin >> n;
    string aux[n];
    cin.ignore();
    for(int j = 0; j < n; j++){
        getline(cin, palavra);
        aux[j] = palavra;
    }
    for(int i = 0; i < n; i++){
        if(aux[i] == nome){
            coisa = true;
        }
    }
    if(coisa){
        cout << "PARABENS" << endl;
    }else{
        cout << "Vamos esperar a 2a chamada" << endl;
    }
    return 0;
}