#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(a-1);
        int second = abs(b-c) + abs(c-1);
        int output;
        if(first==second) {
            output = 3;
        }
        else if(first > second) {
            output = 2;
        }
        else {
            output = 1;
        }
        cout << output << endl;
    }
    return 0;
}