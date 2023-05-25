#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = sqrt(n);
        if(n==x*x) {
            cout << x << " 1" << endl;
        }
        else {
            int k = n-x*x;
            if(k<=x) {
                cout << k << " " << x+1 << endl;
            }
            else {
                cout << x+1 << " " << x+1-(k-x-1) << endl;
            }
        }
    }
    return 0;
}