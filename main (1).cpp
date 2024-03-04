#include <iostream>
using namespace std;
// void printname(string name){
//   for (int i=0;i<5;i++){
//     cout<<name<<endl;
//   };
// }
void printline(){
  for (int i=0;i<10;i++){
    cout<<"Printing line 10 times"<<endl;
  }
}
void AddNumber(int a,int b,int c){
 
  int sum=a+b+c;
 cout<<"sum is "<<sum<<endl;
}
int printsum(int a,int b,int c){
  int ans=a+b+c;
  return ans;
}
//return in void
void printing(){
  cout<<"Message 1"<<endl;
  
  cout<<"Message 2"<<endl;
  return;
}
void printmaximum(int num1 ,int num2,int num3){
  if (num1>=num2 && num1> num3){
    cout<<"Maximum is"<< num1<<endl;
  }
 else if(num2 > num1 && num2> num3) {
    cout<<"Maximum is "<<num2<< endl;
 }
else {
  cout<< " Maximum is "<< num3<<endl;
}
  
}
//using predifined function stl
void max1(int n1, int n2,int n3){
  int ans1=max(n1,n2);
  int final = max(ans1,n3);
  cout<<"Maximum is "<<final<<endl;
}
void printcounting (int n){
  for(int i=1;i<=n;i++){
    cout<<i<<endl;
  }
}
void checkeven(int n){
  if (n%2==0){
    cout<<" is even"<<endl;
  }
  else {
    cout<<"is odd"<<endl;
  }
}
void findsum(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    sum=sum+i;
  }
  cout<< "finalsum is "<< sum<< endl;
}
void findsumofeven(int n){
  int sum=0;
  for(int i=2;i<=n;i=i+2){
    sum=sum+i;
  }
  cout<< "finalsum is "<< sum<< endl;
}
//return true if prime
bool checkprime(int n){
  for  (int i=2;i<n;i++){
    if(n%i==0){
      return false;
    }
    
  }
  
  return true;
}
int main() {
 // printname("Rat");
 //  printname("bat");
 //  printname("cat");
 // printline();
 
  //AddNumber(5,6,9);
 //int sum = printsum(4,5,9);
 // cout<<"sum is "<<sum<<endl;
 // printing();
  //printmaximum(400,8,10);
  //max1(5, 51, 50);
  //printcounting(10);
  //checkeven(110);
 // findsum(10);
  //findsumofeven(10);
  bool prime=checkprime(2);
  if(prime){
    cout<<"is a prime number"<<endl;
  }
  else{
    cout<<"is not a prime number"<<endl;
  }
}