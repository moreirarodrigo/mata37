#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra;

    cin >> palavra;

    if(palavra=="vertebrado") {
        cin >> palavra;

        if(palavra=="ave") {
            cin >> palavra;

            if(palavra=="carnivoro") {
                cout << "aguia" << endl;
            }

            if(palavra=="onivoro") {
                cout << "pomba" << endl;
            }
        }

        if(palavra=="mamifero") {
            cin >> palavra;

            if(palavra=="herbivoro") {
                cout << "vaca" << endl;
            }

            if(palavra=="onivoro") {
                cout << "homem" << endl;
            }
        }
    }

    if(palavra=="invertebrado") {
        cin >> palavra;

        if(palavra=="inseto") {
            cin >> palavra;

            if(palavra=="hematofago") {
                cout << "pulga" << endl;
            }

            if(palavra=="herbivoro") {
                cout << "lagarta" << endl;
            }
        }

        if(palavra=="anelideo") {
            cin >> palavra;

            if(palavra=="hematofago") {
                cout << "sanguessuga" << endl;
            }

            if(palavra=="onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
