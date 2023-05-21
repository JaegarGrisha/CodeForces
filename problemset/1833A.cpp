#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        set<string> my_set;
        for(int i=0; i<n-1; i++) {
            my_set.insert(s.substr(i, 2));
        }
        cout << my_set.size() << endl;
    }
    return 0;
}