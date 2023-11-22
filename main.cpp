// Online Grocery
// Reads customer.txt, and items.txt then displays the records of the customer.
// Created By Diana Cervantes

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "split.h"
using namespace std;

//Creating the customer vector
vector<Customer> customers(0);
//Creating the item vector
vector<Item> items(0);

class Customer
{
  public:
  //the Customer Setter
    Customer(int new_customerID, string new_name, string new_address, string new_city,
              string new_state, string new_zipcode, string new_phone, string new_email) :
              customerID{new_customerID}, name{new_name}, address{new_address}, city{new_city},
              state{new_state}, zipcode{new_zipcode}, phone{new_phone}, email{new_email}{}
    string print_detail () const {
        return "Customer ID #" + std::to_string(customerID) + ":\n" +
            name + ", ph. " + phone + ", email: " + email + "\n" +
            address + "\n" + city + ", " + state + " " + zipcode;
    }

  //The Getter for the Customer Information
    int getID() {
      //Returns the customerID
        return customerID;
    }


  private:
  //private attributes used by Customer Class.
    int customerID;
    string name;
    string address;
    string city;
    string state;
    string zipcode;
    string phone;
    string email;
};

class Item
{
  public:
  //The Item Setter
  Item (int new_itemID, string new_description, double new_price) :
       itemID{new_itemID}, description{new_description}, price{new_price}{}

  //The Item Getter, retreives all the items information
  int getID(){
    //Returns the itemID
    return itemID;
  }

  string getDescription(){
    //Returns the item's description
    return description;
  }

  double getPrice(){
    //Returns the item's price
    return price;
  }

  private:
    int itemID;
    string description;
    double price;
};

void read_customers(string filename)
{
  ifstream file(filename);
  string str;
  while (getline(file, str))
  {
    vector<string> section = split(str, ',');
    customers.push_back(
        new Customer(
            stoi(section.at(0)),
            section.at(1),
            section.at(2),
            section.at(3),
            section.at(4),
            section.at(5),
            section.at(6),
            section.at(7)));
  };
}


void read_items(string filename)
{
  ifstream file(filename);
  string str;
  while (getline(file, str))
  {
    vector<string> section = split(str, ',');
  }
}

int main()
{
  read_customers("customers.txt");
  read_items("items.txt");
}