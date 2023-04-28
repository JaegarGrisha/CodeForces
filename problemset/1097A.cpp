#include <iostream>

using namespace std;

int main(void) {
    string table;
    cin >> table;
    string hand;
    bool can_play = false;
    for(int i=0; i<5; i++) {
        cin >> hand;
        if(table[0]==hand[0] || table[1]==hand[1]) {
            can_play = true;
        }
    }
    cout << (can_play ? "YES" : "NO") << endl;
    return 0;
}