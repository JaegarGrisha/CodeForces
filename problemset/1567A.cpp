#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s, output_s = "";
        cin >> n >> s;
        for(char c: s) {
            switch(c) {
                case 'D': 
                    output_s += "U";
                    break;
                case 'U':
                    output_s += 'D';
                    break;
                case 'L':
                case 'R':
                    output_s += c;
                    break;
            }
        }
        cout << output_s << endl;
    }
    return 0;
}