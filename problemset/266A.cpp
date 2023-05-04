#include <iostream>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    char prev = 0;
    for(char c: s) {
        if(prev == c) {
            count++;
        }
        prev = c;
    }
    cout << count << endl;
    return 0;
}