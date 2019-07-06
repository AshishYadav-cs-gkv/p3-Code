#include<iostream>
#include<string.h>
using namespace std;
char c[] = "ashsa";
void palindrome(char c[],int start,int last)
{
	if(start>=last)
	{
		cout<<"palindrome";
		return;
	}
    if(c[start]==c[last])
    {
    	palindrome(c,start+1,last-1);
	}
	else
	{
		cout<<"not palindrome";
		return ;
	}
}
int main()
{
	int i;
	int start = 0;
	int len =  strlen(c);
	palindrome(c,start,len-1);
}
