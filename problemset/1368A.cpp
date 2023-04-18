#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, n, temp;
        cin >> a >> b >> n;
        if(a>b) {
            temp = a;
            a = b;
            b = temp;
        }
        int count = 0;
        while(b <= n) {
            temp = b;
            b = a + b;
            a = temp;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}