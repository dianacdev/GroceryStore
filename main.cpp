// Online Grocery
// Reads customer.txt, and items.txt then displays the records of the customer.
// Created By Diana Cervantes

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "split.h"
#include "Customer.cpp"
#include "Item.cpp"
using namespace std;


//Customers vector, holds customer Objects
vector<Customer>customers;
//Items vector, holds item Objects
vector<Item>items;

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


int main()
{
  read_customers("D:/School/C++/GroceryStore/customers.txt");
  read_items("D:/School/C++/GroceryStore/items.txt");
  return 0;
}