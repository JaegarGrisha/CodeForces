#include <iostream>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    int count_zeros = 0, count_ones = 0;
    for(char c: s) {
        if(c=='r') {
            count_zeros++;
        }
        else if(c=='n') {
            count_ones++;
        }
    }
    while(count_ones--) {
        cout << "1 ";
    }
    while(count_zeros--) {
        cout << "0 ";
    }
    cout << endl;
    return 0;
}