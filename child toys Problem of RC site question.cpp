#include<bits/stdc++.h>

using namespace std;



//Function to find x to the power y

long long power(long long x, long long y) {

 long long temp;

 if (y == 0)

  return 1;

 temp = (power(x, y / 2))%(1000000007);

 if (y % 2 == 0)

  return (temp * temp)%(1000000007);

 else

  return (x * temp*temp)%(1000000007);

}

int main() {

 long long q;

 cin >> q;

 while (q--) {

  long long n;    //Number of different toys

  cin >> n;

  cout << power(2,n)%(1000000007)<<endl;

 }

 return 0;

}
