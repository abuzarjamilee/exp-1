#include <iostream>

// Abuzar  //
// PRN - 2370123158//

int main() {
    int num1, num2, sum;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}

/*
Output
Enter the first number: 5
Enter the second number: 5
The sum of 5 and 5 is 10
*/
#include <iostream>

int main() {
    int num1, num2, average;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    average = (num1 + num2) / 2.0;

    std::cout << "The average of " << num1 << " and " << num2 << " is " << average << std::endl;

    return 0;
}
/*
output
Enter the first number: 5
Enter the second number: 3
The average of 5 and 3 is 4
*/

#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
/*
Output
Hello, World!
*/

#include <iostream>



int main() {
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
/*
Output
Enter a year: 2019
2019 is not a leap year.
*/
