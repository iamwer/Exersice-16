#include <iostream>
#include <vector>
using namespace std;

bool ascendingCompare(int a, int b)
{
	return a < b;
}

bool descendingCompare(int a, int b)
{
	return a > b;
}

void sortAscending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}

}


void sortDescending(vector<int>& numbersVector)
{
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}


void printNumbers(vector<int>& numbersVector)
{
	for (int i = 0; i < numbersVector.size(); i++)
		cout << numbersVector[i] << ' ';
}


int main()
{
	

	vector<int>myNumbers = { 3,4,2,1,5,6 };
	sortDescending(myNumbers);
	printNumbers(myNumbers);
	


	system("pause>null");
}