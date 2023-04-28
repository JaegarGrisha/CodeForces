#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if(n%2==0 || m%2==0) {
            cout << (n*m)/2 << endl;
        }
        else {
            cout << ((n-1)*m)/2+(m-1)/2+1 << endl;
        }
    }
    return 0;
}