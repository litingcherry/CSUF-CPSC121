//Ting Li
//CPSC 121-03
//Discount Calculator Program with Class

#include <iostream>
#include "DiscountCalc.h"
using namespace std

DiscountCalc::DiscountCalc() {
    price = 70.0;
    dollarsOff = 10;
    discountPerc = 20;
    additionalPerc = 5;
    tax = 8.75;
}

float DiscountCalc:: originalPrice() {
    float original_price;
    
    original_price = price + price * tax / 100 + 0.004;
    
    return original_price;
}

float DiscountCalc::discountedPrice() {
    float discounted_price;
    
    discounted_price = price - dollarsOff -
                       (price * discountPerc / 100) -
                       (price * additionalPerc / 100) +
                       (price * tax / 100) + 0.004;
    
    return discounted_price;
}

void DiscountCalc::displayMenu() {
    cout << "Enter in an initial price: ";
    cin >> price;
    
    cout << "How many dollars off? " ;
    cin >> dollarsOff;
    
    cout << "What percentage of a discount? ";
    cin >> discountPerc;
    
    cout << "Any additional percentage off? ";
    cin >> additionalPerc;
    
    cout << "What's the tax? ";
    cin >> tax;
}


