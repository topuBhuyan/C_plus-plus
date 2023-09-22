#include<iostream>
using namespace std;

int main()
{
  int Array [2] [3];

  cout <<"Enter the elements : " << endl;

  for(int row =0; row<2; row++)
  {
    for(int collum = 0; collum <3; collum++)
    {
      cout << "A[" <<row <<"][" <<collum << "] = ";
      cin >> Array[row][collum];
    }
  }
  // printing array

   for(int row =0; row<2; row++)
  {
    for(int collum = 0; collum <3; collum++)
    {
      cout << Array[row][collum] << " ";
    }
    cout <<endl;
  }

  return 0;
}
