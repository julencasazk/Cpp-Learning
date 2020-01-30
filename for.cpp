#include <iostream>

int main()
{
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

    


}