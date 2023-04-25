#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    char cur_char = 'a'; 
    int cur, next;
    for(char c: s) {
        cur = cur_char - 'a';
        next = c - 'a';
        if(cur<next) {
            count += min(next-cur, cur-next+26);
        }
        else if(cur>next) {
            count += min(cur-next, next-cur+26);
        }
        cur_char = c;
    }
    cout << count << endl;
    return 0;
}