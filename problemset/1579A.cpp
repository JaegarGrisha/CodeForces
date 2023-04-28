#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count_A = 0, count_B = 0, count_C = 0;
        for(char c: s) {
            switch(c) {
                case 'A':
                    count_A++;
                    break;
                case 'B':
                    count_B++;
                    break;
                case 'C':
                    count_C++;
                    break;
            }
        }
        if(count_B==count_A+count_C) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}