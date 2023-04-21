#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int arr[s.length()+1];
    arr[0] = arr[s.length()] = 0;
    for(int i=1; i<s.length(); i++) {
        if(s[i-1]==s[i]) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }
    }
    for(int i=1; i<=s.length(); i++) {
        arr[i] += arr[i-1];
    }

    int n, l, r;
    cin >> n;
    while(n--) {
        cin >> l >> r;
        cout << arr[r-1] - arr[l-1] << endl;
    }
    return 0;
}