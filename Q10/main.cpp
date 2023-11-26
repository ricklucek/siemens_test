#include <iostream>

int main() {
    const int maxLength = 100;
    char str[maxLength];

    std::cout << "String: ";
    std::cin.getline(str, maxLength);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "Length: " << length << std::endl;

    return 0;
}