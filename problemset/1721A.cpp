#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int arr[26];
        for(int i=0; i<26; i++) {
            arr[i] = 0;
        }
        string s1, s2;
        cin >> s1 >> s2;
        s1 = s1 + s2;
        for(char c: s1) {
            arr[c-'a']++;
        }
        int x[4] = {0, 0, 0, 0};
        int j = 0;
        for(int i=0; i<26; i++) {
            if(arr[i]!=0) {
                x[j] = arr[i];
                j++;
            }
        }
        int type = 0;
        if(x[3]!=0) {
            type = 5;
        }
        else if(x[2]!=0) {
            type = 3;
        }
        else if(x[1]!=0) {
            if(x[0]==3 || x[1]==3) {
                type = 2;
            }
            else {
                type = 4;
            }
        }
        else {
            type = 1;
        }
        switch(type) {
            case 1:
                cout << 0 << endl;
                break;
            case 2:
                cout << 1 << endl;
                break;
            case 3:
                cout << 2 << endl;
                break;
            case 4:
                cout << 1 << endl;
                break;
            case 5:
                cout << 3 << endl;
                break;
        }
    }
    return 0;
}