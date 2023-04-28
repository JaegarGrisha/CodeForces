#include <iostream>

using namespace std;

string int_to_bstring(int n) {
    if(n==0) {
        return "0";
    }
    string output = "";
    int x;
    while(n!=0) {
        x = n%2;
        n = n/2;
        output = to_string(x) + output;
    }
    return output;
}

int bstring_to_int(string s) {
    int output = 0;
    for(char c: s) {
        output = output*2 + (c-'0');
    }
    return output;
}

string create_new_bstring(string orig_bstring, int pos_with_one_to_complement) {
    int len = orig_bstring.length();
    string output = orig_bstring.substr(0, pos_with_one_to_complement) + "0";
    for(int i=output.length(); i<orig_bstring.length(); i++) {
        output = output + "1";
    }
    return output;
}

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string bstring = int_to_bstring(n);
        int answer = n;
        string new_bstring;
        for(int i=0; i<bstring.length(); i++) {
            if(bstring[i]=='1') {
                new_bstring = create_new_bstring(bstring, i);
                answer = bstring_to_int(new_bstring);
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}