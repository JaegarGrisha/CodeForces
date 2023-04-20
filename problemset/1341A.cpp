#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int lower_bound = (a-b)*n;
        int upper_bound = (a+b)*n;
        if((c+d)>=lower_bound && (c-d)<=upper_bound) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}