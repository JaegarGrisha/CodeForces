#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        stack<char> my_stack;
        int count = 0;
        for(char c: s) {
            if(my_stack.empty()) {
                my_stack.push(c);
            }
            else {
                if(my_stack.top()!=c) {
                    my_stack.pop();
                    count++;
                }
                else {
                    my_stack.push(c);
                }
            }
        }
        if(count%2==0) {
            cout << "NET" << endl;
        }
        else {
            cout << "DA" << endl;
        }
    }
    return 0;
}