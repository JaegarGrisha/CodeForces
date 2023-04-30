#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << (n<9 ? -10 : n-9)/10 + 1 << endl;
    }
    return 0;
}