#include <iostream>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    for(int i=1, pos=0; pos<n; pos+=i, i++) {
        cout << s[pos];
    }
    cout << endl;
    return 0;
}