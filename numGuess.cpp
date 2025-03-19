// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Mar. 19, 2025
// This program creates a guessing game with a number range 0-9.

// Includes the iostream library for input and output functions.
#include <iostream>

int main() {
    // Set the constant for the correct number.
    const int CORRECT_NUM = 3;

    // Declare the variable for the chosen number.
    int chosenNumber;

    // Asks the user to guess a number between 0 and 9.
    std::cout << "Guess a number between 0 and 9: ";
    // Stores the user's choice in the chosen number variable.
    std::cin >> chosenNumber;

    // Check if the user chose the correct number.
    if (chosenNumber == CORRECT_NUM) {
        // Displays they got it correct.
        std::cout << "You got it!" << std::endl;
    }

    // Check if the user did not choose the correct number.
    if (chosenNumber != CORRECT_NUM) {
        // Displays they got it wrong, and they must try again.
        std::cout << "Incorrect, try again!" << std::endl;
    }
}
