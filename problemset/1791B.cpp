#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        bool candy = false;
        int n;
        string s;
        cin >> n >> s;
        int x = 0, y = 0;
        for(char c: s) {
            switch(c) {
                case 'U': 
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
            }
            if(x==1 && y==1) {
                candy = true;
                break;
            }
        }
        cout << (candy ? "YES" : "NO") << endl;
    }
    return 0;
}
