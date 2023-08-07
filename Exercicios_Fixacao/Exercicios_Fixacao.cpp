#include <iostream>

bool isPalindrome(int);

int main()
{
    int teste1 = 123454321;
    int teste2 = 1234545321;
    if (isPalindrome(teste1))
        std::cout << "Is Palindrome";
    else
        std::cout << "Is not Palindrome";

    return 0;
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
