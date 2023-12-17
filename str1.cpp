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
//+
unsigned char itc_toUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	else { return 0; }

}
//+
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
//+
bool itc_сompare(std::string s1, std::string s2) {
	if (s1 == s2) { return 1; }
	else { return 0; }
}
//+
int itc_countWords(string str)
{
	int scet = 0;
	string word;
	for (int i = 0; str[i] !='\0'; i++)
	{
		if (str[i] != ' ')
		{
			word += str[i];
		}
		else 
		{
			bool s = true;
			for (int c = 0; word[c] != '\0'; c++)
			{
				if ((word[c] >= 'a' && word[c] <= 'z') || (word[c] >= 'A' && word[c] >= 'Z') || (word[c] >= 'а' && word[c] >= 'я') || (word[c] >= 'А' && word[c] >= 'Я'))
				{
					s = false;
				}
			}
			if (s==false)
			{
				scet++;
			}
		}
		
	}
	return scet;
}
//+
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
//+
string itc_maxCharWord(string str)
{
	string result;
	string word;
	size_t max = 0;

	for (char c : str) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я')) {
			word += c;
		}
		else {

			if (itc_len(word) > max) {
				max = itc_len(word);
				result = word;
			}
			word.clear();
		}
	}
	if (itc_len(word) > max) {
		result = word;
	}
	if (result== "") { return "error"; }

	return result;
}
//+
char itc_sameChar(std::string str)
{
	int result = 0;
	for (int i = 0; i < itc_len(str); i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			for (int n = 0; n < itc_len(str); n++)
			{
				if (str[i] == str[n])
					result++;
			}
			if (result == 2)
				return str[i];
		}
	}
	return 0;
}
//+
string itc_decToBase(int num, int base) 
{ 
	string result;
	if (num == 0) { return "0"; }
	while (num != 0) 
	{
		char d;
		int p = num % base;
		if (p < 10) 
		{
			d = '0' + p;
		}
		else 
		{
			d = 'A' + p - 10;
		}
		result = d + result;
		num /= base;
	}

	return result;
}
// +
bool itc_isFirstInSecond(string s1, string s2)
{
	int lens1 = itc_len(s1);
	int lens2 = itc_len(s2);
	if (lens1 == 0) { return 1; }
	if (lens1 > lens2) { return 0; }
	for (int i = 0; i <= lens2 - lens1; ++i) {
		
		bool word = true;
		for (int n = 0; n < lens1; ++n) {
			if (s2[i + n] != s1[n]) {
				word = false;
				break;
			}
		}
		if (word) { return true; }
	}
	return false;
}
//+
string itc_rmFreeSpace(string str) {
	string result;
   bool NOspace = false;

	for (char c : str) {
		if (c == ' ') 
		{
			if (!NOspace) {	result += ' '; }
			NOspace = true;
		}
		else 
		{
			result += c;
			NOspace = false;
		}
	}
	return result;
}
//+
