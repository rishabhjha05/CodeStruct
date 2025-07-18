#include <iostream>
using namespace std;
class player
{
public:
    string name;
    int health;
    int score;
    int kills;
};
int main()
{
    player player1;
    player1.name = "Rishabh Jha";
    player1.health = 74;
    player1.score = 65;
    player1.kills = 12;
    cout << "Player name : " << player1.name;
    cout << "\nPlayer score : " << player1.score;
    cout << "\nPlayer health : " << player1.health;
    cout << "\nPlayer kills : " << player1.kills;
    return 0;
}