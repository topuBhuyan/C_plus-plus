#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	string food = "pizza"; // food variable type of string

	cout << food <<'\n';	// output of value of food (pizza)
	cout << &food;	// output of memory address of food (pizza)
*/
	string food = "pizza";
	string* ptr = &food;	// a pointer variable, with the name ptr, thtat store address of food

	cout << food <<'\n';  // output the value of food
	cout << &food <<'\n'; // output the address of food

	cout << ptr <<'\n';  // output of the memory address of food


	return 0;
}