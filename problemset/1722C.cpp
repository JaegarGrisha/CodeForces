#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
    int N = 26*26*26;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool a[N], b[N], c[N];
        memset(a, 0, N*sizeof(bool));
        memset(b, 0, N*sizeof(bool));
        memset(c, 0, N*sizeof(bool));
        string x;
        int idx;
        for(int i=0; i<n; i++) {
            cin >> x;
            idx = (x[0]-'a')*26*26 + (x[1]-'a')*26 + (x[2]-'a');
            a[idx] = true;
        }
        for(int i=0; i<n; i++) {
            cin >> x;
            idx = (x[0]-'a')*26*26 + (x[1]-'a')*26 + (x[2]-'a');
            b[idx] = true;
        }
        for(int i=0; i<n; i++) {
            cin >> x;
            idx = (x[0]-'a')*26*26 + (x[1]-'a')*26 + (x[2]-'a');
            c[idx] = true;
        }
        int sa = 0, sb = 0, sc = 0;
        for(int i=0; i<N; i++) {
            if(a[i] && b[i] && c[i]) {
                // do nothing
            }
            else if(a[i] && b[i]) {
                sa += 1;
                sb += 1;
            }
            else if(b[i] && c[i]) {
                sb += 1;
                sc += 1;
            }
            else if(c[i] && a[i]) {
                sa += 1;
                sc += 1;
            }
            else if(a[i]) {
                sa += 3;
            }
            else if(b[i]) {
                sb += 3;
            }
            else if(c[i]) {
                sc += 3;
            }
        }
        cout << sa << " " << sb << " " << sc << endl;
    }
    return 0;
}