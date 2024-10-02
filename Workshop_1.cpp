// Workshop_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";
    std::string text = "";
    int decision = 0;
    int key = 0;   
    int temp_key = 0;
    std::cout << "Enter the text you would like to use: \n";
    std::cin >> text;
    std::cout << "Decide if you would like to encrypt (0), or decrypt (1): \n";
    std::cin >> decision;
    std::cout << "Enter the key: \n";
    std::cin >> key;

    if (key > 26)
    {
        key = key % 26;
        std::cout << key;
    }
    else if (key == 26)
    {
        key = 0;
        std::cout << key;
    }
    else
    {
        key = key;
        std::cout <<  key;
    }
    

    if (decision == 0)
    {
        char letter;        
        for (int i = 0; text[i] != '\0'; ++i)
        {
            letter = text[i];
            if (letter >= 97 && letter <= 122 && (letter + key) <= 122)
            {
                letter = letter + key;
            }
            else if (letter >= 97 && letter <= 122 && (letter + key) > 122)
            {
                temp_key = (letter + key) - 123;
                letter = 97 + temp_key;

            }
            text[i] = letter;
            

            
        }
    }
    std::cout << '\n' << text;

}

