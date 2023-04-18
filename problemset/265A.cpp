#include <iostream>

using namespace std;

int main(void) {
    string str, instructions;
    cin >> str >> instructions;
    int cur_pos = 0;
    int s_i = 0;
    for(int i_i=0; s_i<str.length() && i_i<instructions.length(); i_i++) {
        if(str[s_i]==instructions[i_i]) {
            s_i++;
        }
    }
    cout << s_i+1 << endl;
    return 0;
}