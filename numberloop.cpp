// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: December 2020
// This program loops numbers to print 1000

#include <iostream>


main() {
    // this function uses a nested loop
    int counter1;

    // process & output
    for (counter1 = 1000; counter1 < 2000; counter1++) {
        std::cout << counter1 << " ";

        if (counter1 % 5 ==4) {
            std::cout << "" << std::endl;
        }
    }
}
