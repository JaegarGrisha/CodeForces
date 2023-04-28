#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string base = "";
        for(int i=0; i<b; i++) {
            base = base + (char)('a'+i);
        }
        string output = "";
        while((output+base).length()<=n) {
            output = output + base;
        }
        int rem_length = n-output.length();
        output = output + base.substr(0, rem_length);
        cout << output << endl;
    }
    return 0;
}