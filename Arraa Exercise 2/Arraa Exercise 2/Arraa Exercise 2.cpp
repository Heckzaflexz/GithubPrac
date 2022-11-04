#include <iostream>

int main()
{

    int userInput[5], sum = 0, orderedArray[5];
   

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter " << i + 1 << " value : ";
        std::cin >> userInput[i];
    }

    for (int i = 0; i < 4; i++)
    {
       
        std::cout << "\n\nI values in first For :" << i << "\n\n";

        for (int j = 0; j < 4; j++)
        {
            if(userInput[j] < userInput[j + 1])
            {
                orderedArray[j] = userInput[j] ;
                std::cout << "\n\nJ values in second For:" << j << "\n\n";
                //std::cout << "\n\nI values in second For :" << i << "\n\n";
            }
            else
            {
                continue;
            }
        }
        

    }
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << orderedArray[i] << "\t";
    }




}

