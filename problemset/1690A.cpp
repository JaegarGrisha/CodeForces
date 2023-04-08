#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int first, second, third;
        if(n%3==0) {
            second = n/3;
            first = n/3 + 1;
            third = n/3 - 1;
        }
        else if(n%3==1) {
            second = n/3;
            first = n/3 + 2;
            third = n/3 - 1;
        }
        else {
            second = n/3 + 1;
            first = n/3 + 2;
            third = n/3 - 1;
        }
        cout << second << " " << first << " " << third << endl;
    }
}