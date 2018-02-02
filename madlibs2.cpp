//Authour: Ahmad Fajhan
#include  <iostream>
#include <string>

using namespace std;

int main()
{
        string name;
	int age;
	char character;
	string color;

	cout<<"what is the name of the man?\n";
	cin>> name;

	cout<<"what age is the man?\n";
	cin>> age;

	cout<<"provide me with a character used in the story?\n";
	cin>> character;

	cout<<"<what is the color of the car?\n";
	cin>> color;


	cout<<"My friend "<<name<<" bought a car when he was "<<age<<" years old. I asked him what color did you get"<<character<<" he told me the color was "<<color<<"\n";


	return 0;

}
