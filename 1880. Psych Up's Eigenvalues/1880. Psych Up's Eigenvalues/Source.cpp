#include <iostream>
#include <algorithm>
#include <vector>

// 1880. Psych Up's Eigenvalues

// At one of the contests at the Petrozavodsk Training Camp, players of the Psych Up team quickly found the simple problem
// and Fedya sat at the computer. The solution was ready in five minutes. Without spending time for testing, Fedya submitted 
// it and in a few seconds got Time Limit Exceeded.
// Fedya crumpled the problem statement and left the room slamming the door behind him. Things were going the wrong way and 
// he needed to wind down. On his way to the restroom Fedya heard a conversation of the contest authors. Pasha was discussing
// with his friend the solution of the problem for which Fedya had got TLE. Fedya could only discern the word “eigenvalues.”
// Fedya thought about it and decided that he, for sure, had his eigenvalues. For example, the date of birth, the number of his
// apartment, the mark he had got at the latest exam, or the number of travels to contests. But they had a team contest, so what 
// was their team's eigenvalue? Of course, a number was a team's eigenvalue if it was an eigenvalue for each of its players. With 
// these joyful thoughts Fedya returned to the contest room.

// Input
// The input data consist of three blocks two lines each. The first line of each block contains the number n of a player's eigenvalues
// (1 ≤ n ≤ 4 000). In the second line you are given n distinct integers in ascending order, which are the eigenvalues. All the eigenvalues
// are positive integers not exceeding 109.

// Output
// Output the number of eigenvalues of the Psych Up team.

int main()
{
	int n1;
	std::cin >> n1;
	std::vector<int> V1(n1);
	
	for (int i = 0; i < n1; ++i)
	{
		std::cin >> V1[i];
	}
	
	int n2;
	std::cin >> n2;
	std::vector<int> V2(n2);
	
	for (int i = 0; i < n2; ++i)
	{
		std::cin >> V2[i];
	}
	
	int n3;
	std::cin >> n3;
	std::vector<int> V3(n3);
	
	for (int i = 0; i < n3; ++i)
	{
		std::cin >> V3[i];
	}
	
	int count = 0;
	for (int i = 0; i < n1; ++i)
	{
		if ((std::binary_search(V2.begin(), V2.end(), V1[i])) && (std::binary_search(V3.begin(), V3.end(), V1[i])))
			++count;
	}
	
	std::cout << count;
}
