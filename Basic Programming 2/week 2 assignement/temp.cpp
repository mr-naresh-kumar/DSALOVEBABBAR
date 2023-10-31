#include <iostream>

int main() {
    int height;
    
    // Input the height of the solid half diamond
    std::cout << "Enter the height of the solid half diamond: ";
    std::cin >> height;

    if (height < 1) {
        std::cout << "Invalid input. Height must be a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Print the solid half diamond
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = height - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0; // Exit successfully
}
