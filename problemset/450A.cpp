#include <iostream>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int x;
    int pos, max_iters = 0;
    for(int i=0; i<n; i++) {
        cin >> x;
        x = x/m + (x%m==0 ? 0 : 1);
        if(x>=max_iters) {
            max_iters = x;
            pos = i+1;
        }
    }
    cout << pos << endl;
    return 0;
}