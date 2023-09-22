#include<iostream>
using namespace std;

int main()
{
  int marks[5], Number;


  for(int i =0; i<5; i++)
  {
    cout << "Marks of Student of: " <<i+1 <<" = ";
    cin >> marks [i];
  }

  for(int i =0; i<5; i++)
  {
    cout << marks[i] <<" " ;
  }

  return 0;
}

