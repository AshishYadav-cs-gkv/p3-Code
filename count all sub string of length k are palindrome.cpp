#include<iostream>
#include<string.h>
using namespace std;
static int count = 0;
void palindrome(string c,int start,int last,int k)
{

	if(last==-1)
	{
		return ;
	}
	if(start>last)
	{
		
		//cout<<c<<" ";
		if(c.length()==k)
		{
			count++;
		}
		return;
	}
    if(c[start]==c[last])
    {
    	palindrome(c,start+1,last-1,k);
	}
	else
	{
	    
		return ;
	}
	
}
int main()
{
	int i,j,k;
	string str;
	cout<<"enter the string: ";
	cin>>str;
	cout<<"enter the substring length which is palindrome and you want to count: ";
	cin>>k;
	int len  = str.length();
	for(i=0;i<len;i++)
	{
	  for(j=1;j<=len-i;j++)
	  {
	  	
	   string s = str.substr(i,j);  	
	   int len = s.length();
	   palindrome(s,0,len-1,k);
	  }	
	  //cout<<endl;
    }
    cout<<count;
}
