#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long min_1 = a, max_1 = a*b;
        if(c<=min_1) {
            cout << -1 << " ";
        }
        else {
            cout << 1 << " ";
        }

        if(max_1<=c) {
            cout << -1 << endl;
        }
        else {
            cout << b << endl;
        }

    }
    return 0;
}