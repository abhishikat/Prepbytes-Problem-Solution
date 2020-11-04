/*
 Leap Year or Not

 We all have made fun of our friends who have their birthdays on
 29
 t
 h
 29
 t
 h
  February.
 Given birthday year
 N
 N
  of your friend, can you tell her if that is leap year or not?

 Input format

 The first line constains an integer
 T
 T
  denoting the number of test cases.
 Each test case contains one integer
 N
 N
 .

 Output format

 For each test case on a new line, print Yes if the given year is a leap year else print No.

 Constraints

 1
 <=
 T
 <=
 10
 1
 <=
 T
 <=
 10

 1
 <=
 N
 <=
 2500
 1
 <=
 N
 <=
 2500

 Time Limit

 1
 1
  second

 Example

 Input

 2
 2

 1900
 1900

 2012
 */
// C++ program to check if a given
// year is leap year or not
#include <bits/stdc++.h>
using namespace std;
 
bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;
 
    // Else If a year is muliplt of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
 
    // Else If a year is muliplt of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
 
// Driver code
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    checkYear(n)? cout<<"Yes":cout<<"No";
    cout<<"\n";
  }
    
    return 0;
}
