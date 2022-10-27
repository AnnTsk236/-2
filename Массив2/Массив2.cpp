#include <iostream>


int main()
{
	const int size = 20;
	int array[size][size] = { {0,1,2,3,4,5,6,7,8,9},{11,12,13,14,15,16,17,18,19} };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << array[i][j];
		}
		std::cout << '\n';
	}

	#include <time.h>

	int sum = 0;

	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday;

	for (int i = 0; i < size; i++)
	{
		sum += array[day % size][i];
	}
	std::cout << sum << '\n';

	return 0;
}