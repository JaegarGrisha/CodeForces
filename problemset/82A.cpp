#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x, i=1;
    string ans;
    while(true) {
        x = i*5;
        if(n>x) {
            n -= x;
        }
        else {
            switch((n-1)/i) {
                case 0:
                    ans = "Sheldon";
                    break;
                case 1:
                    ans = "Leonard";
                    break;
                case 2:
                    ans = "Penny";
                    break;
                case 3:
                    ans = "Rajesh";
                    break;
                case 4:
                    ans = "Howard";
                    break;
            }
            break;
        }
        i *= 2;
    }
    cout << ans << endl;
    return 0;
}