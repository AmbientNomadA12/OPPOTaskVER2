#include <iostream>

using namespace std;


double my_pow(double number, unsigned int power)
{
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
}

int main()
{
	cout << my_pow(2, 2) << "\n";
	cout << my_pow_fast(2, 2);
}

