#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        char mapping[50];
        for(int i=0; i<50; i++) {
            mapping[i] = 0;
        }
        bool possible = true;
        for(int i=0; i<n; i++) {
            if(mapping[arr[i]-1]==0) {
                mapping[arr[i]-1] = s[i];
            }
            else {
                if(mapping[arr[i]-1]!=s[i]) {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}