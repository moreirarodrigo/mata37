#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int x, y, soma = 0, maior, menor;

  cin >> x >> y;

  menor = min(x,y);
  maior = max(x,y);

  for(int i = menor+1; i<maior; i++) {
    if(i%2!=0) {
      soma = soma + i;
    }
  }

  cout << soma << endl;

  return 0;
}
