#include <iostream>
#include <algorithm>
#include <cmath>

// 1493. One Step from Happiness

// Vova bought a ticket in a tram of the 13th route and counted the sums of the first three and the last three
// digits of the ticket's number (the number has six digits). It turned out that the sums differed by one exactly.
// "I'm one step from happiness, " Vova thought, "either the previous or the next ticket is lucky." Is he right?

// Input
// The input contains the number of the ticket.The number consists of six digits, some of which can be zeros.
// It is guaranteed that Vova counted correctly, i.e., that the sum of the first three digits differs from the sum of the last three digits by one exactly.

// Output
// Output "Yes" if Vova is right and "No" otherwise.

int main()
{
	int number;
	std::cin >> number;
	int first = number / 1000;
	int second = number % 1000;
	int first_numb_sum = first / 100 + first % 100 / 10 + first % 10;
	int second_numb_sum = second / 100 + second % 100 / 10 + second % 10;
	int min = std::min(first, second);
	int max = std::max(first, second);

	if (first_numb_sum > second_numb_sum)
	{
		if ((std::abs(first_numb_sum - second_numb_sum) == 1) && ((second + 1) / 100 + (second + 1) % 100 / 10 + (second + 1) % 10) == first_numb_sum)
			std::cout << "Yes";
		else
			std::cout << "No";
	}
	
	else if (first_numb_sum < second_numb_sum)
	{
		if ((std::abs(first_numb_sum - second_numb_sum) == 1) && ((second - 1) / 100 + (second - 1) % 100 / 10 + (second - 1) % 10) == first_numb_sum)
			std::cout << "Yes";
		else
			std::cout << "No";
	}
	
	else
		std::cout << "No";
}