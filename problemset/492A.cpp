#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x = 1;
    int count = 0;
    while(true) {
        n = n - ((x*(x+1))/2);
        x++;
        if(n>0) {
            count++;
        }
        else if(n==0) {
            count++;
            break;
        }
        else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}