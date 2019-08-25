#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra;
    int n,t, cont = 0;
    cin >> n >> t;
    cin.ignore();
    while(n>0){
        getline(cin, palavra);
        for(int i = 0;i < palavra.length();i++){
            if(!((palavra[i]=='a')||(palavra[i]=='e')||(palavra[i]=='i')||(palavra[i]=='o')||(palavra[i]=='u')||(palavra[i]==' '))){
                cont++;
            }
        }
        if(cont > t){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
        cont = 0;
        n--;
    }
    return 0;
}