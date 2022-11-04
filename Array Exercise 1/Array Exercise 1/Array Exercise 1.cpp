#include <iostream>
/*Create a pogram that takes 5 interger input, display the numbers, and then the total sum
    START
    Declare variables: an array for 5 int, i, sum.
    Ask for user input for 5 integers
    Display 5 values
    Calculate sum of 5 values
    Display total sum
    END
 */



int main()
{
    int userInput[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter " << i+1 << " value : ";
        std::cin >> userInput[i];
        sum += userInput[i];
    }

    //std::cout
    std::cout << sum;


}

