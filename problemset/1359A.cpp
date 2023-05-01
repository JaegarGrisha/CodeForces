#include <iostream>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while(t--) {
        int total_num_cards, num_jokers, num_players;
        cin >> total_num_cards >> num_jokers >> num_players;
        int cards_per_player = total_num_cards/num_players, second_max_num_jokers;
        if(cards_per_player >= num_jokers) {
            cout << num_jokers << endl;
        }
        else {
            num_jokers = num_jokers - cards_per_player;
            num_players--;
            second_max_num_jokers = num_jokers/num_players;
            if(num_jokers%num_players!=0) {
                second_max_num_jokers++;
            }
            cout << cards_per_player - second_max_num_jokers << endl;
        }
    }
    return 0;
}