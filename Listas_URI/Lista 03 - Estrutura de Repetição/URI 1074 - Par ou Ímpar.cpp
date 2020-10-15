#include <iostream>

using namespace std;

int main() {
    int x, y, i=0;

    cin >> y;

    if(y < 10000) {
        while(i<y) {
            cin >> x;

            if(x!=0) {
                if((x%2==0)) {
                    if(x>0) {
                        cout << "EVEN POSITIVE" << endl;
                    } else {
                        cout << "EVEN NEGATIVE" << endl;
                    }
                } else {
                    if(x>0) {
                        cout << "ODD POSITIVE" << endl;
                    }else{
                        cout << "ODD NEGATIVE" << endl;
                    }
                }
            } else {
                cout << "NULL" << endl;
            }
            i++;
        }
    }
    
	return 0;
}
