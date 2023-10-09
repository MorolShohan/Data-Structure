
#include <iostream>
using namespace std;


int const rows = 5;
int const cols = 5;
int input[rows][cols];
int sumRow(int input[rows][cols])
{
	int sum = 0;
	for (int Row = 0; Row < rows; ++Row)
		sum += input[rows][cols];
	return sum;
}

int average(int sum, int rows)
{
	return sum / cols;
}

int main()
{
	cout << "This program will calculate the sum and average  of the non boundary elements of the values in each row. There will be five rows and five columns" << endl;

	cout << "Please Enter the array values. " << endl;
	for (int Row = 0; Row < cols; Row++){
		for (int Col = 0; Col < cols; Col++) {
			cin >> input[rows][cols];
			}
		}

	cout << "Row 1" <<  endl;
	cout << "Total = " << sumRow << endl;
	cout << "Average = " << average << endl;

    return 0;
}
