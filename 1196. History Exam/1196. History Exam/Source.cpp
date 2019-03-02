﻿#include <iostream>
#include <vector>
#include <algorithm>

// 1196. History Exam

// Professor of history decided to simplify the examination process. At the exam, every student should write 
// a list of historic dates she knows (she should write the years only and, of course, must be able to explain
// what event took place in this or that year). Professor has a list of dates that students must know. In order
// to decide upon the student's mark, Professor counts the number of dates in the student's list that are also 
// present in his list. The student gets her mark according to the number of coincidences.
// Your task is to automatize this process.Write a program that would count the number of dates in the student's
// list that also occur in Professor's list.

// Input
// The first line contains the number N of dates in Professor's list, 1 ≤ N ≤ 15000. The following N lines contain this list, one number per line. Each date is a positive integer not exceeding 109. Professor's list is sorted in non - descending order.The following line contains the number M of dates in the student's list, 1 ≤ M ≤ 106. Then there is the list itself; it is unsorted. The dates here satisfy the same restriction. Both in Professor's and in the student's lists dates can appear more than once.

// Output
// Output the number of dates in the student's that are also contained in Professor's list.

int main()
{
	int N;
	std::cin >> N;
	std::vector<int> Teacher(N);

	for (int i = 0; i < N; ++i)
	{
		std::cin >> Teacher[i];
	}

	int M;
	std::cin >> M;
	std::vector<int> Student(M);
	
	for (int i = 0; i < M; ++i)
	{
		std::cin >> Student[i];
	}
	
	std::sort(Student.begin(), Student.end());
	int solution = 0;
	
	for (int i = 0; i < M; ++i)
	{
		int count = std::binary_search(Teacher.begin(), Teacher.end(), Student[i]);
		solution += count;
	}
	
	std::cout << solution;
}
