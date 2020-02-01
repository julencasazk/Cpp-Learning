#include <iostream>

int main() {
    
    // Counts how many times an int repeats
    
    int current_value = 0, value = 0;

    if (std::cin >> current_value)
    {
        int count = 1;
        while (std::cin >> value)
        {
            if (current_value == value)
            {
                ++count;
            }
            else
            {
                std::cout << current_value << " occurs " << count << " times "
                << std::endl;
                current_value = value;
                count = 1;

            }
            
        }
        std::cout << current_value << " occurs " << count << " times "
                << std::endl;
    }
    return 0;
}