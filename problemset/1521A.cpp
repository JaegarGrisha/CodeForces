#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if(b==1) {
            cout << "NO" << endl;
        }
        else {
            long long x, y, z;
            x = (1)*a;
            y = b==2 ? (2*b-1)*a : (b-1)*a;
            z = b==2 ? 2*b*a : b*a;
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
    }
}