#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x;
        vector<pair<int, int> > v;
        for(int i=0; i<n; i++) {
            cin >> x;
            v.push_back(make_pair(x, 0));
        }
        for(int i=0; i<n; i++) {            
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(), comparator);
        for(int i=0; i<n; i++) {
            if(v[i].first<=k) {
                k += v[i].second;
            }
            else {
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}