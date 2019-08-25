#include <iostream>
#include <string>

using namespace std;

int main() {
  string palavra[6];
  for(int i = 0; i < 6; i++){
    cin >> palavra[i];
  }
  for(int i = 0; i < 6;i++){
    cout << palavra[i].length();
  }
  cout << endl;
}