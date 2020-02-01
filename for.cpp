#include <iostream>

// same as while.cpp but using 'for'

int main()
{
    // _Sum of all integers between two numbers from user input_
    
    /*

    std::cout << "Introduce two numbers to count between ( Last inclusive ): " << std::endl;
    int low = 0; int high = 0;
    std::cin >> low >> high;
    int sum = low, res = 0;
    std::cout << "Counting up..." << std::endl;
    for (int i = 0; i < (high - low + 1); i++)
    {
        res += sum;
        ++sum;
    }
    std::cout << "The sum of all the integers between " << low << " and " << high << " is: " << res << std::endl;

    */

    // Print numbers from two user inputs downwards

    std::cout << "Introduce two whole numbers to count down from (Higher first): " << std::endl;
    int low = 0, high = 0;
    std::cin >> high >> low;
    for (int i = high; i >= low; --i)
    {
        std::cout << i << std::endl;
    }
    std::cout << "Done!" << std::endl;





}