#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string sn = to_string(n);
        int total_count = (sn.length()-1)*9 + (sn[0]-'1');
        int k = sn[0]-'0';
        int x = k;
        for(int i=1; i<sn.length(); i++) {
            x = x*10 + k;
        }
        if(x<=n) {
            total_count++;
        }
        cout << total_count << endl;
    }
    return 0;
}