#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void traversal(vector<int> next[], bool has_cat[], int max_consecutive_cats_found[], int cur_consecutive_cats_found[], bool visited[], int cur_node) {
    for(int i=0; i<next[cur_node].size(); i++) {
        int n = next[cur_node][i];
        if(visited[n]) {
            next[cur_node].erase(next[cur_node].begin()+i);
            i--;
            continue;
        }
        visited[n] = true;
        cur_consecutive_cats_found[n] = has_cat[cur_node] ? (cur_consecutive_cats_found[cur_node]+(has_cat[n] ? 1 : 0)) : 1;
        max_consecutive_cats_found[n] = max(cur_consecutive_cats_found[n], max_consecutive_cats_found[cur_node]);
        traversal(next, has_cat, max_consecutive_cats_found, cur_consecutive_cats_found, visited, n);
    }
}

int main(void) {
    int n, m, x;
    cin >> n >> m;
    bool has_cat[n];
    bool is_leaf[n];
    for(int i=0; i<n; i++) {
        cin >> x;
        has_cat[i] = (x==1);
    }
    int from, to;
    vector<int> next[n];
    for(int i=0; i<n-1; i++) {
        cin >> from >> to;
        next[from-1].push_back(to-1);
        next[to-1].push_back(from-1);
    }
    bool visited[n];
    for(int i=0; i<n; i++) {
        visited[i] = false;
    }
    visited[0] = true;
    int max_consecutive_cats_found[n];
    memset(max_consecutive_cats_found, 0, n*sizeof(int));
    int cur_consecutive_cats_found[n];
    memset(cur_consecutive_cats_found, 0, n*sizeof(int));
    cur_consecutive_cats_found[0] = max_consecutive_cats_found[0] = has_cat[0] ? 1 : 0;
    traversal(next, has_cat, max_consecutive_cats_found, cur_consecutive_cats_found, visited, 0);

    for(int i=0; i<n; i++) {
        if(next[i].size()==0) {
            is_leaf[i] = true;
        }
        else {
            is_leaf[i] = false;
        }
    }
    int count = 0;
    for(int i=0; i<n; i++) {
        if(is_leaf[i]) {
            if(max_consecutive_cats_found[i] <= m) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}