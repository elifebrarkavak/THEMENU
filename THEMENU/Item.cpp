#include "Item.h"

Item::Item()
{

}
Item::Item(string breakfast,string maindishes,string salad,string beverage,string snacks,string dessert)
{
    setgeneralItems(0,breakfast);
    setgeneralItems(1,maindishes);
    setgeneralItems(2,salad);
    setgeneralItems(3,beverage);
    setgeneralItems(4,snacks);
    setgeneralItems(5,dessert);

    cout<<getgeneralItems(0)<<endl;
    cout<<getgeneralItems(1)<<endl;
    cout<<getgeneralItems(2)<<endl;
    cout<<getgeneralItems(3)<<endl;
    cout<<getgeneralItems(4)<<endl;
    cout<<getgeneralItems(5)<<endl;
}
Item::~Item()
{

}
void Item::setMenuArray(int index,string name)
{
    menuarray[index]=name;
}
void Item::setMenuPrice(int index,int price)
{
    menuprice[index]=price;
}
void Item::setgeneralItems(int index,string item)
{
    generalItems[index]=item;
}
int Item::getMenuPrice(int index)
{
    return menuprice[index];
}
string Item::getMenuarray(int index)
{
    return menuarray[index];
}
string Item::getgeneralItems(int a)
{
    return generalItems[a];
}