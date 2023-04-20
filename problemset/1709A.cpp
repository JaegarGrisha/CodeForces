#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        bool possible = false;
        int key_in_hand;
        cin >> key_in_hand;
        int key_behind_door[3];
        cin >> key_behind_door[0] >> key_behind_door[1] >> key_behind_door[2];
        if(key_behind_door[key_in_hand-1]==0) {
            possible = false;
        }
        else {
            int key_obtained = key_behind_door[key_in_hand-1];
            if(key_behind_door[key_obtained-1]==0) {
                possible = false;
            }
            else {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}