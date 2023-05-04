#include <iostream>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    for(char c: s) {
        if(!(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U' || c=='y' || c=='Y')) {
            cout << '.';
            if(c>='A' && c<='Z') {
                cout << (char)(c-'A'+'a');
            }
            else {
                cout << c;
            }
        }
    }
    cout << endl;
    return 0;
}