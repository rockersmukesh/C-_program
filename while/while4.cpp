// print factorial of 5
#include<iostream>
using namespace std;

int main()
{
    int fact = 1, i = 5;

    while(i>=1)
    {
        fact = fact * i;
        i--;
    }
    cout << "Factorial of 5 is: " << fact << endl;

}
