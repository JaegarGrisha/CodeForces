#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        bool possible = n>=k*k && n%2==k%2;
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}