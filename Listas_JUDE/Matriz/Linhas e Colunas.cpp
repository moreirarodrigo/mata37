#include <iostream>

using namespace std;

int main(){
    int n , m, somaLinha = 0, somaColuna = 0;
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
        cout << somaLinha << " ";
        somaLinha = 0;
    }
    cout << endl;
    for(int j = 0; j<m; j++){
        for(int i = 0; i<n; i++){
            somaColuna += v[i][j];
        }
        cout << somaColuna <<  " ";
        somaColuna = 0;
    }
    cout << endl;
    return 0;
}