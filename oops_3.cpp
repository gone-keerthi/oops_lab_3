#include<iostream>
using namespace std;
class power
{
    private:
    double m;
    int n=2;
    double result=1;
    public:
    power()
    {
        while(m!=0)
        {
            result=result*m;
        }
    }
    void pow()
    {
        cout<<"the power is: "<<(result=result*m);
    }
};
int main()
{
   power pow;
   int x=3;
   int y=5;
   cout<<power(x,y);
   return 0;
}

     

