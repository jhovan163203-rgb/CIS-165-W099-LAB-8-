#include <iostream>

int main() {
    const int SENTINEL = -99;

    int currentNumber = 0;
    int smallestValue = 0;
    int largestValue = 0;
    bool isFirstValue = true;
    int valueCount = 0;

    std::cout << "Enter a series of integers (enter " << SENTINEL << " to stop):" << std::endl;

    std::cin >> currentNumber;

    while (currentNumber != SENTINEL) {
        if (isFirstValue) {
            smallestValue = currentNumber;
            largestValue = currentNumber;
            isFirstValue = false;
        } else {
            if (currentNumber < smallestValue) {
                smallestValue = currentNumber;
            }
            if (currentNumber > largestValue) {
                largestValue = currentNumber;
            }
        }

        valueCount++;
        std::cin >> currentNumber;
    }

    if (valueCount == 0) {
        std::cout << "No data values were entered." << std::endl;
    } else {
        std::cout << "Smallest value: " << smallestValue << std::endl;
        std::cout << "Largest value: " << largestValue << std::endl;
    }

    return 0;
}
