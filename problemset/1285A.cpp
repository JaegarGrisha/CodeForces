#include <iostream>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    int count_L = 0, count_R = 0;
    for(char c: s) {
        if(c=='L') {
            count_L++;
        }
        else {
            count_R++;
        }
    }
    cout << count_L + count_R + 1 << endl;
    return 0;
}