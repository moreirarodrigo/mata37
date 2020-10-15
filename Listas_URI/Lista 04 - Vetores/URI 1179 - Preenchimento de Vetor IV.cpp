#include <iostream>

using namespace std;

int main() {
    int x, p = 0, im = 0;
    int par[5], impar[5];

    for(int i = 0; i < 15; i++) {
        cin >> x;
        
        if(x%2 == 0) {
            par[p] = x;
            p++;
        } else {
            impar[im] = x;
            im++;
        }

        if(p == 5) {
            for(int j = 0; j < 5; j++) {
                cout << "par[" << j << "] = " << par[j] << endl;
            }
            p = 0;
        }

        if(im == 5) {
            for(int j = 0; j < 5; j++) {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
            im = 0;
        }

        if(i == 14) {
            for(int j = 0; j < im; j++) {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
        }

        if(i == 14) {
            for(int j = 0; j < p; j++) {
                cout << "par[" << j << "] = " << par[j] << endl;
            }
        }
    }

    return 0;
}
