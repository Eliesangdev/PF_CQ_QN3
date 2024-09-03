#include <iostream>

using namespace std;
int sum_from_to(int first, int last) {//my function
    return (last - first + 1) * (first + last) / 2;
}

int main() {
    int first, last;//declaration of variable first and last

    std::cout << "Enter the first integer: ";//my ouput
    std::cin >> first;//scanne first

    std::cout << "Enter the last integer: ";
    std::cin >> last;

    std::cout << "The sum is: " << sum_from_to(first, last) << std::endl;

    return 0;
}
