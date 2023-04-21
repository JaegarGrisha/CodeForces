#include <iostream>
#include <set>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int square = 0, cube = 0;
        set<int> my_set;
        for(int i=1; i<=n && (square=i*i)<=n; i++) {
            my_set.insert(square);
        }
        for(int i=1; i<=n && (cube=i*i*i)<=n; i++) {
            my_set.insert(cube);
        }
        cout << my_set.size() << endl;
    }
    return 0;
}