//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
string first, last; //declare variables


cout << "What is your first name?\n";

cin >> first;  //get user input
cout << "What is your last name?\n";
cin >> last; 

cout << "Welcome, " <<first[0]<<"."<<last[0]<<"." ", here is your fortune...\n";

int lucky = first.length()+last.length(); 
cout<<"your lucky number is " <<lucky<<endl;//tell fortune




if (first[0] == 'a'|| first[0] == 'e'|| first[0] == 'i' || first[0] == 'o'|| first[0] == 'u' || first[0] == 'A' || first[0] == 'E' || first[0] == 'I'|| first[0] == 'O' || first[0] == 'U')

{cout << "you are destined to be famous!\n";}


else

{cout << "you should keep a low profile.\n";}


int len = last.length();
char lst = last[len-1];
if (lst == 'a' || lst == 'e'|| lst == 'i'|| lst == 'o' || lst == 'u' || lst == 'A' || lst == 'E' || lst == 'I' || lst == 'O' || lst == 'U')
{cout << "you have already met your true love.\n";}

cout << "have a good day!\n";



  return 0;
}
