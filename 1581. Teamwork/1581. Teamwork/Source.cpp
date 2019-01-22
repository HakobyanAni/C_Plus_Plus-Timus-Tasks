#include <iostream>
#include <vector>

// 1581. Teamwork

// Vasya and Petya are going to participate in a team olympiad in informatics.
// They have listened to the stories told by the gurus of olympiad programming and now they are aware 
// that teamwork is of crucial importance for outstanding performance.Therefore they decided to develop their teamwork skills.
// Vasya wrote a sequence of integers on a sheet of paper and started to read it to Petya number by number.
// For the sake of brevity he tells it in the following way : first he tells the quantity of consecutive identical numbers and 
// then tells this number.For instance, the sequence “1 1 2 3 3 3 10 10” will be told by Vasya as “two ones, one two, three threes, two tens”.
// Petya also wants to be concise, so he writes down the numbers pronounced by Vasya instead of the whole words.
// For the example above, Petya would write : “2 1 1 2 3 3 2 10”.
// After some teamwork practice, Vasya and Petya also decided to develop programming skills and to write a computer program
// to convert Vasya's sequence to Petya's one.

// Input
// The first line contains an integer N, which is the quantity of numbers written down by Vasya(1 ≤ N ≤ 1000).
// The second line contains these numbers separated by spaces.All the numbers are positive integers not greater than 10.

// Output
// Output the numbers Petya would write down separated by space.

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> V(n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> V[i];
	}
	
	int count = 1;
	
	for (int i = 0; i < n - 1; ++i)
	{
		if (V[i] == V[i + 1])
		{
			++count;
		}
		else
		{
			std::cout << count << " " << V[i];
			count = 1;
			if (i != n - 2)
			{
				std::cout << " ";
			}
		}
	}
	
	if (count > 1)
	{
		std::cout << count;
	}
	
	else
	{
		std::cout << " " << 1;
	}
	
	std::cout << " " << V[n - 1];
}