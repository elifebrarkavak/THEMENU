#include<iostream>
#include<string>
#include"Food.h"
using namespace std;

class Menu : public Food
{
    public:
        Menu();
        Menu(string menu1,int price1,string menu2,int price2,string menu3,int price3,string menu4,int price4);
        virtual~Menu();

        void setCampainPrice(int index,int value);
        void setCampainName(int index, string nameProduct);

        int getCampainPrice(int a);
        string getCampainName(int a);
    private:
        int campainprice[4];
        string campainname[4];
};