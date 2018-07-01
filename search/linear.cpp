#include<iostream>
using namespace std;


int main()
{
	int n,m;
	int pos=-1;

	cin>>n>>m;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
			pos=i+1;
	}

	cout<<pos<<endl;

	return 0;
}

