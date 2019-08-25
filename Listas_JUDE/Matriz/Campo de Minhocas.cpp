#include <iostream>

using namespace std;

int main(){
    int n , m, somaLinha = 0, somaColuna = 0, auxLinha= 0, auxColuna = 0;
    cin >> n >> m;
    int v[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            somaLinha += v[i][j];
        }
        if(somaLinha > auxLinha){
            auxLinha = somaLinha;
            somaLinha = 0;
        }
    }
    for(int j = 0; j<m; j++){
        for(int i = 0; i<n; i++){
            somaColuna += v[i][j];
        }
        if(somaColuna > auxColuna){
            auxColuna = somaColuna;
            somaColuna = 0;
        }
    }
    if(auxLinha>auxColuna){
        cout << auxLinha << endl;
    }else{
        cout << auxColuna << endl;
    }
    return 0;
}