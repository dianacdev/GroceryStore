// Online Grocery
// Allows a customer to order groceries.
// Created By Diana Cervantes

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

#include "split.h"
#include "Class/Customer.cpp" //Holds the customer class
#include "Class/Item.cpp" //Holds the item class
using namespace std;

string customers_filePath = "D:/School/C++/GroceryStore/data/customers.txt";
string items_filePath = "D:/School/C++/GroceryStore/data/items.txt";

const int ITEMDESC_COL_WIDTH = 5;
const int PRICE_COL_WIDTH = 10;

//Customers vector, holds customer Objects
vector<Customer>customers;
//Items vector, holds item Objects
vector<Item>items;
//Holds the items in a single order
vector<Item> order;

//Reads the customers into the vector customers
void read_customers(string filename)
{
  string line;
  Customer currCustomer;
  ifstream file(filename);
  if (file.is_open()){
    while (getline(file,line))
    {
      vector<string> section = split(line, ',');
      currCustomer.setCustomer(
        stoi(section.at(0)), //CustomerID
        section.at(1), //Customer Name
        section.at(2), //Customer Address
        section.at(3), //Customer City
        section.at(4), //Customer State
        section.at(5), //Customer Zipcode
        section.at(6), //Customer Phone Number
        section.at(7) //Customer Email
      );
      customers.push_back(currCustomer);
    }
    file.close();
    cout << "Customer Count: " << customers.size() << endl;
  }
  else{
    cout << "Could not open file: " << filename << endl;
  }
}

//Reads the item into the vector items
void read_items(string filename)
{
  string line;
  Item currItem;
  ifstream file(filename);
  if (file.is_open()){
    while (getline(file,line))
    {
      vector<string> section = split(line, ',');
      currItem.setItem(
        stoi(section.at(0)), //ItemID
        section.at(1), //Item Description
        stod(section.at(2)) // Item Price
      );
      items.push_back(currItem);
    }
    file.close();
    cout << "Item Count: "<< items.size() << endl;
  }
  else{
    cout << "Could not open file: " << filename << endl;
  }
}

//Formats the items and price, also prints the orders total price
string ItemPriceTable(vector<Item> order){
    ostringstream outSS;
    double order_total;
    outSS << fixed << setprecision(2);
    outSS << setw(ITEMDESC_COL_WIDTH) << "Item(s)"
          << setw(PRICE_COL_WIDTH) << "Price"<< endl;
    for(int i = 0; i < order.size(); i++){
      outSS << setw(ITEMDESC_COL_WIDTH) << order.at(i).GetDescription() 
            << setw(PRICE_COL_WIDTH) << " $"<< order.at(i).GetPrice() << endl;
      order_total += order.at(i).GetPrice();
    }
    outSS << "Order Total: $" << order_total << endl;
    return outSS.str();
}

//Prints the order
void print_order(vector <Item> order){
    string table = ItemPriceTable(order);
    cout << "\nOrder: " << endl;
    cout << "Total Amount of Items: " << order.size() << endl;
    cout << table << endl;
}

//Checks if customerID exists
int find_customerID(int customerID){
  for (int i = 0; i < customers.size(); i++){
    if(customers.at(i).GetID() != customerID){
      if(i+1 == customers.size()){
        cout << "CustomerID: " << customerID <<" not found!\n" << endl;
        return 1;
      }
    }
    else{
        cout << "CustomerID: " << customerID << " found!\n"<< endl;
        return 0;
    }
  }
}

//Checks if itemID exists
int find_itemID(vector<Item> order){
  int itemID;
  ostringstream itemSS;

  cout << "Enter a item's ID: ";
  cin >> itemID;

  if(itemID == 0){
    print_order(order);
    return 0;
  } 
  for(int i = 0; i < items.size(); i++){
    if(items.at(i).GetID() != itemID){
      if(i+1 == items.size()){
        cout << "ItemID: " << itemID << " not found!" <<endl;
        find_itemID(order);
        return 1;
      }
    }
    else{
      itemSS << fixed << setprecision(2);
      itemSS << setw(ITEMDESC_COL_WIDTH) << items.at(i).GetDescription() 
              << setw(PRICE_COL_WIDTH) << " $" << items.at(i).GetPrice() << endl;
      string itemStr = itemSS.str();
      cout << itemStr << endl;
      order.push_back(items.at(i));
      find_itemID(order);
      return 0;
    }
  }
}



//A Customer's Order
void one_customer_order(vector<Item> order){
  int customerID;
  cout << "Enter a Customer's ID: ";
  cin >> customerID;
  if (find_customerID(customerID) == 0){
    find_itemID(order);
  }
}

int main()
{
  read_customers(customers_filePath);
  read_items(items_filePath);
  cout << endl; // used for some additional spacing!
  one_customer_order(order);

  return 0;
}