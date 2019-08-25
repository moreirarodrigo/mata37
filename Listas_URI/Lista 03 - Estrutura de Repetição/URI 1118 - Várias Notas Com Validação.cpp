#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int opc = 0;
    double x, y, media;
    while(opc!=2){
        cin >> x;
        while(x<0 || x>10){
            cout << "nota invalida" << endl;
            cin >> x;
        }
        cin >> y;
        while(y<0 || y>10){
            cout << "nota invalida" << endl;
            cin >> y;
        }
        if((x>=0 && x<=10) && (y>=0 && y<=10)){
            media = (x+y)/2;
            cout << "media = " << fixed << setprecision(2) << media << endl;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> opc;
        while(opc<1 || opc>2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opc;
        }
    }
    return 0;
}
