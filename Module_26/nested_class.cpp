#include <iostream>
using namespace std;
class gun
{
private:
    string name;
    string scope;
    int damage;

public:
    void setName(string name)
    {
        gun::name = name;
    }
    void setScope(string scope)
    {
        this->scope = scope;
    }
    void setDamage(int damage)
    {
        gun::damage = damage;
    }
    string getName()
    {
        return name;
    }
    string getScope()
    {
        return scope;
    }
    int getDamage()
    {
        return damage;
    }
};
class player
{
private:
    class helmet
    {
    private:
        int level;
        int health = 0;

    public:
        void setLevel(int level)
        {
            helmet::level = level;
        }
        void setHealth(int health)
        {
            this->health = health;
        }
        int getLevel()
        {
            return level;
        }
        int getHealth()
        {
            return health;
        }
    };

    string name;
    int health;
    int kills;
    bool isAlive;
    gun Gun;
    helmet Helmet;

public:
    void setName(string name)
    {
        player::name = name;
    }
    void setHealth(int health)
    {
        player::health = health;
    }
    void setKills(int kills)
    {
        player::kills = kills;
    }
    void setisAlive(bool isAlive)
    {
        player::isAlive = isAlive;
    }
    void setGun(gun Gun)
    {
        player::Gun = Gun;
    }
    void setHelmet(int level)
    {
        helmet *Helmet = new helmet;
        Helmet->setLevel(level);
        if (level == 1)
            Helmet->setHealth(25);
        else if (level == 2)
            Helmet->setHealth(50);
        else if (level == 3)
            Helmet->setHealth(100);
        else
            cout << "error, given argument is invalid";
        player::Helmet = *Helmet;
    }
    string getName()
    {
        return name;
    }
    int getHealth()
    {
        return health;
    }
    int getKills()
    {
        return kills;
    }
    bool getisAlive()
    {
        return isAlive;
    }
    gun getGun()
    {
        return Gun; // this will return object named Gun so store it in object only
    }
    helmet getHelmet()
    {
        return Helmet;
    }
};

int main()
{
    gun gun1, gun2;
    {
        gun1.setName("AKM");
        gun1.setScope("4x");
        gun1.setDamage(49);

        gun2.setName("AWM");
        gun2.setScope("8x");
        gun2.setDamage(105);
    }

    player player1;
    player1.setName("Rishabh Jha");
    player1.setHealth(85);
    player1.setKills(16);
    player1.setisAlive(1);
    player1.setGun(gun2);
    player1.setHelmet(2);

    cout << "\n       PLAYER \nPlayer Name : " << player1.getName();
    cout << "\nPlayer Health : " << player1.getHealth();
    cout << "\nPlayer Kills : " << player1.getKills();
    cout << "\nPlayer alive : ";
    (player1.getisAlive()) ? cout << "Yes" : cout << "No";
    cout << "\n\n      GUN DETAILS\nPlayer's gun is : " << player1.getGun().getName();
    cout << "\nPlayer's gun damage is : " << player1.getGun().getDamage();
    cout << "\nPlayer's gun scope is : " << player1.getGun().getScope();
    cout << "\n\n      HELMET DETAILS\nPlayer's helmet level : " << player1.getHelmet().getLevel();
    cout << "\nPlayer's helmet health : " << player1.getHelmet().getHealth();
    return 0;
}