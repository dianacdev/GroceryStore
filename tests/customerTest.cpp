//Unit Tests for customer class

#include <iostream>
#include "D:\School\C++\GroceryStore\class\Customer.cpp"

using namespace std;

int main(){
    Customer testCustomer;
    cout << "Beginning tests on Customer Class." << endl;
    
    //Check setCustomer/GetID 
    testCustomer.setCustomer(11111, "Diana Cervantes", "123 West 456 South", "Sesame", "Utah", "123456", "1-800-273-8255", "fakeemail@email.com");
    
    if (testCustomer.GetID() != 11111){
        cout << "FAILED: setCustomer/getID";
    }
    cout << "Tests completed." << endl;
    return 0;
}