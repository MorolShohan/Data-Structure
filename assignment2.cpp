#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	double array[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};
	double sum = 0;
	for (int rowCount = 0; rowCount < 3; rowCount++)
	{
		for (int columnCount = 0; columnCount < 3; columnCount++)
		{
			if ((rowCount + 1) % 2 != 0)
				sum += array[rowCount][columnCount];
			if (rowCount == columnCount)
				sum += array[rowCount][columnCount];
			if (rowCount == 0 && columnCount == 2)
				sum += array[rowCount][columnCount];
			if (rowCount == 2 && columnCount == 0)
				sum += array[rowCount][columnCount];
		}
	}

	cout << "T H E   S U M   I S :   " << sum << endl;
	return 0;
}

