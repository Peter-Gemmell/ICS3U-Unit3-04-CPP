// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This function tells you if a number is positive, negative, or equal to 0

#include <iostream>

int main() {
    // This function tells you if a number is positive, negative, or equal to 0

    // variables
    int integer;

    // Input
    std::cout << "Enter a number (integer): " << std::endl;
    std::cin >> integer;
    std::cout << "" << std::endl;

    // Process
    if (integer > 0) {
        std::cout << "The number is positive "
          << integer << "." << std::endl;
    } else if (integer < 0) {
          std::cout << "The number is negative "
          << integer << "." << std::endl;
    } else if (integer == 0) {
          std::cout << "The number is "
          << integer << "." << std::endl;
    } else {
          std::cout << "Error, unable to identify integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
