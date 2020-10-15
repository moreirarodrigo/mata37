#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int inter, gremio, opc = 0, vInter = 0, vGremio = 0, partida = 0, empate = 0;

    while(opc!=2) {
        cin >> inter >> gremio;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opc;
        partida = partida + 1;

        if(inter > gremio) {
            vInter = vInter + 1;
        } else {
            if(gremio > inter) {
                vGremio = vGremio + 1;
            } else {
                empate = empate + 1;
            }
        }

        if(opc==2) {
            cout << partida << " grenais" << endl;
            cout << "Inter:" << vInter << endl;
            cout << "Gremio:" << vGremio << endl;
            cout << "Empates:" << empate << endl;

            if(vInter>vGremio) {
                cout << "Inter venceu mais" << endl;
            } else {
                if(vGremio>vInter) {
                    cout << "Gremio venceu mais" << endl;
                } else {
                    cout << "Nao houve vencedor" << endl;
                }
            }
        }
    }
    
    return 0;
}
