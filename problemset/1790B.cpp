#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        int n, s, r;
        cin >> n >> s >> r;
        int max_val = s-r;
        cout << max_val << " ";
        n--;
        while(n--) {
            for(int i=max_val; i>0; i--) {
                if(r-i>=n) {
                    cout << i << " ";
                    max_val = i;
                    r -= i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}