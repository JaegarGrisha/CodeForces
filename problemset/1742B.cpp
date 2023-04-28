#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        set<int> my_set;
        for(int i=0; i<n; i++) {
            cin >> x;
            my_set.insert(x);
        }
        if(n==my_set.size()) {
            cout << "YES" << endl;;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}