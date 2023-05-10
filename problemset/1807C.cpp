#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        map<char, vector<int> > my_map;
        cin >> n >> s;
        for(int i=0; i<s.length(); i++) {
            if(my_map.find(s[i])==my_map.end()) {
                vector<int> v;
                v.push_back(i);
                my_map.insert(make_pair(s[i], v));
            }
            else {
                my_map[s[i]].push_back(i);
            }
        }
        bool possible = true;
        for(pair<char, vector<int> > p: my_map) {
            int modulo = p.second[0]%2;
            for(int i=1; i<p.second.size(); i++) {
                if(p.second[i]%2!=modulo) {
                    possible = false;
                    break;
                }
            }
            if(!possible) {
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}