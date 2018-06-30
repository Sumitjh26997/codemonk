#include<iostream>
#include<string>
using namespace std;


int main()
{
	int t;
	cin>>t;
	int ans;
	string s;
	
	for(int i=0;i<t;i++)
	{
		ans=0;
		cin>>s;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]>=97)
				s[j]-=32;

			if(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}

