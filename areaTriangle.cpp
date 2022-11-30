// Copyright (c) 2022 Tamer Zreg All rights reserved.
// .
// Created by: Tamer Zreg
// Date: Nov.24, 2022
// This program calculates the area of a triangle using a function


#include <iostream>

// Defines function for the triangle area calculator
void AreaCalculator(float base, float height) {
    // Calculates the area
    float area = base * height / 2;
    std::cout << "The area of the triangle is " << area << "cm^2.\n";
}


int main()  {
    // Declaring variables
    std::string userBaseStr, userHeightStr;
    float userBase, userHeight, wait;
    char restart;

    do {
        // Asks for the base and height of the triangle
        std::cout << "Enter the area of the triangle (in cm): ";
        std::cin >> userBaseStr;
        std::cout << "Enter the height of the triangle (in cm): ";
        std::cin >> userHeightStr;
        std::cout << "\n";

        // Tries casting the base and height to type float
        try {
            userBase = std::stof(userBaseStr);
            userHeight = std::stof(userHeightStr);

        // Ends the program if the base or height is not a number
        } catch (...) {
            std::cout << "You must enter a number for the base and height.";
            std::cin >> wait;
            break;
        }

        /* Calls the area calculator function with the base
        and height as arguments*/
        AreaCalculator(userBase, userHeight);

        // Asks the user if they would like to restart
        std::cout << "Enter 'q' if you would like to quit.\n";
        std::cout << "Enter any other key to restart: ";
        std::cin >> restart;

        /* If the user entered 'q', the program ends. Otherwise,
        the program will restart*/
        if (restart == 'q') {
            break;
        }
    } while (true);
}
