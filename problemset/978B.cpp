#include <iostream>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    bool was_x = false;
    int cur_count = 0;
    int total_count = 0;
    for(char c: s) {
        if(c=='x') {
            cur_count++;
        }
        else {
            total_count += max(0, cur_count-2);
            cur_count = 0;
        }
    }
    if(s[n-1]=='x') {
        total_count += max(0, cur_count-2);
    }
    cout << total_count << endl;
    return 0;
}