#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    if(n%2==0) {
        n = n/2;
        int ans = 1;
        while(n--) {
            ans *= 2;
        }
        cout << ans << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}