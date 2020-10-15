#include <iostream>

using namespace std;

int main() {
    int n, menor = 1000, pos = 0;

    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]<menor) {
            menor = v[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    
    return 0;
}
