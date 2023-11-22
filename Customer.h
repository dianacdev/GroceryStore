#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer{
    public:
        void setCustomer(int customerID, string name, string address, string city,
        string state, string zipcode, string phone, string email);

        int GetID() const;

    private:
        int customerID;
        string name;
        string address;
        string city;
        string state;
        string zipcode;
        string phone;
        string email;
};
#endif