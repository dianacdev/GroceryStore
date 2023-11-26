//Unit tests for main groceries.cpp file

#include <iostream>

#include "D:\School\C++\GroceryStore\groceries.cpp"
using namespace std;



int test(){
    string customers_filePath = "D:/School/C++/GroceryStore/data/customers.txt";
    string items_filePath = "D:/School/C++/GroceryStore/data/items.txt";

    cout << "Beginning tests on groceries.cpp"<< endl;
    if(read_customers(customers_filePath) != 300){
        cout << "FAILED: read_customers()";
    }
    if(read_items(items_filePath) != 198){
        cout << "FAILED: read_customers()";
    }
    cout << "Tests completed." << endl;
    return 0;
}