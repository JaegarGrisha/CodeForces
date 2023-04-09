#include <iostream>

using namespace std;

int main(void) {
    int num_players, num_teams;
    cin >> num_players >> num_teams;
    long long x = num_players - (num_teams-1);
    long long max_num = (x*(x-1)) / 2;
    long long min_num = 0;

    if(num_players%num_teams!=0) {
        x = num_players / num_teams;
        int num_teams_more_players = num_players % num_teams;
        long long a = (x*(x-1))/2;
        long long b = (x*(x+1))/2;
        min_num = num_teams_more_players*b + (num_teams-num_teams_more_players)*a;
    }
    else {
        x = num_players / num_teams;
        long long a = (x*(x-1))/2;
        min_num = num_teams*a;
    }
    cout << min_num << " " << max_num << endl;
    return 0;
}