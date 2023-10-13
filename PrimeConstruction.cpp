#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{
  if(n<=1) 
    return false;
  for (int i=2; i*i<=n; i++) 
  {
    if(n%i==0) 
      return false;
  }
  return true;
}

int main() 
{
  int a[1000001], n=0, mul=1;
  while(cin>>a[n]) 
  {
    if(cin.get()=='\n') 
      break;
    n++;
  }

  int q=*min_element(a, a + n);
  for (int i=0; i<n; i++) 
    mul*=a[i];

  int value=mul+q;
  int value1;
  bool status=false;
  for (int i=0; i<n; i++) 
  {
    if (a[i]!=q && value%a[i]==0) 
    {
      status = true;
      break;
    } 
    else
      continue;
  }
  if (status) 
    cout<<"None";
  else
  {
    if (isPrime(value))
      cout<<value;
    else
      cout<<"None";
  }
}
