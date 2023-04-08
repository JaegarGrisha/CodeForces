#include <iostream>

using namespace std;

int main(void) {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = n/2020;
        if(n>=x*2020 && n<=x*2021) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}