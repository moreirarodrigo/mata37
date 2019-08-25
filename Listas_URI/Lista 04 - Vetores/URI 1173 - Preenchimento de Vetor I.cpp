#include <iostream>

using namespace std;

int main(){
    int x[10], temp = 0;
    cin >> x[0];
    for(int j = 1; j < 10; j++){
        x[j]=x[j-1]*2;
    }
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "]" << " = " << x[i] << endl;
    }
    return 0;
}
