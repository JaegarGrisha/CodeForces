#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int x, y, n;
        cin >> x >> y >> n;
        int count_twos = 0;
        while(x%2==0) {
            x = x/2;
            count_twos++;
        }
        while(y%2==0) {
            y = y/2;
            count_twos++;
        }
        int count = 1;
        while(count_twos--) {
            count *= 2;
        }
        if(count>=n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}