#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int> my_set;
        int x;
        for(int i=0; i<n; i++) {
            cin >> x;
            my_set.insert(x);
        }
        cout << my_set.size() << endl;
    }
    return 0;
}