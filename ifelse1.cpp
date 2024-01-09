#include<iostream>
using namespace std;

// check whther the number is even or odd
int main()
{
    int num;
    cout << "Pls enter a number: ";
    cin >> num;

    if(num%2==0)
    {
        cout << "Number is even \n";
    }
    else
    {
        cout << "Number is odd\n";
    }
}
