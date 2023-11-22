#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
    public:
        void setItem(int itemID, string description, double price);

    private:
        int itemID;
        string description;
        double price;
};
#endif