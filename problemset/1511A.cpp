#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        int count = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x==1 || x==3) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}