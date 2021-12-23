#include <iostream>
using namespace std;

class Shop
{

    int itemId[100];
    int price[100];
    int counter;

public:
    int initcounter() { counter = 0; }
    void getIdPrice(void);
    void display(void);
};

void Shop ::getIdPrice()
{
    cout << "Enter the Item Id " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price " << endl;
    cin >> price[counter];
    counter++;
}

void Shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Id of a item No " << counter << " is " << itemId[i] << endl;
        cout << "The price of  item No " << counter << " is " << price[i] << endl;
    }
}

int main()
{
    Shop s;
    s.initcounter();
    s.getIdPrice();
    s.getIdPrice();
    s.getIdPrice();
    s.display();

    return 0;
}
