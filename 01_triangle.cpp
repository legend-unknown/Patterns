#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int temp = 0;
  for (int i = 0; i < n;i++)
  {
        if(i%2==0)
        {
            temp = 1;
        }
        else
        {
            temp = 0;
        }
      for (int j = 0; j <= i;j++)
      {
          cout << temp << " ";
          temp = !temp;
      }
      cout << endl;
  }
      return 0;
}
