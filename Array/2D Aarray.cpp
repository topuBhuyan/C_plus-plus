#include<iostream>
using namespace std;


int main()
{
  int Array [2] [3] =

  {
    {10,20,40},
    {50,60,70}
  };

  for(int row = 0; row < 2; row++)
  {
    for(int collum = 0; collum < 3; collum++)
    {
      cout << Array [row] [collum] << " ";
    }
    cout <<endl;
  }

  return 0;
}
