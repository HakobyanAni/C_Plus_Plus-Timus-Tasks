#include <iostream>
#include <vector>
#include <iomanip>

// 1263. Elections

// The next in turn elections are to come soon.All the fences are postered with leaflets and the mail boxes are full 
// of throwaways.Cheeky guys are looking at us from TV’s and promise to make our life better… And programmer Vasechkin
// is knee - deep in work.He is to write a program that would calculate the results of voting.

// Input
// The first line contains a number of candidates N(1 ≤ N ≤ 10000) and a number of electors M(1 ≤ M ≤ 10000).Then 
// M lines follow, each one contains a number of candidate that the elector voted for.The candidates are numbered with integers from 1 to N.

// Output
// Output N lines.The i - th line should contain the percent of electors that voted for the i - th candidate(to within 2 decimals).

int main()
{
	int candidates, voters;
	std::cin >> candidates >> voters;
	std::vector<int> Number_Of_Candidate(voters);
 
	for (int i = 0; i < voters; ++i)
	{
		std::cin >> Number_Of_Candidate[i];
	}

	int count_of_voters = 0;
	std::vector<double> Prcnt;

	for (int i = 1; i <= candidates; ++i)
	{
		for (int j = 0; j < Number_Of_Candidate.size(); ++j)
		{
			if (Number_Of_Candidate[j] == i)
			{
				++count_of_voters;
			}
		}
		Prcnt.push_back(count_of_voters);
		count_of_voters = 0;
	}
	
	for (int i = 0; i < Prcnt.size(); ++i)
	{
		std::cout << std::fixed << std::setprecision(2) << (Prcnt[i] / voters) * 100 << "%" << "\n";
	}
}
