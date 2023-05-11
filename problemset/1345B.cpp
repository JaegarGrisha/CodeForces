#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
            int n;
        cin >> n;
        int i=0; 
        int x;
        int count = 0;
        while(n>1) {
            while(true) {
                x = (3*i*i + i)/2;
                if(x>n) {
                    i--;
                    count++;
                    n -= (3*i*i+i)/2;
                    i = 0;
                    break;
                }
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}