#include<iostream>
#include<string.h>
using namespace std;
void palindrome(string c,int start,int last)
{
	if(last==-1)
	{
		return ;
	}
	if(start>last)
	{
		cout<<c<<" ";
		return;
	}
    if(c[start]==c[last])
    {
    	palindrome(c,start+1,last-1);
	}
	else
	{
	    
		return ;
	}
	
}
int main()
{
	int i,j;
	string str;
	cout<<"enter the string: ";
	cin>>str;
	int len  = str.length();
	for(i=0;i<len;i++)
	{
	  for(j=1;j<=len-i;j++)
	  {
	  	
	   string s = str.substr(i,j);  	
	   int len = s.length();
	   palindrome(s,0,len-1);
	  }	
	  cout<<" ";
    }
}
