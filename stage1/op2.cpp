#include<iostream>
#include<string>
using namespace std;


int main()
{
	int t,n,m;
	cin>>t;
	string str[t];
	
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		if(m%n==0)
			str[i]="Yes";
		else
			str[i]="No";
	}

	for(int i=0;i<t;i++)
		cout<<str[i]<<endl;

	return 0;
}

