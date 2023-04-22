#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        int req_n = min(S/n, a);
        if(S - req_n*n <=b) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}