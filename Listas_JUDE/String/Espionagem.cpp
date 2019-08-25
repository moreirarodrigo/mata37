#include <iostream>
#include <string>

using namespace std;

int main() {
  string numero;
  getline(cin, numero);
  for(int i = 0; i < numero.length(); i++){
    switch(numero[i])
    {
      case '1':
      cout << 'a';
      break;
      case '2':
      cout << 'b';
      break;
      case '3':
      cout << 'c';
      break;
      case '4':
      cout << 'd';
      break;
      case '5':
      cout << 'e';
      break;
      case '6':
      cout << 'f';
      break;
      case '7':
      cout << 'g';
      break;
      case '8':
      cout << 'i';
      break;
      case '0':
      break;
      default:
      break;
    }
  }
  cout << endl;
}