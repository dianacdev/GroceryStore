//Holds the Functions for Customer Class
#include "Customer.h"
#include <string>
using namespace std;

//Set the customer values
void Customer::setCustomer(
    int new_customerID, string new_name, string new_address, string new_city,string new_state, string new_zipcode, string new_phone, string new_email)
    {
    customerID = new_customerID;
    name = new_name;
    address = new_address;
    city = new_city;
    state = new_state;
    zipcode = new_zipcode;
    phone = new_phone;
    email = new_email;
  };

int Customer::GetID() const{
  return customerID;
};