//constructor and 3 methods

class DiscountCalc {
private:
    double price;
    int dollarsOff;
    int discountPerc;
    int additionalPerc;
    double tax;
public:
    DiscountCalc();
    float originalPrice();
    float discountedPrice();
    void displayMenu();
};
