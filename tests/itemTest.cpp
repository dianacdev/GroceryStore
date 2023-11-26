//Unit Tests for item class

#include <iostream>
#include "D:\School\C++\GroceryStore\class\Item.cpp"

using namespace std;

int main(){
    Item testItem;
    cout << "Beginning tests on Item Class." << endl;
    
    //Check setItem
    testItem.setItem(11111, "Test Item Description", 3.25);

    if (testItem.GetID() != 11111){
        cout << "FAILED: setItem/getID";
    }

    if(testItem.GetDescription() != "Test Item Description"){
        cout << "FAILED: setItem/getDescription";
    }

    if(testItem.GetPrice() != 3.25){
        cout << "FAILED: setItem/getPrice";
    }

    cout << "Tests completed." << endl;
    return 0;
}
