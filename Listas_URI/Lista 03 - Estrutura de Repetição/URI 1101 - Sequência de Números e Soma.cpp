#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, maior, menor, soma;
    while(true){
        cin >> x >> y;
        maior = max(x,y);
        menor = min(x,y);
        soma = 0;
        if(x<=0 || y<=0){
            break;
        }else{
            for(int i = menor; i <= maior; i++){
                soma += i;
                cout << i << " ";
            }
            cout << "Sum=" << soma << endl;
        }
    }
    return 0;
}
