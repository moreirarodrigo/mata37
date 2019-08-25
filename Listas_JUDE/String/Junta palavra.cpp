#include <iostream>
#include <string>

using namespace std;

int main(){
    int j, k;
    string p1, p2, aux;
    cin >> j >> k;
    cin >> p1;
    cin >> p2;
    cout << p1.substr(0, j)+p2.substr(p2.length()-k, k)<< endl;
    return 0;
}