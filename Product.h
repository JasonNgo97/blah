//
//  Product.h
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#ifndef __Lab_4_7__Product__
#define __Lab_4_7__Product__


#include <iostream>
#include <string>
using namespace std;

const int MAXCOUNT=18;

class Product
{
public:
    Product();
    ~Product();
    void setDescription(int,string);
    void setLocation(int, string);
    void setCost(int, double);
    
    int getindexval(string);
    
    string getDescription(int);
    string getLocation(int);
    double getCost(int);
    
    
    int getNumberofitems(int);
    
    void makeSale(int);
    
private:
    
    int numberofitems[MAXCOUNT];//number of items
string description[MAXCOUNT];//label and descroption of items
    double cost[MAXCOUNT];//price
    string location[MAXCOUNT];//
};
#endif /* defined(__Lab_4_7__Product__) */
