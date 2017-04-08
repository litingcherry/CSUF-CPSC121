#include <iostream>
#include <iomanip>
#include <cmath>
#include "DiscountCalc.h"
using namespace std;

void test(DiscountCalc, float, float, float);

int main(int argc, char const *argv[]) {
    char userChoice;
    DiscountCalc myCalc;

    //myCalc.price = 70.0;
    //myCalc.dollarsOff = 10;
    //myCalc.discountPerc = 20;
    //myCalc.additionalPerc = 5;
    //myCalc.tax = 8.75;

    // Test a few values
    test(myCalc, 76.13, 48.63, 0.001);

    do {
        myCalc.displayMenu();

        cout << fixed << setprecision(2);
        cout << "--------------------" << endl;
        cout << "Original Price: $" << myCalc.originalPrice() << endl
             << "Discounted Price: $" << myCalc.discountedPrice() << endl;

        cout << "Do you wish to continue? ";
        cin >> userChoice;
    } while(userChoice == 'Y' || userChoice == 'y');

    return 0;
}

void test(DiscountCalc myCalc, float expOriginalPrice, float expDiscountedPrice, float accuracy) {
    if( fabs(myCalc.originalPrice() - expOriginalPrice) > accuracy) {
        cout << "Expected: " << expOriginalPrice << endl
             << "Recieved: " << myCalc.originalPrice() << endl;
    } else if( fabs(myCalc.discountedPrice() - expDiscountedPrice) > accuracy) {
        cout << "Expected: " << expDiscountedPrice << endl
             << "Recieved: " << myCalc.discountedPrice() << endl;
    } else {
        cout << "All tests passed!" << endl;
    }
}
