#include <iostream>

using namespace std;

int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    if(n<=m && n<=k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}