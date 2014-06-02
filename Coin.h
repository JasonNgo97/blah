//
//  Coin.h
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#ifndef __Lab_4_7__Coin__
#define __Lab_4_7__Coin__
#include <cmath>
#include <iostream>
using namespace std;

class Coin
{
public:
    Coin();
    ~Coin();
    double getCurrentBalance();
    void acceptAmount(int);
    //void cashregister();
    void withdrawAllCoins();
    
private:
    double cash_on_hand;
    
    
    int quarterleft;
    int nickelleft;
    int dimeleft;
    int pennyleft;
    
    int numquarter=1000;//value is 250 dollars
    int numdime=1000;//value=100 dollars
    int numnickel=1000;//value=50 dollars
    int numpenny=10000;//value=100 dollars
    
    int numquartenter;
    int numdimeenter;
    int numnickelenter;
    
    
    double quarter=0.25;
    double dime=0.10;
    double nickel=0.05;
    double penny=0.01;

};

#endif /* defined(__Lab_4_7__Coin__) */
