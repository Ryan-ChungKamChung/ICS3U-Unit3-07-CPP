// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Age range

#include <iostream>
#include <string>


int main() {
    // This function checks if the user is in the proper age range

    std::string age_string;
    int age;

    std::cout << "Grandma: I will only let you date my grandchild"
          " if you are between the age of 25 and 40!" << std::endl;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> age_string;

    // Process
    try {
        age = std::stoi(age_string);

        if (age > 25 && age < 40) {
            // Output
            std::cout << "You are the right age!"
            " You can date my grandchild!" << std::endl;
        } else {
            // Output
            std::cout << "You are not the right age!"
            " You cannot date my grandchild!" << std::endl;
        }
    } catch (std::invalid_argument) {
        // Output
        std::cout << "This isn't a valid age" << std::endl;
    }
}
