#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra;
    bool x = true;
    cin >> palavra;
    int j = palavra.length()-1;
    for(int i = 0; i < j; i ++){
        if(palavra[i] != palavra[j]){
            x = false;
        }
        j--;
    }
    if(x){
        cout << "Sim" << endl;
    }else{
        cout << "Nao" << endl;
    }
    return 0;
}