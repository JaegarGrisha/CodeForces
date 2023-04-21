#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string cur_s, final_s;
    cin >> cur_s >> final_s;
    int num_moves = 0;
    int x, y;
    for(int i=0; i<n; i++) {
        x = cur_s[i]-'0';
        y = final_s[i]-'0';
        num_moves += min(abs(x-y), min(10-x+y, 10+x-y));
    }
    cout << num_moves << endl;
    return 0;
}