#pragma once

bool isPalindrome(const char str[], int length);
bool isPalindromeRecursive(const char str[], int start, int end);

void arrayPractice1()
{
	cout << isPalindrome("radar", 5) << endl;
}

bool isPalindrome(const char str[], int length)
{
	for (int i = 0; i < length / 2; i++)
	{
		char ch1 = str[i];
		char ch2 = str[length - 1 - i];

		if (ch1 != ch2)
		{
			return false;
		}
	}

	return true;
}

bool isPalindromeRecursive(const char str[], int start, int end)
{
	// Base case: If start index is greater than or equal to end index, it's a palindrome
	if (start >= end) {
		return true;
	}

	// Check if the characters at the current start and end indices are equal
	if (str[start] != str[end]) {
		return false;
	}

	// Move towards the middle by checking the next pair of characters
	return isPalindromeRecursive(str, start + 1, end - 1);
}