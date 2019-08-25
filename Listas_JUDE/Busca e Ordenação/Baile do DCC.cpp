#include <iostream>

using namespace std;

int main()
{
    int n, menor_i, aux;
    cin >> n;
    int v[n], w[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    for(int i = 0; i < n; i++){
        menor_i = i;
        for(int j = i + 1; j < n; j++){
            if(v[j] > v[menor_i]){
                menor_i = j;
            }
        }
        aux = v[i];
        v[i] = v[menor_i];
        v[menor_i] = aux;
    }
    for(int i = 0; i < n; i++){
        menor_i = i;
        for(int j = i + 1; j < n; j++){
            if(w[j] < w[menor_i]){
                menor_i = j;
            }
        }
        aux = w[i];
        w[i] = w[menor_i];
        w[menor_i] = aux;
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " " << w[i] << endl;
    }
    return 0;
}