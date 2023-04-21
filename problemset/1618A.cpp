#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int x, a, b, c;
        for(int i=0; i<4; i++) {
            cin >> x;
        }
        cin >> a >> b >> c;
        cout << (c-a) << " " << (c-b) << " " << (b+a-c) << endl;
    }
    return 0;
}