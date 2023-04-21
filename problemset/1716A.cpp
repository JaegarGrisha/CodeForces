#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans;
        if(n==1) {
            ans = 2;
        }
        else if(n==2) {
            ans = 1;
        }
        else if(n==4) {
            ans = 2;
        }
        else if(n%3==0) {
            ans = n/3;
        }
        else if(n%3==1) {
            ans = (n-4)/3 + 2;
        }
        else if(n%3==2) {
            ans = n/3+1;
        }
        cout << ans << endl;
    }
    return 0;
}