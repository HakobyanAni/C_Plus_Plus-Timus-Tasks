#include <iostream>
#include <string>

// 1881. Long problem statement

// While Fedya was writing the statement of the problem GOV Chronicles, he realized that there might be not enough paper
// to print the statements.He also discovered that his text editor didn't have the feature of calculating the number of pages in a text.
// Then Fedya decided to write a program that would calculate the number of pages for any given text.
// Fedya knew that there were h lines on each page and w symbols in each line. Any two neighboring words in a line were separated by 
// exactly one space.If there was no place for a word in a line, Fedya didn't hyphen it but put the whole word at the beginning of the next line.

// Input
// The first line contains the integers h, w, and n, which are the number of lines on a page, the number of symbols in a line, and the number of words in the problem statement, respectively(1 ≤ h, w ≤ 100; 1 ≤ n ≤ 10 000).The statement written by Fedya is given in the following n lines, one word per line.The words are nonempty and consist of uppercase and lowercase English letters and punctuation marks(period, comma, exclamation mark, and question mark); the length of each word is at most w.The total length of all the words is at most 10 000.

// Output
// Output the number of pages in the problem statement.

int main()
{
	int h, w, n;
	std::cin >> h >> w >> n;
	std::string Condition;
	int a = w + 1;
	int string = 1;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> Condition;
		if (Condition.size() < a)
		{
			a = a - Condition.size() - 1;
		}
		else
		{
			string += 1;
			a = w + 1 - Condition.size() - 1;
		}
	}

	/* if (string % h == 0)
		  std::cout << string / h;
	   else
		  std::cout << string / h + 1; */
	// OR

	std::cout << (string + h - 1) / h;
}


