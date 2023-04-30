#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int arr[n];
    map<int, int> elem_count;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(elem_count.find(arr[i])==elem_count.end()) {
            elem_count.insert(make_pair(arr[i], 1));
        }
        else {
            elem_count[arr[i]]++;
        }
    }
    int distinct_elems[n];
    distinct_elems[0] = elem_count.size();
    int key;
    for(int i=1; i<n; i++) {
        key = arr[i-1];
        elem_count[key]--;
        if(elem_count[key]==0) {
            elem_count.erase(elem_count.find(key));
        }
        distinct_elems[i] = elem_count.size();
    }
    int x;
    for(int i=0; i<m; i++) {
        cin >> x;
        cout << distinct_elems[x-1] << endl;
    }
    return 0;
}