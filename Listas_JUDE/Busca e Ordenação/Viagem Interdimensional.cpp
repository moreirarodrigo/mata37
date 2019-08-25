#include <iostream>

using namespace std;

int main()
{
    int n ,m, soma = 0, p, esq, dir, meio;
    cin >> n >> m;
    int v[n], w[m];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < m; i++){
        cin >> w[i];
    }
    for(int i = 0; i < m; i++){
        p = w[i];
        esq = 0;
        dir = n-1;
        while(esq <= dir){
            meio = (esq+dir)/2;
            if(p < v[meio]){
                dir = meio - 1;
            }else if(p == v[meio]){
                break;
            }else{
                esq = meio + 1;
            }
        }
        if(v[meio] == p){
            soma++;
        }
    }
    cout << soma << endl;
    return 0;
}