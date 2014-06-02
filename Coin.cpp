//
//  Coin.cpp
//  Lab 4.7
//
//  Created by Jason Ngo on 6/1/14.
//  Copyright (c) 2014 Jason.INC. All rights reserved.
//

#include "Coin.h"

Coin::Coin()
{
    
}
Coin::~Coin()
{
    
}
double Coin::getCurrentBalance()
{
    return cash_on_hand;
}

void Coin::acceptAmount(int add)
{
    cash_on_hand+=add;
    
}

void Coin::withdrawAllCoins()
{
    quarterleft=cash_on_hand/quarter;
    
    if (quarterleft<=numquarter)
    {   numquarter-=quarterleft;
        cash_on_hand=fmod(cash_on_hand,quarter);
        cout<<"You get" <<quarterleft <<"quarters"<<endl;
        dimeleft=cash_on_hand/dime;
        
        if (dimeleft<=numdime)
        {   numdime-=dimeleft;
            cash_on_hand=fmod(cash_on_hand,dime);
            nickelleft=cash_on_hand/nickel;
            cout<<"You get " <<dimeleft<<"dimes"<<endl;
            
            if (nickelleft<=numnickel)
            {   numnickel-=nickelleft;
                cash_on_hand=fmod(cash_on_hand,nickel);
                pennyleft=cash_on_hand/penny;
                cout<<"You get " <<pennyleft<<"pennys"<<endl;
                
                if (pennyleft<=numpenny)
                {   numpenny-=pennyleft;
                    cash_on_hand=fmod(cash_on_hand,penny);
                    cash_on_hand=0;
                }
                
                
                
                
                
                
                
                
                
                
            }
            
        }
        
    }
    
}

