#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int total_count = 0;
    for(int i=1; i<=n; i++) {
        if(i==n) {
            total_count += n;
        }
        else {
            total_count += i*(n-i);
        }
    }
    cout << total_count << endl;
    return 0;
}