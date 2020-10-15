#include <iostream>

using namespace std;

int main() {
    int n[20], v[20], p = 0, x;

    for(int i = 0; i < 20; i++) {
        cin >> x;
        n[i] = x;
    }

    for(int i = 19; i >= 0; i--) {
       v[p] = n[i];
       p++;
    }

    for(int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << v[i] << endl;
    }
    
    return 0;
}
