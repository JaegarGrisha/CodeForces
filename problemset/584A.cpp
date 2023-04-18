#include <iostream>

using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;
    string output = to_string(t);
    if(t<10) {
        for(int i=1; i<n; i++) {
            output = output + "0";
        }
    }
    else {
        if(n==1) {
            output = "-1";
        }
        else {
            for(int i=2; i<n; i++) {
                output = output + "0";
            }
        }
    }
    cout << output << endl;
    return 0;
}