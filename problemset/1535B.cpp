#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}
int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        vector<int> v;
        int count_evens = 0;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x%2==0) {
                count_evens++;
            }
            else {
                v.push_back(x);
            }
        }
        int good_count = (n*(n-1)/2) - ((n-count_evens)*(n-count_evens-1)/2);
        for(int i=0; i<v.size(); i++) {
            for(int j=i+1; j<v.size(); j++) {
                x = gcd(v[i], v[j]);
                if(x>1) {
                    good_count++;
                }
            }
        }
        cout << good_count << endl;
    }
    return 0;
}