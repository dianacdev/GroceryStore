#ifndef ORDER_H
#define ORDER_H

#include <string>
using namespace std;

class Order{
    public:
        double total() const;

    private:
        int order_id;
        string order_date;
        int cust_id;
        //vector<LineItem> line_items;
        //payment;
};

#endif