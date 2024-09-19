#include "Food.h"
#include <iostream>
using namespace std;

class Item : public Food
{
    public:
        Item();
        Item(string breakfast,string maindishes,string salad,string beverage,string snacks,string dessert);
        virtual~Item();

        void setMenuArray(int index,string name);
        void setMenuPrice(int index,int price);
        void setgeneralItems(int index,string item);

        int getMenuPrice(int index);
        string getMenuarray(int index);
        string getgeneralItems(int a);

    private:
        string menuarray[22];
        int menuprice[22];
        string generalItems[6];
};