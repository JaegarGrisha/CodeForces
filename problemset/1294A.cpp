#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        bool possible = false;
        if((a+b+c+n)%3==0) {
            int x = (a+b+c+n)/3;
            if(a<=x && b<=x && c<=x) {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}