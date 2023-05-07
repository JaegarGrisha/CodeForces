#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        string output = "";
        for(int i=0; i<n; i++) {
            output = output + '0';
        }
        for(int i=0; i<n; i++) {
            for(int j=i; j<i+n; j++) {
                if(s[j]=='1') {
                    output[j-i] = '1';
                }
            }
        }
        cout << output << endl;
    }
    return 0;
}