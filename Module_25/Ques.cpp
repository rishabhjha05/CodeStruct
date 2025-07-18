#include <iostream>
using namespace std;
class book
{
public:
    string name;
    int price;

    int countBook(int p)
    {
        if (price < p)
            return 1;
        return 0;
    }

    bool isBookPresent(string nm)
    {
        if (name == nm)
            return true;
        return false;
    }
};
int main()
{
    book book1;
    book1.name = "Imperial Imperfaction";
    book1.price = 500;
    cout << book1.countBook(300) << "\n";
    cout << book1.isBookPresent("Imperial Imperfaction");
    return 0;
}