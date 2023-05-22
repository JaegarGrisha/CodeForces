#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        double time = n * 2.5;
        if(time<15) {
            cout << 15 << endl;
        }
        else {
            if(n%2==1) {
                cout << (long long)((n+1)*2.5) << endl;
            }
            else {
                cout << (long long)(n*2.5) << endl;
            }
        }
    }
    return 0;
}