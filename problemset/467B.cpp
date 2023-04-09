#include <iostream>

using namespace std;

string binary_rep(int x) {
    string ret = "";
    while(x!=0) {
        ret = to_string(x%2) + ret;
        x = x/2;
    }
    return ret;
}

int count_diff_soldiers(int a, int b) {
    int x = a^b;
    string binary_string = binary_rep(x);
    int count = 0;
    for(int i=0; i<binary_string.length(); i++) {
        if(binary_string[i]=='1') {
            count++;
        }
    }
    return count;
}
int main(void) {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m];
    int fedor;
    for(int i=0; i<m; i++) {
        cin >> arr[i];
    }
    cin >> fedor;
    int count = 0;
    for(int i=0; i<m; i++) {
        if(count_diff_soldiers(arr[i], fedor)<=k) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}