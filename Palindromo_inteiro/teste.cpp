#include <iostream>

using namespace std;

bool isPalindrome(int);

int main()
{
	int test1 = 123454321;
	int test2 = 1234546545321;

	if (isPalindrome(test1))
		cout << "This number is Palindrome";
	else
		cout << "This number isn't Palindrome";
}


bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}

	if (!x)
		return true;

	int inversao{};
	while (x > inversao)
	{
		inversao = inversao * 10 + x % 10;
		x /= 10;
	}
	return x == inversao || x == inversao / 10;

}