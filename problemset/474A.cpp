#include <iostream>

using namespace std;

char get_correct_char(char shifted_to, char c) {
    string line1 = "qwertyuiop";
    string line2 = "asdfghjkl;";
    string line3 = "zxcvbnm,./";
    if(shifted_to=='L') {
        for(int i=0; i<line1.length(); i++) {
            if(line1[i]==c) {
                if(i==9) {
                    return line1[i];
                }
                else {
                    return line1[i+1];
                }
            }
            if(line2[i]==c) {
                if(i==9) {
                    return line2[i];
                }
                else {
                    return line2[i+1];
                }
            }
            if(line3[i]==c) {
                if(i==9) {
                    return line3[i];
                }
                else {
                    return line3[i+1];
                }
            }
        }
    }
    else if(shifted_to=='R') {
        for(int i=0; i<line1.length(); i++) {
            if(line1[i]==c) {
                if(i==0) {
                    return line1[i];
                }
                else {
                    return line1[i-1];
                }
            }
            if(line2[i]==c) {
                if(i==0) {
                    return line2[i];
                }
                else {
                    return line2[i-1];
                }
            }
            if(line3[i]==c) {
                if(i==0) {
                    return line3[i];
                }
                else {
                    return line3[i-1];
                }
            }
        }
    }
}

int main(void) {
    char c;
    string s;
    cin >> c >> s;
    for(char x: s) {
        cout << get_correct_char(c, x);
    }
    cout << endl;
    return 0;
}