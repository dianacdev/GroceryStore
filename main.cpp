// Online Grocery 
//Reads customer.txt, and items.txt then displays the records of the customer.
// Created By Diana Cervantes

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "split.h"
using namespace std;

void read_customers(string filename) {
    ifstream file(filename);
    string str;
    while(getline(file, str)) {
        vector<string> pieces = split(str, ',');
    }
}

void read_items(string filename) {
    ifstream file(filename);
    string str;
    while(getline(file, str)) {
        vector<string> pieces = split(str, ',');
    }
}



int main() {
    read_customers("customers.txt");
    read_items("items.txt");
}