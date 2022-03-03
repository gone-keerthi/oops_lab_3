//effect of default arguments can be achieved by overloading functions
#include<iostream>
#include<conio.h>
using namespace std;

void multiplication(int,int,int); //function declaration with three arguments
int main()
{
    multiplication(15,21); //taking input for one two arguments function
    multiplication(17,14,23);  //taking input for one three arguments function
    return 0;
    getchar();
}
//driver code:
void multiplication(int x, int y)
{
cout<<"the multiplication of x*y= "<<(x*y)<<endl;
}
void multiplication(int x, int y, int z)
{
cout<<"the multiplication of x*y*z= "<<(x*y*z)<<endl;
}