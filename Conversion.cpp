#include <iostream>



//  Conversion
int main()
{
    double inputValue;
    const double cm = 2.54;
    double result;
    int operation;

    std::cout << "You need choose a operation" << std::endl;
    std::cout << "1. conversion from inches to centimetres" << std::endl;
    std::cout << "2. conversion from centimetres to inches" << std::endl;
    std::cout << "(Input 1 or 2): ";
    std::cin >> operation;


    switch(operation)
    {
        case 1:
            std::cout << "Input inch for to conversion to centimetres: ";
            std::cin >> inputValue;

            result = inputValue * cm;
            break;

        case 2:
            std::cout << "Input cm for to conversion to inches: ";
            std::cin >> inputValue;

            result = ( 1 / cm ) * inputValue;
            break;

        default:
            break;

    }

    std::cout << result;

    return 0;
}


