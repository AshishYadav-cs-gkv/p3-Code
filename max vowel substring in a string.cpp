#include <bits/stdc++.h> 
using namespace std; 

bool isVowel(char c) 
{ 
	return (c == 'a' || c == 'e' || c == 'i'
			|| c == 'o' || c == 'u'); 
			
} 

int longestVowel(string s) 
{ 
	int count = 0, res = 0; 
	for (int i = 0; i <= s.length(); i++) 
	{ 
		if (isVowel(s[i])) 
		count++;	 

		else
		{ 
			res = max(res, count); 

			count = 0; 
		} 
	} 
	return res; 
} 
int main() 
{ 
	string s = "theeare"; 
	cout << longestVowel(s) << endl; 
	return 0; 
} 

