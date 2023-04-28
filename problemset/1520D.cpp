#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        map<int, long long> my_map;
        for(int i=0; i<n; i++) {
            cin >> x;
            x = x - i - 1;
            if(my_map.find(x)==my_map.end()) {
                my_map.insert(make_pair(x, 1));
            }
            else {
                my_map[x]++;
            }
        }
        long long total_count = 0;
        for(pair<int, long long> p: my_map) {
            total_count += ((p.second)*(p.second-1))/2;
        }
        cout << total_count << endl;
    }
    return 0;
}