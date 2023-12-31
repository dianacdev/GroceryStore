#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
    public:
        void setItem(int itemID, string description, double price);

        int GetID() const;
        string GetDescription() const;
        double GetPrice() const;

    private:
        int itemID;
        string description;
        double price;
};
#endif