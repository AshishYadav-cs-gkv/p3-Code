#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
    sort(s1.begin(), s1.end());
	sort(s2.begin(),s2.end());
	cout<<s1<<endl;
	cout<<s2;
/*	int len = s1.length();
	int i;
	int flag = 0;
	for(i=0;i<len;i++)
	{
		if(s3[i]==s4[i])
		{
			flag =1;
		}
		else
		{
		  flag =0;
		}
	}
	if(flag==1)
	{
		cout<<"equal string";
	}
	else
	{
		cout<<"not equal string";
	}*/
}
