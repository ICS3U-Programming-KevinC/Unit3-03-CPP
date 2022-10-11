// Copyright (c) 2022 Kevin Csiffary All rights reserved.
//
// Created by: Kevin Csiffary
// Date: Oct. 10, 2022
// This program asks the user to guess a random number between 0 and 9
// the answer is randomly generated

// Include all required libraries
#include <time.h>
#include <iostream>

int main() {
    // Declare all required variables
    int randomNumber;
    int userGuess;

    // Sets the seed for the random number to the time
    srand(time(0));

    // Generates the random number
    randomNumber = rand() % 9 + 0;

    // Gets the user's guess
    std::cout << "Im thinking of a number between 0 and 9" << std::endl;
    std::cout << "whats your guess? ";
    std::cin >> userGuess;

    // Adds extra line spaces
    std::cout << "\n\n";

    // Checks if the user guessed correctly
    if (userGuess == randomNumber) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong. The correct answer was: "
        << randomNumber << std::endl;
    }
}
