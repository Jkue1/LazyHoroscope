//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
string first, last; //declare variables


cout << "what is your first name?";

cin >> first;  //get user input
cout << "what is your last name?";
cin >> last; 

cout << "Welcome, " <<first[0]<<"."<<last[0]<<"." ", here is your fortune...\n";

int lucky = first.length()+last.length(); 
cout<<"your lucky number is " <<lucky<<endl;//tell fortune



char frst=first[0];

if (frst == ( 'a', 'e', 'i', 'o', 'u'))
{cout << "you are destined to be famous!\n";}

else

{cout << "you should keep a low profile\n";}


int len=last.length();

if (last[len-1] = ('a' || 'e' || 'i' || 'o' || 'u'))
{cout << "you have already met your true love.\n";}

cout << "have a good day!\n";



  return 0;
}
