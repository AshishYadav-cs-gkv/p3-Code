#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
int GCD(string a,string b)
{
	if(a==0)
	    return b;
	stringstream str1(a);//converting string a to intger type
	long long int x = 0;
	str1 >> x;     // upto this conversion of a occurs
	long long int i;
	long long int temp = 0;
	int len = b.length();
	for(i=0;i<len;i++)
	{
		temp = (temp*10+b[i]-'0')%x;
	}
	stringstream  ss;//again converting integer type temp to string type
	ss<<temp;
	string str = ss.str();//upto this this conversion happen
	return GCD(a,str);
}
int main()
{
	string a;
	string b;
	cin>>a>>b;
	cout<<GCD(a,b);
}
