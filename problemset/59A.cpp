#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count_upper = 0, count_lower = 0;
    for(char c: s) {
        if(c<='z' && c>='a') {
            count_lower++;
        }
        else if(c<='Z' && c>='A') {
            count_upper++;
        }
    }
    if(count_upper<=count_lower) {
        for(char c: s) {
            if(c<='z' && c>='a') {
                cout << c;
            }
            else if(c<='Z' && c>='A') {
                cout << (char)(c-'A'+'a');
            }
        }
        cout << endl;
    }
    else {
        for(char c: s) {
            if(c<='z' && c>='a') {
                cout << (char)(c-'a'+'A');
            }
            else if(c<='Z' && c>='A') {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}