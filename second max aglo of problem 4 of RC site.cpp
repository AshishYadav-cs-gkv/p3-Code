#include <bits/stdc++.h>

using namespace std;

int main(){

   int n;                           //Number of elements in the array

   cin>>n;

   vector<int> a(n);                //Vector to store the number of gold coins

   for(int i=0;i<n;i++){

       cin>>a[i];

   }

   int largest=INT_MIN,second_largest=INT_MIN;

 //Code to find the second largest element

   for(int i=0;i<n;i++){

  //when current element is greater than

  //the largest element

       if(a[i]>largest){

           second_largest=largest;

           largest=a[i];

       }

  //When current element is less than

  //largest element but greater than second largest element

  else if(a[i] < largest && a[i] > second_largest){

           second_largest=a[i];

       }

   }

   

   cout<<second_largest<<endl;

   return 0;

}
