#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int main()
{
	int p;
	cin>>p;
	bool results[MAX]={0};
	int n,i,j;
//	cin>>n;
    n = p;
	results[2]=0;
	for(i=2;i*i<=n;i++)
	{
		if(!results[i])
		{
			for(j=2;i*j<=n;j++)
			{
				results[i*j]=1;
			}
		}
	}
	for(i=2;i<=n;i++)
	{
		if(results[i]==0)
		{
			//cout<<i<<" ";
			if(p%i==0)
			{
				cout<<"the least prime divisible of the given number is: "<<i<<" ";
				break;
			}
		}
	}
	if(p==1||p==0)
	{
		cout<<"this number are not considered in the program ";
	}
	cout<<"\n";
	return 0;
}
