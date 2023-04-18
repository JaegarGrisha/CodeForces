#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s, output;
        cin >> n >> s;
        if(n!=5) {
            output = "NO";
        }
        else {
            int arr[5];
            for(int i=0; i<5; i++) {
                arr[i] = 0;
            }
            int idx;
            for(char c: s) {
                idx = -1;
                switch(c) {
                    case 'T':
                        idx = 0;
                        break;
                    case 'i':
                        idx = 1;
                        break;
                    case 'm':
                        idx = 2;
                        break;
                    case 'u':
                        idx = 3;
                        break;
                    case 'r':
                        idx = 4;
                        break;
                }
                if(idx!=-1) {
                    arr[idx] = 1;
                }   
            }
            if(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]==5) {
                output = "YES";
            }
            else {
                output = "NO";
            }
        }
        cout << output << endl;
    }
    return 0;
}