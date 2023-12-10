#include <iostream>
#include <string>
using namespace std;
long long itc_len(string str) {
	int s = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		s++;
	}
	return s;
}

bool itc_isDigit(unsigned char c) 
{
	return (c >= '0' && c <= '9');
}
unsigned char itc_toUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	else { return 0; }
	
}
unsigned char itc_changeCase(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	else if (c >= 'A' && c >= 'Z')
	{
		return c + 32;
	}
	else { return c; }
}
bool itc_ñompare(std::string s1, std::string s2) {
	if (s1 == s2) { return 1; }
	else { return 0; }
}
int itc_countWords(string str)
{
	return 0;
}
string itc_Cezar(string str, int k) {
	string result;
	for (char sim : str) {
		if (k + sim < 'a')
		{
			result += k + sim + 26;
		}
		else 
		{
			result += k + sim;
		}
	}
	return result;
}
string itc_maxCharWord(string str) 
{
	int sim = 0;
	string word;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word += str[i];

		}

	}
	return word;
	
}
