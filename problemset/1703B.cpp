#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        int arr[26];
        for(int i=0; i<26; i++) {
            arr[i] = 0;
        }
        for(char c: s) {
            arr[c-'A'] = 1;
        }
        int x = 0;
        for(int i=0; i<26; i++) {
            x += arr[i];
        }
        cout << s.length()+x << endl;
    }
    return 0;
}