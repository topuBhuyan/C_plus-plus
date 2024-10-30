#include<bits/stdc++.h>
using namespace std;

int main(){
	string name = "Topu";
	int age = 21;
	string apple[3] = {"Appl1", "Apple2", "Apple3"};

	string *pName = &name;
	int *pAge = &age;
	string *pApple = apple;

	cout << *pName <<'\n';
	cout << *pAge <<'\n';
	cout << *pApple <<'\n';

	return 0;
}