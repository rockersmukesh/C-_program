// print factorial of given number
#include<iostream>
using namespace std;
int main()
{
    int i=1,fact=1,n;
    cout<<"Enter a Number: ";
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}
