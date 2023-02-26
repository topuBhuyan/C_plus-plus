#include<iostream>
using namespace std;

int main()
{
    FILE *input_file, output_file;

    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");

    int a,b,sum;

    fcin>>input_file<<a<<b;
    sum = a+b;

    fcout<<output_file, "The sum is: "<<sum;

    fclose(input_file);
    fclose(output_file);
}
