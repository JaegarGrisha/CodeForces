#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        string board[n];
        for(int i=0; i<n; i++) {
            cin >> board[i];
        }
        if(board[r-1][c-1]=='B') {
            cout << 0 << endl;
            continue;
        }
        bool all_white = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j]=='B') {
                    all_white = false;
                    break;
                }
            }
            if(!all_white) {
                break;
            }
        }
        if(all_white) {
            cout << -1 << endl;
            continue;
        }
        bool found = false;
        for(int i=0; i<n; i++) {
            if(board[i][c-1]=='B') {
                found = true;
            }
        }
        if(found) {
            cout << 1 << endl;
        }
        else {
            for(int i=0; i<m; i++) {
                if(board[r-1][i]=='B') {
                    found = true;
                }
            }
            if(found) {
                cout << 1 << endl;
            }
            else {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}