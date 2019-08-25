#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra, mensagem, alfabeto = "abcdefghijklmnopqrstuvwxyz";
    int n, indice, indiceAux;
    cin >> n;
    cin.ignore();
    getline (cin, palavra);
    for(int i=0; i <palavra.length(); i++){
        indice = 0;
        while(palavra[i] != alfabeto[indice]){
            indice++;
            if(indice>25){
                break;
            }
        }
        if(indice<26){
            if(indice+n < 0){
                indiceAux = (26+(n+indice));
                palavra[i] = alfabeto[indiceAux];
            }else{
                palavra[i] = alfabeto[(indice+n)%26];
            }
        }
        mensagem += palavra[i];
    }

    cout << mensagem << endl;
    return 0;
}
