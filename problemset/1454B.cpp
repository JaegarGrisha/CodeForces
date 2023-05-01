#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        map<int, int> tickets;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(tickets.find(x)==tickets.end()) {
                tickets.insert(make_pair(x, i));
            }
            else {
                tickets[x] = -1;
            }
        }
        int min_val = 2000000;
        int min_val_pos = -1;
        for(pair<int, int> p: tickets) {
            if(p.second!=-1 && p.first<min_val) {
                min_val = p.first;
                min_val_pos = p.second+1;
            }
        }
        cout << min_val_pos << endl;
    }
    return 0;
}