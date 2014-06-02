//
//  VendingMachine.h
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#ifndef __Lab_4_7__VendingMachine__
#define __Lab_4_7__VendingMachine__

#include <iostream>
#include <cmath>
#include "Coin.h"
#include "Product.h"

class VendingMachine
{
public:
    VendingMachine();
    //VendingMachine(string);
    ~VendingMachine();
    
    void operate();
    
    void showMachineHeader();
    int dispenseProduct(int);
    void showProduct();
    void showMenu();
    
    void getindex();
    
    
    void getintitialamount();
    void setObj();
private:
    Coin credit;
    
    Product products;
    int index;
    string Machineid;
    
    int option;
     char  alphabet[36] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t', 'u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
};
#endif /* defined(__Lab_4_7__VendingMachine__) */
