#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==2) {
            cout << -1 << endl;
            continue;
        }
        int row_len_count = 0;
        for(int i=1; i<=n*n; i+=2) {
            cout << i << " ";
            row_len_count++;
            if(row_len_count%n==0) {
                cout << endl;
            }
        }
        for(int i=2; i<=n*n; i+=2) {
            cout << i << " ";
            row_len_count++;
            if(row_len_count%n==0) {
                cout << endl;
            }
        }
    }
    return 0;
}