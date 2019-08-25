#include <iostream>

using namespace std;

int main(){
    int n , m, buraco = 0;
    cin >> n >> m;
    int v[n][m];
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < n;i++){
      for(int j = 0; j < m-1; j++){
        if((v[i][j] == 1) && (v[i][j+1]) && (v[i+1][j] == 1) && (v[i+1][j+1] == 1)){
            buraco++;
        }
      }
    }
    if(buraco>=1){
      cout << "PegarMaMarreeta" << endl;
    }else{
      cout << "Dboas" << endl;
    }
    return 0;
}