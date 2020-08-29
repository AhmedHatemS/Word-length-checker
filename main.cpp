#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    char x[100];
    cout<<"Enter the string to check: ";
    cin>>x;
    char* str = x;
    int counter= 0;
    for (char* ptr = str; *str != '\0'; str++)
    {
        counter++;
    }
    printf("%d",counter);
}
