#ifndef FOOD_H
#define FOOD_H
#include <iostream>
using namespace std;

class Food 
{
    public:
        Food();
        virtual~Food();
        
        void settotalBill(int totalPrice1);
        int gettotalBill(int price);
    private:
        int totalPrice;
};
#endif