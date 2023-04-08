#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int prod = 2;
        while(true) {
            prod *= 2;
            if(n%(prod - 1)==0) {
                cout << n/(prod-1) << endl;
                break;
            }
        }
    }
    return 0;
}