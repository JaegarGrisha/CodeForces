#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int max_val = max(a, max(b, c));
        int min_val = min(a, min(b, c));
        if(max_val>a && a>min_val) {
            cout << a << endl;
        }
        else if(max_val>b && b>min_val) {
            cout << b << endl;
        }
        else if(max_val>c && c>min_val) {
            cout << c << endl;
        }
    }
    return 0;
}