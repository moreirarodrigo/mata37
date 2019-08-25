#include <iostream>

using namespace std;

int main(){
    int x, n;
    long long f[61];
    cin >> n;
    f[0] = 0;
    f[1] = 1;
    for(int i=2; i<=60; i++){
        f[i] = f[i-1] + f[i-2];
    }
    for(int j=0; j<n; j++){
        cin >> x;
        cout << "Fib(" << x << ") = " << f[x] << endl;
    }
    return 0;
}
