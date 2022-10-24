/*
Problem Statement Link->
https://leetcode.com/problems/palindrome-number/
*/

#include<iostream>
using namespace std;

bool isNumberPalindrome(int x)
{
    if(x < 0 || (x % 10 == 0 && x != 0))
        return false;
    else
    {
        int reverseNum = 0;
        while(x > reverseNum)
        {
            reverseNum = reverseNum * 10 + x % 10;
            x = x / 10;
        }
        if(x == reverseNum || x == reverseNum / 10)
            return true;
        else
            return false;
    }
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(isNumberPalindrome(number))
        cout<<number<<" is a palindrome number."<<endl;
    else
        cout<<number<<" is not a palindrome number."<<endl;
    return 0;
}
