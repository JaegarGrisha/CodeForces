#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    bool is_magic_number = true;
    bool found_1 = false, found_14 = false, found_144 = false;
    for(char c: s) {
        if(c=='1') {
            found_1 = true;
            found_14 = false;
            found_144 = false;
        }
        else if(c=='4') {
            if(found_1) {
                found_1 = false;
                found_14 = true;
                found_144 = false;
            }
            else if(found_14) {
                found_1 = false;
                found_14 = false;
                found_144 = true;
            }
            else {
                is_magic_number = false;
                break;
            }
        }
        else {
            is_magic_number = false;
            break;
        }
    }
    cout << (is_magic_number ? "YES" : "NO") << endl;
    return 0;
}