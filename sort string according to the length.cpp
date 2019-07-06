//Is compiler me ye program nhi chalega online compiler me check kar lo
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool cmp(string &a, string &b)
{
    return a.size()<b.size();
}
int main()
{
string words[] = {"Raman Classess", "is", "good", "algorithm"};
int length = sizeof(words) / sizeof(string);
cout<<length;
/*sort(words, words + length, cmp);

for(int i = 0; i < length; i++)
    cout << words[i] << " ";
cout << endl;
}*/
}
//output of above program is "is good algorithm Raman Classess"
