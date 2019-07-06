#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j;
	string str;
	cout<<"enter the string: ";
	cin>>str;
	int len  = str.length();
/*	for(j=1;j<=len;j++)
	{
		for(i=0;i+j<=len;i++)
		{
			cout<<str.substr(i,j)<<endl;
		}
	}*///the above comment code is also running properly but the below code is another type to solve above problem
	for(i=0;i<len;i++)
	{
	  for(j=1;j<=len-i;j++)
	  {
	   cout<<str.substr(i,j)<<" ";  	
	  }	
	  cout<<endl;
    }
}
