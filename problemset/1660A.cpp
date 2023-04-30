#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int ans;
        if(a==0 && b==0) {
            ans = 1;
        }
        else if(a==0) {
            ans = 1;
        }
        else if(b==0) {
            ans = a+1;
        }
        else {
            ans = a + 2*b + 1;
        }
        cout << ans << endl;
    }
    return 0;
}