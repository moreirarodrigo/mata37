#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int i = 0, caso;
  double x, y, z;

  cin >> caso;

  while(i<caso) {
    cin >> x >> y >> z;

    cout << fixed << setprecision(1) << ((x*2)+(y*3)+(z*5))/10 << endl;

    i++;
  }

  return 0;
}
