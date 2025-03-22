// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: March 21, 2025
// Random Number Guessing Game

#include <iostream>
#include <random>

int main() {
    // Get the user's guess
    int userNum;
    std::cout << "Enter a number (0-9): ";
    std::cin >> userNum;

    // declare integer to hold random number
    int correctNum;
    // Generate random seed for generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    // Integer Range that contains 0-9 [INCLUSIVE]
    std::uniform_int_distribution<int> idist(0, 9);
    // Generate a random number from the range
    correctNum = idist(rgen);

    // Check if the user's guess is the same as the correct number
    if (userNum == correctNum) {
        // Tell the user that they guessed correctly
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        // Tell the user that they guessed wrong
        std::cout << "You guessed wrong. ";
        // Also tell them the correct answer
        std::cout << "The correct answer was ";
        std::cout << correctNum << std::endl;
    }
}
