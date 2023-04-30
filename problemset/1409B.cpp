#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        int k;

        int a_ = a, b_ = b, n_ = n;
        k = min(n_, max(0, b_-y));
        b_ = b_ - k;
        n_ = n_ - k;
        k = min(n_, max(0, a_-x));
        a_ = a_ - k;
        n_ = n_ - k;
        long long prod_01 = (long long)a_*b_;

        a_ = a, b_ = b, n_ = n;
        k = min(n_, max(0, a_-x));
        a_ = a_ - k;
        n_ = n_ - k;
        k = min(n_, max(0, b_-y));
        b_ = b_ - k;
        n_ = n_ - k;
        long long prod_02 = (long long)a_*b_;

        if(prod_01 < prod_02) {
            cout << prod_01 << endl;
        }
        else {
            cout << prod_02 << endl;
        }
    }
    return 0;
}