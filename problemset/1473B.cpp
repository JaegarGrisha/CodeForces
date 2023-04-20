#include <iostream>
#include <vector>

using namespace std;

int find_generator(string s, vector<int> arr[]) {
    int n = s.length();
    vector<int> v = arr[n-1];
    int ans = n;
    for(int i: v) {
        string gen = s.substr(0, i);
        bool found = true;
        for(int j=1; j<n/i; j++) {
            if(s.substr(j*i, i)!=gen) {
                found = false;
                break;
            }
        }
        if(found) {
            ans = i;
            break;
        }
    }
    return ans;
}

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    return gcd(b, a%b);
}

int main(void) {
    vector<int> arr[20];
    for(int i=1; i<=20; i++) {
        arr[i-1].push_back(1);
        for(int j=2; j<=i; j++) {
            if(i%j==0) {
                arr[i-1].push_back(j);
            }
        }
    }
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = find_generator(s1, arr), n2 = find_generator(s2, arr);
        if(s1.substr(0, n1)==s2.substr(0, n2)) {
            int reps1 = s1.length()/n1, reps2 = s2.length()/n2;
            int x = gcd(reps1, reps2);
            int length = (reps1/x) * (reps2/x) * x;
            while(length--) {
                cout << s1.substr(0, n1);
            }
            cout << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
}