//
//  main.cpp
//  NameExtractor
//
//  Created by Isaac Adeleke on 10/20/24.
//

// main.cpp
#include <iostream>
#include <string>
#include <sstream>

int main() {
    // Input: Full name (first name + last name)
    std::string fullName;
    
    // Ask user to input the full name
    std::cout << "Enter the full name (first name and last name): ";
    std::getline(std::cin, fullName);  // Get the full name from the user input

    // Extracting first and last name using stringstream
    std::stringstream ss(fullName);
    std::string firstName, lastName;

    // Assuming the first token is the first name, and the last token is the last name
    ss >> firstName >> lastName;

    // Output the first and last name
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;

    return 0;
}
