#include <iostream>

int main()
{
    int suma = 0,  val = 50;
    while (val <= 100) {
        suma += val; // Asign suma as suma + val
        ++val; //  Adds 1 to val
    }
    std::cout << "The sum of all ints from 50 to 100 inclusive is " << suma << std::endl;
    return 0;

}