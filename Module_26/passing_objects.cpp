#include <iostream>
using namespace std;

class player
{
private:
    int health;
    int score;
    int kills;
    bool isAlive;

public:
    int getHealth()
    {
        return health;
    }
    int getScore()
    {
        return score;
    }
    int getKills()
    {
        return kills;
    }
    bool getisAlive()
    {
        return isAlive;
    }
    void setHealth(int health)
    {
        player::health = health;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setKills(int kills)
    {
        this->kills = kills;
    }
    void setisAlive(bool isAlive)
    {
        player::isAlive = isAlive;
    }
};
player maxKill(player a, player b)
{
    if (a.getKills() > b.getKills())
        return a;
    return b;
}
int main()
{
    player player1, player2, player3;

    player1.setHealth(89);
    player1.setisAlive(true);
    player1.setKills(16);
    player1.setScore(53);

    player2.setHealth(19);
    player2.setisAlive(false);
    player2.setKills(4);
    player2.setScore(13);

    cout << "           PLAYER 1     PLAYER 2\n";
    cout << "Health :     " << player1.getHealth() << "           " << player2.getHealth() << "\n";
    cout << "Score  :     " << player1.getScore() << "           " << player2.getScore() << "\n";
    cout << "Kills  :     " << player1.getKills() << "           " << player2.getKills() << "\n";
    cout << "Alive  :     " << player1.getisAlive() << "            " << player2.getisAlive();

    player3 = maxKill(player1, player2);
    /*this will copy the object with max value of Kills into player 3
    not just one data member get copy ,all the data member get coppied*/
    cout << "\n           PLAYER 3\n";
    cout << "Health :     " << player1.getHealth() << "\n";
    cout << "Score  :     " << player1.getScore() << "\n";
    cout << "Kills  :     " << player1.getKills() << "\n";
    cout << "Alive  :     " << player1.getisAlive();

    return 0;
}