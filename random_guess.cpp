// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: September 2019
// This program lets user to guess a number and see if it's correct

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // This function lets user to guess a number and see if it's correct
    int guess_number;
    int random_number = (rand() % 10);
    srand(time(NULL));


    // input
    std::cout << "Enter a number between 0 to 9: ";
    std::cin >> guess_number;
    std::cout << "" << std::endl;

    // process
    if (guess_number == random_number) {
        // output
        std::cout << "correct, good guess ";
    } else {
        std::cout << "wrong, better luck next time ";
    }
}
