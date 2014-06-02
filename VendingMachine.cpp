//
//  VendingMachine.cpp
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#include "VendingMachine.h"


void VendingMachine::setObj()
{
    string location[MAXCOUNT]=
    {
        "A1", "A2", "A3",
        "B1", "B2", "B3",
        "C1", "C2", "C3",
        "D1", "D2", "D3",
        "E1", "E2", "E3",
        "F1", "F2", "F3"};
    string descriptions[MAXCOUNT]=
    {
        "Candy", "Mint", "Rosemary",
        "Salt", "Pepper", "Oregano",
        "Cloves", "Nutmeg", "Cinnamon",
        "Saffron", "Curry", "Lavender",
        "Lime", "Cumin", "Garlic",
        "Lemon", "Chili", "Tumeric"};
    double prices[MAXCOUNT]=
    {
        0.75, 0.90, 1.50,
        2.00, 2.50, 1.25,
        2.50, 0.05, 0.10,
        3.25, 1.20, 0.50,
        1.10, 0.10, 0.80,
        0.55, 0.75, 1.50};
    
    for( int x=0;x<MAXCOUNT;x++)
    {
        products.setDescription(x, descriptions[x]);
        products.setLocation(x, location[x]);
        products.setCost(x, prices[x]);
    }
}

void VendingMachine::showMachineHeader()
{
    cout<<"Welcome to Foothill Vending Machine!!"<<endl;
}

void VendingMachine::showProduct()
{
    for (int x=0;x<MAXCOUNT;x++)
    {
        cout<<products.getLocation(x);
        cout<<products.getDescription(x);
        cout<<products.getCost(x);
        if (x%3==2)
        {
            cout<<""<<endl;
        }
    }
}

void VendingMachine::showMenu()
{
    cout<<"1) Insert Coins"<<endl;
    cout<<"2) Choose a Product"<<endl;
    cout<<"3) Return Coins"<<endl;
    cin>>option;
}

int VendingMachine::dispenseProduct(int index )
{
  int  amount=credit.getCurrentBalance();
    
    if ( amount>= products.getCost(index))
    {
        credit.acceptAmount(amount);
        products.makeSale(index);
        int cost=products.getCost(index);
        credit.acceptAmount(-cost);
        return 0;
        
    }
    return -1;
}

void VendingMachine::getindex()
{   string input;
    cout<<"Enter the product location desired"<<endl;
    cin>>input;
   index= products.getindexval(input);
}


void VendingMachine::getintitialamount()
{   int amount1;
    cout<<"Enter amount desired"<<endl;
    cin>>amount1;
    credit.acceptAmount(amount1);
}

void operate()
{
    int option=0;
    
    while (option!=4)
    {
       
    switch(option)
    
    case 1:
        break;
        
    }

}
