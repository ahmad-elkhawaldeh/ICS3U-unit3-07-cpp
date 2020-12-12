// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses a compound boolean statement

#include <iostream>

int main() {
    // this function uses a compound boolean statement
    int age;
    std::string age_as_string;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age_as_string;

    // process & output
    try {
        age = std::stoi(age_as_string);

        if (age >= 25 && age <= 40) {
            std::cout << "You can date.";
      } else {
            std::cout << "You can't date .";
      }
  } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}

