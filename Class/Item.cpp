//Holds the Functions for Item Class
#include "Item.h"
#include <string>
using namespace std;

//Set the item values
void Item::setItem(
    int new_itemID, string new_description, double new_price)
    {
      itemID = new_itemID;
      description = new_description;
      price = new_price;
    };

int Item:: GetID() const{
  return itemID;
};

string Item:: GetDescription() const{
  return description;
}

double Item:: GetPrice() const{
  return price;
}