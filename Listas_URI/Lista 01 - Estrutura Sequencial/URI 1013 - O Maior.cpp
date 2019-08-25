#include <iostream>
#include <algorithm>
//#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    double maiorab, maiorabc;
//    double maiorababc;
    cin >> a >> b >> c;
    maiorab = max(a, b);
    maiorabc = max(maiorab, c);
    cout << max(maiorab, maiorabc) << " eh o maior" << endl;
//    preferi usar o método acima pois achei mais elegante
//    maiorab = (a+b+abs(a-b))/2;
//    maiorabc = (maiorab+c+abs(maiorab-c))/2;
//    maiorababc = (maiorab+maiorabc+abs(maiorab-maiorabc))/2;
//    cout << maiorababc << " eh o maior" << endl;
    return 0;
}
