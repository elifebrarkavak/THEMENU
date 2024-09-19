#include"Item.h"
#include "Menu.h"
#include "Food.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int firstSelect,select=1,dimension,sectionItem,bill,fileBill;
    char secondSelect1,secondSelect2;
    Item item1;
    Food price1;
    Menu Cmenuu;

    ofstream fout;
    fout.open("Bill.txt");

    price1.settotalBill(0);

    cout<<"WELCOME THE OUR THREST RESTAURANT"<<endl<<endl;
    while(select==1)
    {
        cout<<"0: GENERAL ITEMS "<<endl;
        cout<<"1: CAMPAIGN MENUS "<<endl<<endl;
        cout<<"Please press 0 to select general items, press 1 to select campaign items,otherwise press -1"<<endl<<endl;
        cin>>firstSelect;

        if(firstSelect==-1)
        {
            break;
        }
        else if(firstSelect==1)
        {

            Menu hazir("A:Hamburger-Lemonade  ",410,"B:Pizza-Lemonade  ",450,"C:Soufle-Tea  ",240,"D:Cheescake-Tea  ",220);
            cout<<"Please click on the promotional menu you want. "<<endl;
            cin>>secondSelect1;

            switch (secondSelect1)
            {
                case 'A':
                    cout<<"Selected A:Hamburger-Lemonade"<<endl<<endl;
                    price1.gettotalBill(410);
                    break;
                case 'B':
                    cout<<"Selected B:Pizza-Lemonade"<<endl<<endl;
                    price1.gettotalBill(450);
                    break;
                case 'C':
                    cout<<"Selected C:Soufle-Tea"<<endl<<endl;
                    price1.gettotalBill(240);
                    break;
                case 'D':
                    cout<<"Selected D:Cheescake-Tea"<<endl<<endl;
                    price1.gettotalBill(220);
                    break;
            }

        }
        else if(firstSelect==0)
        {
            item1.setMenuArray(0,"1. Oppenbuffet  ");
            item1.setMenuPrice(0,200);
            item1.setMenuArray(1,"2. Breakfast Plate  ");
            item1.setMenuPrice(1,320);
            item1.setMenuArray(2,"3. Mixed Breakfast  ");
            item1.setMenuPrice(2,400);
            item1.setMenuArray(3,"1. Hamburger  ");
            item1.setMenuPrice(3,400);
            item1.setMenuArray(4,"2. Pizza  ");
            item1.setMenuPrice(4,400);
            item1.setMenuArray(5,"3. Soup  ");
            item1.setMenuPrice(5,100);
            item1.setMenuArray(6,"4. Pasta  ");
            item1.setMenuPrice(6,200);
            item1.setMenuArray(7,"1. Tuna Salad  ");
            item1.setMenuPrice(7,240);
            item1.setMenuArray(8,"2. Seasons Salad  ");
            item1.setMenuPrice(8,220);
            item1.setMenuArray(9,"3. Shepherds Salad  ");
            item1.setMenuPrice(9,210);
            item1.setMenuArray(10,"1.Tea  ");
            item1.setMenuPrice(10,50);
            item1.setMenuArray(11,"2. Lemonade  ");
            item1.setMenuPrice(11,100);
            item1.setMenuArray(12,"3. Coffee  ");
            item1.setMenuPrice(12,180);
            item1.setMenuArray(13,"1. French Fries  ");
            item1.setMenuPrice(13,160);
            item1.setMenuArray(14,"2. Onion Ring  ");
            item1.setMenuPrice(14,140);
            item1.setMenuArray(15,"1. Cheesecake  ");
            item1.setMenuPrice(15,200);
            item1.setMenuArray(16,"2. Souffle  ");
            item1.setMenuPrice(16,170);
            item1.setMenuArray(17,"3. Brownie  ");
            item1.setMenuPrice(17,180);
            item1.setMenuPrice(18,410);
            item1.setMenuPrice(19,450);
            item1.setMenuPrice(20,240);
            item1.setMenuPrice(21,220);
            item1.setMenuArray(18,"A:Hamburger-Lemonade  ");
            item1.setMenuArray(19,"B:Pizza-Lemonade  ");
            item1.setMenuArray(20,"C:Soufle-Tea  ");
            item1.setMenuArray(21,"D:Cheescake-Tea  ");
    
            Item consItem("A.Breakfast","B.Maindishes","C.Salad","D.Beverage","E.Snacks","F.Dessert");
            cout<<endl<<"Please click on the promotional item you want. "<<endl;
            cin>>secondSelect1;

            if(secondSelect1=='A')
            {
                cout<<item1.getMenuarray(0)<<item1.getMenuPrice(0)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(1)<<item1.getMenuPrice(1)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(2)<<item1.getMenuPrice(2)<<" TL"<<endl<<endl;

                cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                cin>>sectionItem;

                if(sectionItem==1)
                {
                    cout<<"Selected Oppenbuffet"<<endl<<endl;
                    price1.gettotalBill(200);
                }
                else if(sectionItem==2)
                {
                    cout<<"Selected Breakfast Plate"<<endl<<endl;
                    price1.gettotalBill(320);
                }
                else if(sectionItem==3)
                {
                    cout<<"Selected Mixed Breakfast"<<endl<<endl;
                    price1.gettotalBill(400);
                }   
            }
            else if(secondSelect1=='B')
            {
                cout<<item1.getMenuarray(3)<<item1.getMenuPrice(3)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(4)<<item1.getMenuPrice(4)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(5)<<item1.getMenuPrice(5)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(6)<<item1.getMenuPrice(6)<<" TL"<<endl<<endl;

                cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                cin>>sectionItem;

                if(sectionItem==1)
                {
                    cout<<"Selected Hamburger"<<endl<<endl;
                    price1.gettotalBill(400);
                }
                else if(sectionItem==2)
                {
                    cout<<"Selected Pizza"<<endl<<endl;
                    price1.gettotalBill(400);
                }
                else if(sectionItem==3)
                {
                    cout<<"Selected Soup"<<endl<<endl;
                    price1.gettotalBill(100);
                }
                else if(sectionItem==4)
                {
                    cout<<"Selected Pasta"<<endl<<endl;
                    price1.gettotalBill(200);
                }
            }
            else if(secondSelect1=='C')
            {
                cout<<item1.getMenuarray(7)<<item1.getMenuPrice(7)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(8)<<item1.getMenuPrice(8)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(9)<<item1.getMenuPrice(9)<<" TL"<<endl<<endl;

                cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                cin>>sectionItem;

                if(sectionItem==1)
                {
                    cout<<"Selected Tuna Salad"<<endl<<endl;
                    price1.gettotalBill(240);
                }
                else if(sectionItem==2)
                {
                    cout<<"Selected Seasons Salad"<<endl<<endl;
                    price1.gettotalBill(220);
                }
                else if(sectionItem==3)
                {
                    cout<<"Selected Shepherds Salad"<<endl<<endl;
                    price1.gettotalBill(210);
                }
            }
            else if(secondSelect1=='D')
            {
                cout<<item1.getMenuarray(10)<<item1.getMenuPrice(10)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(11)<<item1.getMenuPrice(11)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(12)<<item1.getMenuPrice(12)<<" TL"<<endl<<endl;

                    cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                    cin>>sectionItem;

                    if(sectionItem==1)
                    {
                        cout<<"Selected Tea"<<endl<<endl;
                        price1.gettotalBill(50);
                    }
                    else if(sectionItem==2)
                    {
                        cout<<"Selected Lemonade"<<endl<<endl;
                        price1.gettotalBill(100);
                    }
                    else if(sectionItem==3)
                    {
                        cout<<"Selected Coffee"<<endl<<endl;
                        price1.gettotalBill(180);
                    }
            }
            else if(secondSelect1=='E')
            {
                cout<<item1.getMenuarray(13)<<item1.getMenuPrice(13)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(14)<<item1.getMenuPrice(14)<<" TL"<<endl<<endl;
                cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                cin>>sectionItem;

                if(sectionItem==1)
                {
                    cout<<"Selected French Fries"<<endl<<endl;
                    price1.gettotalBill(160);
                }
                else if(sectionItem==2)
                {
                    cout<<"Selected Onion Ring"<<endl<<endl;
                    price1.gettotalBill(140);
                }
            }
            else if(secondSelect1=='F')
            {
                cout<<item1.getMenuarray(15)<<item1.getMenuPrice(15)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(16)<<item1.getMenuPrice(16)<<" TL"<<endl<<endl;
                cout<<item1.getMenuarray(17)<<item1.getMenuPrice(17)<<" TL"<<endl<<endl;

                cout<<endl<<"Please click on the promotional item you want. "<<endl<<endl;
                cin>>sectionItem;

                    if(sectionItem==1)
                    {
                    cout<<"Selected Cheesecake"<<endl<<endl;
                        price1.gettotalBill(200);
                    }
                    else if(sectionItem==2)
                    {
                    cout<<"Selected Souffle"<<endl<<endl;
                        price1.gettotalBill(170);
                    }
                    else if(sectionItem==3)
                    {
                        cout<<"Selected Brownie"<<endl<<endl;
                        price1.gettotalBill(180);
                    }
            }
        }
    }
    if(fout.fail())
    {
        cout<<"error unable to open the file"<<endl;
        return (0);
    }

    bill=price1.gettotalBill(0);
    fout << bill;
    fout.close();

    cout<<endl<<"Bill: "<<price1.gettotalBill(0)<<endl;
}   