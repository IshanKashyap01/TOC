#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string bin;
  cout<<endl;
  cout << "\tDesign A Program For Creating Machine That Accepts Three Consecutive Ones\n";
  cout<<"Enter Any Binary Number : ";
  cin>> bin;
  int size = bin.size ();
  if (bin[size - 1] == '1' && bin[size - 2] == '1' && bin[size - 3] == '1')
  {
      cout<< "Accepted!!! The Last 3 Digits Is Three Consecutive One's\n";
  }
  else
  {
      cout<< "Failed!!! The Last 3 Binary Number Isn't Three Conseucutive One's\n";
  }
  return 0;
}
