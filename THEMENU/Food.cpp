#include "Food.h"
using namespace std;

Food::Food()
{
    
}
Food::~Food()
{

}
void Food::settotalBill(int totalPrice1)
{
    totalPrice = totalPrice1;
}
int Food::gettotalBill(int price)
{
    totalPrice += price;
    return totalPrice;
}