#include <iostream>
#include <string>

int main() {
    std::string input;
    while (true) { // Infinite loop
        std::cout << "Enter 'quit' to exit: ";
        std::getline(std::cin, input);
        if (input == "quit") {
            std::cout << "Exiting program." << std::endl;
            break; // Exit the 'while' loop
        }
        std::cout << "You entered: " << input << std::endl;
    }
    std::cout << "Program finished." << std::endl;
    return 0;
}
