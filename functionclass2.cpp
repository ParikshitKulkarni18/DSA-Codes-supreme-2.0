#include <iostream>
#include<math.h>
using namespace std;


float areaofcircle(float r){

  float area = 3.14*r*r;
  return area;
  
}
bool evennumber(int n){
 
  if(/*n%2==0*/(n&1)==0){
   return true;
  }
  else{
    return false;
  }
  return n;
}
// long long int is used to store large numbers
// for storing more large number we have to use string 
long long int fact(long long  int n){
  long long int fact = 1;
  for (int i=15;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}

//for optimise we can use it till sqrt (n) 
// and for simple or basic used it till n-1 in for loop
bool  prime(int n){
 for(int i=2;i<(n-1);i++){
   if (n%i==0){
     return false;
   }
 }
 
   return true;
 }
 


int main() {

  // float r;
  // cin>>r;
  // float area = areaofcircle(r);

  // cout<< "Area of circle is : "<<area<<endl;
  // int n;
  // cin>> n;
  // bool isevennumber = evennumber(n);
  // //int number= evennumber(n);
  // // cout<<evennumber(n)<<endl;

  // if(isevennumber){
  //   cout<<n <<" : "<<"Even number"<<endl;
  // }
  // else{
  //   cout<<n<<" : "<<"Odd number"<<endl;
  // }

 int n;
  cin>>n;
// long long  int ans = fact(n);
//  cout<<"Factorial of "<<n<<"is "<<ans<<endl;
  // bool isprime=prime(n);
  // if(isprime){
  //   cout<<n<<" : "<<"Prime number"<<endl;
  // }
  // else{
  //   cout<<n<<" : "<<"NOT a Prime "<<endl;
  // }
  for (int i=2;i<=n;i++){
    bool isiprime = prime(i);
    if(isiprime){
      cout<<i<<" ";
    }
  }
 }