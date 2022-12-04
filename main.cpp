#include <iostream>

using namespace std;


double my_pow(double number, unsigned int power)
{
	for (int i = 0; i < power; ++i)
	{
		number *= number;
	}
	return(number);
}


int main()
{
	cout << my_pow(2, 2);
}

