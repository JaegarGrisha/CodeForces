#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    map<string, string> lang_correspondence;
    string a, b;
    for(int i=0; i<m; i++) {
        cin >> a >> b;
        lang_correspondence[a] = b;
    }
    for(int i=0; i<n; i++) {
        cin >> a;
        if(a.length() < lang_correspondence[a].length()) {
            b = a;
        }
        else if(a.length() > lang_correspondence[a].length()) {
            b = lang_correspondence[a];
        }
        else {
            b = a;
        }
        cout << b << " ";
    }
    cout << endl;
    return 0;
}