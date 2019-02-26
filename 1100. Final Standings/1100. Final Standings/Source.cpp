#include <iostream>
#include <vector>
#include <algorithm>

// 1100. Final Standings

// Old contest software uses bubble sort for generating final standings.But now, there are too many teams and that software
// works too slow.You are asked to write a program, which generates exactly the same final standings as old software, but fast.

// Input
// The first line of input contains only integer 1 < N ≤ 150000 — number of teams.Each of the next N lines contains two 
// integers 1 ≤ ID ≤ 107 and 0 ≤ M ≤ 100. ID — unique number of team, M — number of solved problems.

// Output
// Output should contain N lines with two integers ID and M on each.Lines should be sorted by M in descending order as produced by bubble sort(see below).

bool less(const std::pair<int, int>& pair1, const std::pair<int, int>& pair2)
{
	if (pair1.first <= pair2.first)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	long unsigned int N;
	std::cin >> N;
	std::vector<std::pair<int, int>> V;
	
	for (int i = 0; i < N; ++i)
	{
		std::pair<int, int> pair;
		std::cin >> pair.second >> pair.first;
		V.push_back(pair);
	}
	
	std::stable_sort(V.begin(), V.end(), less);
	
	for (int i = N - 1; i >= 0; --i)
	{
		std::cout << V[i].second << " " << V[i].first << "\n";
	}
}