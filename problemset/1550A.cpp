#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = (int)(sqrt(n));
        if(x*x==n) {
            cout << x << endl;
        }
        else {
            cout << x+1 << endl;
        }
    }
    return 0;
}