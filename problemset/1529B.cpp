#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x;
        int max_len = 0;
        int count = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x==0) {
                count++;
            }
            else {
                max_len = max(max_len, count);
                count = 0;
            }
        }
        cout << max(max_len, count) << endl;
    }
    return 0;
}