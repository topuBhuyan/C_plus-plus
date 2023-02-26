#include<iostream>
using namespace std;

int main()
{
    FILE *output_file;

    output_file = fopen("a.txt", "w");

    char input[80];

    gets(input);

    fputs(input, output_file);

    return 0;
}
