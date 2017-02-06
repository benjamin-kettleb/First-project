#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	// This program calculates the range, highest, lowest and mean of a data set
	int number;
	int current = 0;
	int mark = 0;
	float mean = 0;
	float gmean = 1;
	int highest = 0;
	int lowest = 0;
	
	cout << "How many numbers are there in your data?" << endl;
	cin >> number;
	
	while (current < number)
	{
		cout << "What is your data at number " << current + 1 << endl;
		cin >> mark;
		
		mean = mean + mark;
		gmean = gmean * mark;
		
		if (mark > highest)
			highest = mark;
		
		if (mark < lowest or current == 0)
			lowest = mark;
		
		current++;
	}
	
	mean = mean / number;
	
	gmean = pow(gmean, 1.0/number);
	
	cout << "The highest peice of data is " << highest << endl;
	cout << "The lowest peice of data is " << lowest << endl;
	cout << "The range is " << highest - lowest << endl;
	cout << "The arethmetic mean is " << mean << endl;
	cout << "The Geometric mean is " << gmean << endl;
	
	return 0;
}
