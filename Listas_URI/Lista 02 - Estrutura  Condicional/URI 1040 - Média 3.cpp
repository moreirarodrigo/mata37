#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float n1, n2 ,n3 ,n4, media, exame;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if(media>=7.0){
        cout << "Aluno aprovado." << endl;
    }else{
        if(media>=5 && media<=6.9){
            cout << "Aluno em exame." << endl;
            cin >> exame;
            media = (media+exame)/2;
            cout << "Nota do exame: " << fixed << setprecision(1) << exame << endl;
            if(media>=5){
                cout << "Aluno aprovado." << endl;
            }else{
                cout << "Aluno reprovado." << endl;
            }
            cout << "Media final: " << fixed << setprecision(1) << media << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }
    }
    return 0;
}
