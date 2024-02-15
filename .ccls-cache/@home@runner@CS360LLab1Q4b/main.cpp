#include <iostream>
#include <iomanip>
using std::cout;

int main() {
    cout << std::fixed << std::showpoint;

    // Named constants for the numbers
    const int num1 = 1066, num2 = 1492, num3 = 512, num4 = 1, num5 = -23;

    // Print the numbers right-justified in a column
    cout << std::setw(6) << num1 << std::endl;
    cout << std::setw(6) << num2 << std::endl;
    cout << std::setw(6) << num3 << std::endl;
    cout << std::setw(6) << num4 << std::endl;
    cout << std::setw(6) << num5 << std::endl;
    // Calculate the answer
    double answer = static_cast<double>(num1 + num2) / (num3 + num4 + num5);

    // Print the answer to four decimal places
    cout << "The answer is " << std::setprecision(4) << answer << "." << std::endl;
    return 0;
}
