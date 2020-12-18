// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program loops and adds multiple numbers

#include <iostream>
#include <string>

int main() {
    // this function loops and adds multiple numbers
    std::string input_amount_string;
    std::string chosen_number_string;
    int input_amount;
    int chosen_number;
    int largest = 0;
    int smallest = 90000000;
    int loop_counter = 0;

    // input

    // process & output
    while (true) {
        std::cout << "Enter how many numbers you will use: ";
        std::cin >> input_amount_string;

        try {
            input_amount = std::stoi(input_amount_string);
            if (chosen_number < 0) {
                throw std::invalid_argument("This wasn't an integer");
            }

            break;
        } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a positive integer" << std::endl;
        }
    }

    while (loop_counter < input_amount) {
        loop_counter = loop_counter + 1;

        while (true) {
            std::cout << "Enter your chosen number: ";
            std::cin >> chosen_number_string;

            try {
                chosen_number = std::stoi(chosen_number_string);
                if (chosen_number < 0) {
                    throw std::invalid_argument("This wasn't an integer");
                }

                break;
            } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
            }
        }

        if (chosen_number > largest) {
            largest = chosen_number;

        } if (chosen_number < smallest) {
            smallest = chosen_number;

        } if (loop_counter < input_amount) {
            continue;
        }

        std::cout << "" << std::endl;
        std::cout << "largest = " << largest << ", smallest = " <<
                                                smallest << std::endl;
    }
}
