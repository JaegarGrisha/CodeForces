#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        if(k%2==0) {
            cout << (k/2)*(a-b) << endl;
        }
        else {
            cout << (k/2)*(a-b)+a << endl;
        }
    }
    return 0;
}