
#include <iostream>

using namespace std;

int main(){
    int n , m, somaLinha = 0, cont = 0, aux = 0;
    cin >> n >> m;
    int v[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    cont = n;
    while(cont>0){
        if(aux%2 == 0){
           for(int i = 0; i < m; i++){
                somaLinha += v[aux][i];
                if(somaLinha<0){
                    somaLinha = 0;
                }
            }
        }else{
            for(int i = m-1; i >=0; i--){
                somaLinha +=v[aux][i];
                if(somaLinha<0){
                    somaLinha = 0;
                }
            }
        }
        aux++;
        cont--;
    }
    cout << somaLinha << endl;
    return 0;
}