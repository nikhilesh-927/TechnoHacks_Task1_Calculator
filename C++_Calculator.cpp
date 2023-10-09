#include <iostream>

int main()
{
    int num1, num2, choice, result;
    char chosen;
    std::cout << "Program to perform arithmetic opetations between two numbers... \n";
    std::cout << "Enter two numbers to perform an arithmetic operation : ";
    std::cin >> num1;
    std::cin >> num2;

    std::cout << "Choose an operation which you wish to perform : \n";
    std::cout << "Enter 1 for addition (+) \n";
    std::cout << "Enter 2 for subtraction (-) \n";
    std::cout << "Enter 3 for multiplication (*) \n";
    std::cout << "Enter 4 for division (/) \n";

    std::cin >> choice;
    
if(choice == 1)
    chosen = '+';

else if(choice == 2)
    chosen = '-';

else if(choice == 3 )
    chosen = '*';

else if(choice == 4)
    chosen = '/';

    switch(choice)
    {

        case 1:
        result = num1 + num2;
        break;

        case 2:
        result = num1 - num2;
        break;

        case 3:
        result = num1 * num2;
        break;

        case 4:
        result = num1/num2;
        break;

        default:
        std::cout << "Please Enter a number listed above...";
        break;
    }
    std::cout << "Result after " << num1 << " " << chosen << " " << num2 << " is " << result;
}