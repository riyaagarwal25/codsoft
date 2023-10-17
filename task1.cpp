#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	cout<<"NUMBER GUESSING GAME"<<endl;
	srand((unsigned int)time(NULL));
	int number=(rand()%100)+1;
	int guess;
	do
	{
		cout<<"Guess a number between 1 to 100";
		cin>>guess;
		if(guess>number)
			cout<<"Too high"<<endl;
		else if(guess<number)
			cout<<"Too low"<<endl;
		else
			cout<<"You won"<<endl;
	}
	while(guess!=number);
	return 0;
}
