#include<iostream>
#include<string>
#include "Menu.h"
using namespace std;

Menu::Menu()
{
    
}
Menu::~Menu()
{

}
Menu::Menu(string menu1,int price1,string menu2,int price2,string menu3,int price3,string menu4,int price4)
{
    setCampainName(0,menu1);
    setCampainPrice(0,price1);
    setCampainName(1,menu2);
    setCampainPrice(1,price2);
    setCampainName(2,menu3);
    setCampainPrice(2,price3);
    setCampainName(3,menu4);
    setCampainPrice(3,price4);

    cout<<getCampainName(0)<<"  "<<getCampainPrice(0)<<" TL"<<endl;
    cout<<getCampainName(1)<<"  "<<getCampainPrice(1)<<" TL"<<endl;
    cout<<getCampainName(2)<<"  "<<getCampainPrice(2)<<" TL"<<endl;
    cout<<getCampainName(3)<<"  "<<getCampainPrice(3)<<" TL"<<endl;

}
void Menu::setCampainPrice(int index,int value)
{
    if(index >= 0 && index < 4) 
    {
        campainprice[index] = value;
    }
}
void Menu::setCampainName(int index, string nameProduct)
{
    campainname[index]=nameProduct;
}
string Menu::getCampainName(int a) 
{
    if(a >= 0 && a < 4) 
    {
        return campainname[a];
    }
    return "";
}
int Menu::getCampainPrice(int a)
{
    if(a >= 0 && a < 4) 
    {
        return campainprice[a];
    }
    return -1; 
}