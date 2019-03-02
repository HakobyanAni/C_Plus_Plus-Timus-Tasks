#include <iostream>

// 1563. Bayan

// As everybody knows, there are a lot of stores in skyscrapers, it's the favourite place of glamorous girls. Blonde Cindy 
// loves only one thing — the shopping. Today is one of the best days, she's going shopping to the new skyscraper “Prisma”. 
// At first she decided to visit all the stores. But actually the “Prisma” is so large that you can find not just one store 
// of each brand. Every time when Cindy found the brand, she has visited before, she told “Bayan”, and went on shopping.
// Cindy saw all the stores in the “Prisma”.So how many times did she tell “Bayan” ?

// Input
// First line contains single integer N representing the number of stores in the “Prisma”(1 ≤ N ≤ 1000).In each of next N lines 
// the brand of store is written.The brands are the strings of Latin letters and blanks.The length of the string is from 1 to 30. 
// There are no brands, that differ only in register.

// Output
// Print the number of stores, Cindy didn't visit.

int main()
{
	int n;
	std::cin >> n;
	std::cout << ((n >= 7) ? n % 7 : n);
}