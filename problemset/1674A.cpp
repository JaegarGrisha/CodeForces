#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(y%x==0) {
            cout << "1 " << y/x << endl;
        }
        else {
            cout << "0 0" << endl;
        }
    }
    return 0;
}