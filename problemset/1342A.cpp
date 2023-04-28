#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << min(a*(x+y), abs(x-y)*a+min(x, y)*b) << endl;
    }
    return 0;
}