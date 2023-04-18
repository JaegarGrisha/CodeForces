#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    stack<char> my_stack;
    for(char c: s) {
        if(my_stack.size()>0 && my_stack.top()!=c) {
            my_stack.pop();
        }
        else {
            my_stack.push(c);
        }
    }
    cout << my_stack.size() << endl;
    return 0;
}