#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    vector<int> q_pos;
    int cum_count_a[s.length()];
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='Q') {
            q_pos.push_back(i);
        }
        if(s[i]=='A') {
            cum_count_a[i] = 1;
        }
        else {
            cum_count_a[i] = 0;
        }
    }
    for(int i=1; i<s.length(); i++) {
        cum_count_a[i] += cum_count_a[i-1];
    }
    int start, end;
    int total_count = 0;
    for(int i=0; i<q_pos.size(); i++) {
        for(int j=i+1; j<q_pos.size(); j++) {
            start = q_pos[i];
            end = q_pos[j];
            total_count += (cum_count_a[end]-cum_count_a[start]);
        }
    }
    cout << total_count << endl;
    return 0;
}