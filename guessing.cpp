// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on November 2020
// This program adds 2 numbers

#include <iostream>
#include <cmath>

int main() {
    /* This function obtains an input from the user and
    determines if the user's guess is correct */

    const double programNumber = 7;
    double guess;

    std::cout << "" << std::endl;
    std::cout << "This program makes the user guess the number"
          "that the computer has saved." << std::endl;
    std::cout << "Please input a number (from 0 to 9):" << std::endl;
    std::cin >> guess;
    std::cout << "" << std::endl;
    if (programNumber == guess) {
        std::cout << "You guessed correctly!" << std::endl;
    }
}
