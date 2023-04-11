#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        stack<char> my_stack;
        int num_reg_bracket = 0;
        for(char c: s) {
            if(!my_stack.empty() && my_stack.top()=='(' && c==')') {
                my_stack.pop();
                num_reg_bracket++;
            }
            else {
                my_stack.push(c);
            }
        }
        n -= num_reg_bracket*2;
        int x = 0;
        while(!my_stack.empty() && my_stack.top()==')') {
            my_stack.pop();
            x++;
        }
        cout << n-n/2-x << endl;
    }
    return 0;
}