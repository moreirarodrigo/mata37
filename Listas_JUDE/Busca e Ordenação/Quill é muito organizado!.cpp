#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(int vetor[], int tamanho, int chave);

int main(){
    int n, x;
    bool zero = false;
    cin >> n;
    int v[n];
    vector <int> vetor;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    while(!zero){
        cin >> x;
        if(x == 0){
            zero = true;
        }else{
            vetor.push_back(x);
        }
    }
    for(int i = 0; i < vetor.size(); i++){
        if(buscaBinaria(v, n, vetor[i])== -1){
            cout << "Nao foi visitado ainda."<<endl;
        }else{
            cout << buscaBinaria(v, n, vetor[i]) << endl;
        }
    }
    return 0;
}

int buscaBinaria(int vetor[], int tamanho, int chave){
    int esq = 0;
    int dir = tamanho - 1;
    int meio;
    while(esq<=dir){
        meio = (esq+dir)/2;
        if(vetor[meio] == chave){
            return meio;
        }
        if(chave < vetor[meio]){
            dir = meio - 1;
        }else{
            esq = meio + 1;
        }
    }
    return -1;
}