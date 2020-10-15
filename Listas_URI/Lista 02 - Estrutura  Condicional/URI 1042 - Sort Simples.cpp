#include <iostream>

using namespace std;

void organiza(int &a, int &b, int &c) {
	int temp;

	if(a>b) {
		temp = a;
		a = b;
		b = temp;
	}

	if(a>c) {
		temp = a;
		a = c;
		c = temp;
	}

	if(b>c) {
		temp = b;
		b = c;
		c = temp;
	}
}

int main() {
	int a, b, c, d, e, f;

	cin >> a >> b >> c;

	d = a;
	e = b;
	f = c;

	organiza(a, b, c);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << "" << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	
	return 0;
}
