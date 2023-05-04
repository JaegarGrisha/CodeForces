#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int arr[26];
    for(int i=0; i<26; i++) {
        arr[i] = 0;
    }
    for(char c: s) {
        arr[c-'a']++;
    }
    int num_distinct = 0;
    for(int i=0; i<26; i++) {
        if(arr[i]>0) {
            num_distinct++;
        }
    }
    if(num_distinct%2==1) {
        cout << "IGNORE HIM!" << endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}