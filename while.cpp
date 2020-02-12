#include <iostream>

// All complete exercises will be turned into comments inside main
// the only highlighted one should be the one I'm working on

int main()
{
    // Sums all integers between two user inputs

    /*
    
    std::cout << "Introduce two numbers to count between: " << std::endl;
    int val1 = 0, val2 = 0, sum = 0;
    std::cin >> val1 >> val2;
    std::cout << "Counting..." << std::endl;
    while (val1 <= val2)
    {
        sum += val1;
        ++val1;
    }
    std::cout << "The result of the sum is " << sum << std::endl;
    return 0;

    */

    // Sum all integers between two user inputs, can put lower first

    std::cout << "Introduce two numbers to count between" << std::endl;
    int val1 = 0, val2 = 0, sum = 0;
    std::cin >> val1 >> val2;
    std::cout << "Counting" << std::endl;
    if (val1 < val2) {
        while (val1 <= val2) {
            sum += val1;
            ++val1;
        }
        std::cout << "The result of the sum is: " << sum << std::endl;

    }
    else if (val2 < val1 ) {
        while (val2 <= val1){
            sum += val2;
            ++val2;
        }
        std::cout << "The result of the sum is: " << sum << std::endl;
    }
    else
    {
        std::cout << "You introduced two equal numbers!" << std::endl;

    }
    
    


    // Reads an unknown ammount of user inputs

    /*

    std::cout << "Introduce all integers sequentially or divided by spaces"
                << std::endl;
    int total_sum = 0, value = 0;
    while (std::cin >> value)
    {
        total_sum += value;
        
    }
    std::cout << "The sum of all user inputs is: " << total_sum << std::endl;
    return 0;

    */

    
    
    

    


}