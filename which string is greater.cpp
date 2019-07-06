#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string  str = "Zadav";
	string str1 = "Yzdav";
	if(str>str1)
	{
		cout<<"Zadav is greater";
	}
	else
	{
		cout<<"Yadav is greater"; // here answer Zadav is coming because it do character to character matching is done according
		//to their ascii value the weitage of Z is greater so this answer is coming 
	}
}
