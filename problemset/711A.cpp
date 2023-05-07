#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string arrangement[n];
    bool found = false;
    for(int i=0; i<n; i++) {
        cin >> arrangement[i];
        if(!found) {
            if((arrangement[i][0]=='O' && arrangement[i][1]=='O')) {
                arrangement[i][0] = arrangement[i][1] = '+';
                found = true;
            }
            else if(arrangement[i][3]=='O' && arrangement[i][4]=='O') {
                arrangement[i][3] = arrangement[i][4] = '+';
                found = true;
            }
        }
    }
    if(found) {
        cout << "YES" << endl;
        for(int i=0; i<n; i++) {
            cout << arrangement[i] << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}