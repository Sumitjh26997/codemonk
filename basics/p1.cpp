/*
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N. 
Second line contains string S.

Output format: 
First line should contain N x 2. 
Second line should contain the same string S.

Constraints:
0<=N<=10
1<=|S|<=15 where S length of string S
*/


#include<iostream>
using namespace std;


int main()
{
	int n;
	char s[15];

	//taking input from user
	cin>>n;
	cin>>s;

	//displaying required output
	cout<<n*2<<endl;
	cout<<s<<endl;

	return 0;
}

