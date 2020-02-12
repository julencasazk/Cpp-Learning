#include <iostream>
#include "Sales_item.h"

// Structure os a Sales_item input:
// ISBN   Units Sold   Price
// Example:
// X-XXX-XXX-X 5 29.99

int main() {

    /*

    // Reads two items from input and writes them as they are

    Sales_item salesRec1, salesRec2;
    std::cout << "Input the ISBN, Unitrs Sold and Price of 2 transactions: " << std::endl;
    std::cin >> salesRec1 >> salesRec2;
    std::cout << "- ISBN  Revenue UnitsSold IndividualPrice -" << "\n" << std::endl;
    std::cout << salesRec1 << "\n" << salesRec2 << std::endl;

    */

    
    /*

    // Reads two items and sums them

    Sales_item itema, itemb;
    std::cout << "Introduce two items with the same ISBN: " << std::endl;
    std::cin >> itema >> itemb;
    std::cout << "\n" << itema + itemb << std::endl;

    */

    // Read an unknown ammount of items of the same ISBN and sums them

    Sales_item item, totalItem;
    std::cout << "Introduce items of the same ISBN: " << std::endl;
    while (std::cin >> item) {

        totalItem += item;

    }
    std::cout << "End result:" << "\n" << totalItem << std::endl;


}