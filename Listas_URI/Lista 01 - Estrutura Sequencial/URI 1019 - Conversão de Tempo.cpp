#include <iostream>

using namespace std;

int main(){
    int segundo, minuto, hora;
    cin >> segundo;
    minuto = segundo/60;
    hora = minuto/60;
    cout << hora << ":" << (minuto%60) << ":" << (segundo%60) << endl;
    return 0;
}
