#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    cout << max(max(a,b),c) << " eh o maior" << endl;

    return 0;
}
