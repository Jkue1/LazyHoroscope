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
  return 0;
}
