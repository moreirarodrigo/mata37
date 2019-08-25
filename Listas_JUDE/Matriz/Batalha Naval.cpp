#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, m, c, somaNavios = 0, somaTiros = 0, x = 0, y = 0;
    cin >> n >> m >> c;
    int campo[n][m];
    for(int i = 0; i  < n; i++){
        for(int j = 0; j < m; j++){
            cin >> campo[i][j];
            if(campo[i][j] == 1){
                somaNavios++;
            }
        }
    }
    for(int i = 0; i < c; i++){
        cin >> x >> y;
        if((campo[x][y] == 1)){
            somaTiros++;
            campo[x][y] = 0;
        }
    }
    if(somaTiros>=(somaNavios/2)){
        cout << "Bira" << endl;
    }else{
        cout << "Vidal" << endl;
    }
    return 0;
}