#include <iostream>
/*
 * Simple main function of this program:
 * To ask, read and sum two numbers from user input and output the result
 *
 */

int main()
{
    std::cout << "Escribe dos numeros enteros: " << std::endl;
    int num1 = 0, num2; //No need to give a value (no need to initialize)
    std::cin >> num1 >> num2; // Reading the input from the user
    std::cout << "La suma de " << num1 << " y " << num2 << " es: " << num1 + num2 << std::endl;
    return 0;
}

