#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int ans;
    if(n==0) {
        ans = 1;
    }
    else {
        switch(n%4) {
            case 1:
                ans = 8;
                break;
            case 2:
                ans = 4;
                break;
            case 3:
                ans = 2;
                break;
            case 0:
                ans = 6;
                break;
        }
    }
    cout << ans << endl;
    return 0;
}
