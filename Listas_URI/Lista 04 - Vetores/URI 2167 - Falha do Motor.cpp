#include <iostream>

using namespace std;

int main(){
    int x;
    bool y = false;
    cin >> x;
    int n[x];
    for(int i = 0; i < x; i++){
        cin >> n[i];
    }
    y = true;
    for(int i = 0; i < x; i++){
        if(n[i+1]<n[i]){
            y = false;
            cout << i+2 << endl;
            break;
        }
    }
    if(y){
        cout << 0 << endl;
    }
    return 0;
}
