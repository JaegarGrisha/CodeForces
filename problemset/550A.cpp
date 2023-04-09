#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    bool found = false;

    vector<pair<int, int> > ab, ba;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]=='A' && s[i+1]=='B') {
            ab.push_back(make_pair(i, i+1));
        }
        else if(s[i]=='B' && s[i+1]=='A') {
            ba.push_back(make_pair(i, i+1));
        }
        if(ab.size()>=2 && ba.size()>=2) {
            found = true;
            break;
        }
        else if((ab.size()>=3 && ba.size()==1) || (ab.size()==1 && ba.size()>=3)) {
            break;
        }
    }
    if(!found) {
        if(ab.size()==1) {
            for(int i=0; i<ba.size(); i++) {
                if(ab[0].first!=ba[i].second && ab[0].second!=ba[i].first) {
                    found = true;
                    break;
                }
            }
        }
        if(ba.size()==1) {
            for(int i=0; i<ab.size(); i++) {
                if(ab[i].first!=ba[0].second && ab[i].second!=ba[0].first) {
                    found = true;
                    break;
                }
            }
        }
    }
    cout << (found ? "YES" : "NO") << endl;
    return 0;
}