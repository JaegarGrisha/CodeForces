#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        if(a==b) {
            cout << a/2 << endl;
        }
        else if(a>b) {
            cout << (b+min(3*b, a))/4 << endl;
        }
        else {
            cout << (a+min(3*a, b))/4 << endl;
        }
    }
    return 0;
}