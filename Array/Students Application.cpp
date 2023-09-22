#include<iostream>
using namespace std;

int main()
{
  int userInput, sum = 0;
  cout << "Enter Numbers of Students : ";
  cin >> userInput;

  int Students [userInput];
  for(int i = 0; i<userInput; i++)
  {
    cout << "Marks of Students : " << i+1 << " = " ;
    cin >> Students[i];
    sum = sum+Students[i];
  }
  cout << "Total Number " << sum <<endl;

  float Average = (float) sum/userInput;
  cout << "Average " << Average <<endl;

  int max = Students[0];
  int min = Students[0];

  for(int i = 1; i<userInput; i++)
  {
    if(max < Students[i])
    {
      max = Students[i];
    }
    if(min > Students[i])
    {
      min = Students[i];
    }
  }
  cout << "Maximum Number : " << max << endl;
  cout << "Minimum Number : " << min;

  return 0;
}
