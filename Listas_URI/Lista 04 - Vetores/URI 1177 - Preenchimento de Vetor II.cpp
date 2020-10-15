#include <iostream>

using namespace std;

int main() {
    int x, temp;
    int f[1000];

    cin >> x;

    temp = x;
    x = 0;

    for(int i = 0; i < 1000; i++) {
        f[i] = x;
        x++;

        if(x == temp) {
            x = 0;
        }

        cout << "N[" << i << "] = " << f[i] << endl;
    }
    
    return 0;
}
