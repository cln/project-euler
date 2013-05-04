// Problem 3
//
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

#include <iostream>

using namespace std;

int getLargestPrimeFactor(long int number)
{
	int div = 2;
	while (number > 1)
		if ((number % div) == 0) {
			number = number / div;
		} else {
			div++;
		}
	return div;
}

int main(int argc, char** argv)
{
	std::cout << getLargestPrimeFactor(600851475143) << std::endl;
}