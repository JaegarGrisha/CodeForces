#include <iostream>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    bool possible = true;
    int count = 0;
    if(m%n==0) {
        int k = m/n;
        while(k%2==0) {
            k = k/2;
            count++;
        }
        while(k%3==0) {
            k = k/3;
            count++;
        }
        if(k>1) {
            possible = false;
        }
    }
    else {
        possible = false;
    }
    cout << (possible ? count : -1) << endl;
    return 0;
}