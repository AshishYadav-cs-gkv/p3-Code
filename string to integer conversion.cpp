#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string s = "12345";
	stringstream str(s);
	int x = 0;
	str >> x;
	cout<< "the value of x: "<<x;
	return 0; 
}
