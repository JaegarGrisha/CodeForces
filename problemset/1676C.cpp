#include <iostream>

using namespace std;

int compute_distance(string a, string b) {
    int distance = 0;
    for(int i=0; i<a.length(); i++) {
        distance += abs(a[i]-b[i]);
    }
    return distance;
}

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s[n];
        for(int i=0; i<n; i++) {
            cin >> s[i];
        }
        int min_distance = 1000000000;
        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                min_distance = min(min_distance, compute_distance(s[i], s[j]));
            }
        }
        cout << min_distance << endl;
    }
    return 0;
}