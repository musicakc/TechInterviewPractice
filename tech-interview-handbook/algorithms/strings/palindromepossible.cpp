//Given a list of words, find the word pairs that when 
//concatenated form a palindrome.

#include<iostream>
#include <algorithm>
#include <vector>
#include<string>

using namespace std;

bool checkPal(string str)
{
	int i, oddcount = 0,len = str.length();
	//Initialise count array's values to 0
	int count[256] = {0};

	//increment count based on character
	for(i = 0; str[i]; i++)
		count[str[i]]++;

	//check for character with odd number of occurences
	for (i = 0; i < 256; i++)
	{
		if(count[i] & 1) //bitwise AND, this will return 1 for all count[i] values that are odd
			oddcount++;
		if(oddcount > 1)
			return false;
	}
	return true;
}


int main()
{
	checkPal("geeksforgeeks")?cout<<"Yes"<<endl : cout <<"No"<<endl;
	checkPal("geeksfgeeks")?cout<<"Yes"<<endl : cout <<"No"<<endl;
	checkPal("meestteems")?cout<<"Yes"<<endl : cout <<"No"<<endl;

	return 0;
} 