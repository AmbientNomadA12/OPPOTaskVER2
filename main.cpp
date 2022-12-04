#include <iostream>

using namespace std;


double my_pow(double number, int power)
{
<<<<<<< HEAD
	double result = 1;
	if (power < 0) {
		power = -power;
		for (long i = 0; i < power; i++) {
			result *= number;
		}

		return 1 / result;
	}
	else {
		for (long i = 0; i < power; i++) {
			result *= number;
		}

		return result;
	}
}

double my_pow_fast(double number, int power)
{
	double result = 1;

	if (power < 0) {
		power = -power;

		while (power) {
			if (power % 2 == 0) {
				power /= 2;
				number *= number;
			}
			else {
				power--;
				result *= number;
			}
		}

		return 1 / result;
	}
	else {
		while (power) {
			if (power % 2 == 0) {
				power /= 2;
				number *= number;
			}
			else {
				power--;
				result *= number;
			}
		}

		return result;
	}
=======
	int result = 1;
	for (int i = 0; i < power; ++i)
	{
		result *= number;
	}
	return(result);
}

double my_pow_fast(double number, unsigned int power)
{
	long result = 1;
	while (power) {
		if (power % 2 == 0) {
			power /= 2;
			number *= number;
		}
		else {
			power--;
			result *= number;
		}
	}

	return result;
>>>>>>> feature_fast
}

int main()
{
<<<<<<< HEAD
	cout << my_pow(2, -2) << "\n";
	cout << my_pow_fast(2, -2);
=======
	cout << my_pow(2, 2) << "\n";
	cout << my_pow_fast(2, 2);
>>>>>>> feature_fast
}

