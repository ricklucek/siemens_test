#include <iostream>

void reverse(char* str, int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        str[start] = str[start] ^ str[end];
        str[end] = str[start] ^ str[end];
        str[start] = str[start] ^ str[end];

        ++start;
        --end;
    }
}

int main() {
    const int maxSize = 100;
    char input[maxSize];

    std::cout << "String: ";
    std::cin.getline(input, maxSize);

    int length = 0;
    while (input[length] != '\0') {
        ++length;
    }

    reverse(input, length);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}