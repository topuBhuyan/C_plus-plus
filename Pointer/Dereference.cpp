#include<bits/stdc++.h>
using namespace std;

int main(){
	string food = "pizza"; // variable decleartion
	string* ptr = &food;   // pointer decleartion

	cout << ptr <<'\n';  // output the memory address of food with the pointer
	cout << *ptr <<'\n'; // output the value of food with pointer

	
	return 0;
}