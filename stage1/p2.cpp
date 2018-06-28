/*
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input: 
First line contains string S.

Output: 
For each digit starting from 0 to 9, print the count of their occurrences in the string S. So, print  lines, each line containing 2 space separated integers. First integer i and second integer count of occurrence of i. See sample output for clarification.

Constraints:
1<=|S|<=100
*/

#include<iostream>
#include<string>
using namespace std;


int main()
{
	int digit[10]={0};
	string str;

	cin>>str;

	int s_len=str.length();
	for(int i=0;i<s_len;i++)
	{
		int p=str[i]-48;
		digit[p]++;
	}

	for(int i=0;i<10;i++)
		cout<<i<<" "<<digit[i]<<endl;
	
	return 0;
}

