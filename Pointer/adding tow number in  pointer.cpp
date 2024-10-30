#include<bits/stdc++.h>
using namespace std;

int main(){
	int number1 = 5, number2 = 10;

	int *p1, *p2;

	p1 = &number1; p2 = &number2;

	int sum = *p1 + *p2;
	cout << sum <<endl;


	return 0;
}