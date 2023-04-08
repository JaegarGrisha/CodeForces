#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int left_ptr = 0, right_ptr = n-1;
        while(left_ptr<right_ptr) {
            if((s[left_ptr]=='1' && s[right_ptr]=='0') || (s[left_ptr]=='0' && s[right_ptr]=='1')) {
                left_ptr++;
                right_ptr--;
            }
            else {
                break;
            }
        }
        cout << max(right_ptr-left_ptr+1, 0) << endl;
    }
    return 0;
}