#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string num;
        int n;
        char k;
        cin >> n >> k >> num;
        if(num[0]<k) {
            cout << k << num << endl;
        }
        else {
            bool found = false;
            for(int i=0; i<n-1; i++) {
                if(num[i]>=k && num[i+1]<k) {
                    found = true;
                    cout << num.substr(0, i+1) << k << num.substr(i+1, n-i-1) << endl;
                    break;
                }
            }
            if(!found) {
                cout << num << k << endl;
            }
        }
    }
    return 0;
}