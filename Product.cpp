//
//  Product.cpp
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#include "Product.h"

void Product::setDescription(int index, string descrip)
{
    description[index]=descrip;
    
}

void Product::setLocation(int index, string location1)
{
    location[index]=location1;
    
}
void Product::setCost(int index, double money)
{
    cost[index]=money;
}

string Product::getDescription(int index)
{
    return description[index];
    
}
string Product::getLocation(int index)
{
    return location[index];
    
}
double Product::getCost(int index)
{
    return cost[index];
}
int Product::getNumberofitems(int index)
{
    return numberofitems[index];
}

int Product::getindexval(string inputuser)
{
    for (int x=0; x<MAXCOUNT; x++)
    {
        if (inputuser==location[x])
        {
            
            return x;
        }
   
    }
    cout<<"Failure"<<endl;
    return -1;
}
void Product::makeSale(int index)
{
    numberofitems[index]-=1;
}
