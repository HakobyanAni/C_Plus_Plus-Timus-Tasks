#include <iostream>
#include <vector>
#include <cmath>

// 1209. 1, 10, 100, 1000...

// Let's consider an infinite sequence of digits constructed of ascending powers of 10 written one after another. 
// Here is the beginning of the sequence: 110100100010000… You are to find out what digit is located at the definite position of the sequence.

// Input
// There is the only integer N in the first line(1 ≤ N ≤ 65535).The i - th of N left lines contains the integer Ki — the number of position
// in the sequence(1 ≤ Ki ≤ 231 − 1).

// Output
// You are to output N digits 0 or 1 separated with a space.More precisely, the i - th digit of output is to be equal to the Ki - th digit 
// of described above sequence.


int main()
{
	long long n;
	std::cin >> n;
	std::vector<long long> V(n);

	for (long int i = 0; i < n; ++i)
	{
		std::cin >> V[i];
		int d = (1 + std::sqrt(V[i] * 8 - 7)) / 2;
		double d_int = (1 + std::sqrt(V[i] * 8 - 7)) / 2;

		if (d == d_int)
		{
			std::cout << "1" << " ";
		}

		else
		{
			std::cout << "0" << " ";
		}
	}
}