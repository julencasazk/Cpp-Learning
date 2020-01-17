#include <iostream>

int main()
{
    int suma = 0,  val = 1;
    while (val <= 10) {
        suma += val; // Asign suma as suma + val
        ++val; //  Adds 1 to val
    }
    std::cout << "The sum of all ints from 1 to 10 inclusive is " << suma << std::endl;
    return 0;

}