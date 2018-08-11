//Given a list of words, find the word pairs that when 
//concatenated form a palindrome.

#include<iostream>
#include <algorithm>
#include <vector>
#include<string>

using namespace std;

bool checkPal(string str)
{
	int len = str.length();
	for(int i=0; i <= len/2; i++)
		if(str[i] != str[len-i-1])
			return false;
	return true;

}

void checkPalPair(vector <string> words)
{
	vector <string> list;
	int i;
	for(i = 0; i < words.size() - 1; i++)
	{
		for(int j = 0; j < words.size() - 1; j++)
		{
			//concatenate 2 strings
			string newstr = "" + words[i] + words[j];

			//checkPal
			if(checkPal(newstr))
				list.push_back(newstr);
		}
	}
	for(i = 0; i < list.size(); i++)
		cout<<list[i]<<endl;
}

int main()
{
	//List of words
	vector <string> words =  {"geekf", "geeks", "or", "keeg",
								"abc", "bc"};
	checkPalPair(words);
	return 0;
} 