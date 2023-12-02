#ifndef LINEITEM_H
#define LINEITEM_H

#include <string>
using namespace std;

class LineItem{
    public:
        double sub_total() const;

    private:
        int item_id;
        int qty;

};

#endif