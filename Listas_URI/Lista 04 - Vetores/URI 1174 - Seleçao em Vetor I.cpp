#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x[100];
    for(int i = 0; i < 100; i++){
        cin >> x[i];
    }
    for(int j = 0; j < 100; j++){
        if(x[j]<=10){
            cout << "A[" << j << "] = " << fixed << setprecision(1) << x[j] << endl;
        }
    }
    return 0;
}
