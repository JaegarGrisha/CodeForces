#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int n;
    string s;
    cin >> n >> s;
    map<string, int> my_map;
    string substring;
    for(int i=0; i<s.length()-1; i++) {
        substring = s.substr(i, 2);
        if(my_map.find(substring)==my_map.end()) {
            my_map.insert(make_pair(substring, 1));
        }
        else {
            my_map[substring]++;
        }
    }
    int max_occurrence = 0;
    string str_max_occurrence = "";
    for(map<string, int>::iterator itr=my_map.begin(); itr!=my_map.end(); itr++) {
        if(itr->second > max_occurrence) {
            max_occurrence = itr->second;
            str_max_occurrence = itr->first;
        }
    }
    cout << str_max_occurrence << endl;
    return 0;
}