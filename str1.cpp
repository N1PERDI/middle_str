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
bool itc_сompare(std::string s1, std::string s2) {
	if (s1 == s2) { return 1; }
	else { return 0; }
}
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
	int scet = 0;
	string word;
	for (int i = 0; str[i] != '\0'; i++)
	{

	} 
	return str;
}
char itc_sameChar(string str) {
	bool b = true;
	char c;
	int ch = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ') 
		{
			c = str[i];
		}
		while (ch != itc_len(str)) 
		{
			if (str[b] != c)
			{
				b++;
				ch++; 
			}
			
		}
	}
	return c;
}
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
		result = d+ result;
		num /= base;
	}

	return result;
}

