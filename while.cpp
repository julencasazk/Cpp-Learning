#include <iostream>

int main()
{
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


}