#include <iostream>

// 1197. Lonesome Knight

// The statement of this problem is very simple: you are to determine how many squares of the chessboard can be attacked by a knight 
// standing alone on the board. Recall that a knight moves two squares forward (horizontally or vertically in any direction) and then 
// one square sideways (perpedicularly to the first direction).

// Input
// The first line contains the number N of test cases, 1 ≤ N ≤ 100. Each of the following N lines contains a test : two characters.
// The first character is a lowercase English letter from 'a' to 'h' and the second character is an integer from 1 to 8; they specify 
// the rank and file of the square at which the knight is standing.

// Output
// Output N lines.Each line should contain the number of the squares of the chessboard that are under attack by the knight.

int main()
{
	int N;
	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		char ch;
		int n;
		std::cin >> ch >> n;

		if (('b' < ch && ch < 'g') && (2 < n && n < 7))
			std::cout << 8 << '\n';
		else if ((ch == 'b' || ch == 'g') && (2 < n && n < 7))
			std::cout << 6 << '\n';
		else if (('b' < ch && ch < 'g') && (n == 2 || n == 7))
			std::cout << 6 << '\n';
		else if ((ch == 'a' || ch == 'h') && (2 < n && n < 7))
			std::cout << 4 << '\n';
		else if (('b' < ch && ch < 'g') && (n == 1 || n == 8))
			std::cout << 4 << '\n';
		else if ((ch == 'b' || ch == 'g') && (n == 2 || n == 7))
			std::cout << 4 << '\n';
		else if ((ch == 'a' || ch == 'h') && (n == 2 || n == 7))
			std::cout << 3 << '\n';
		else if ((ch == 'b' || ch == 'g') && (n == 1 || n == 8))
			std::cout << 3 << '\n';
		else
			std::cout << 2 << '\n';
	}
}