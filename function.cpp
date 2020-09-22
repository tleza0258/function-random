#include <iostream>
#include <time.h>
using namespace std;
int guessnum(int);
int main()
{	int round,num;
cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen"<<endl;
	srand(time(NULL));
	round=1+rand()%10;
	int Round=guessnum(round);
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<round<<endl;
	cout<<"Your made "<<Round<<" guess"<<endl;
	return 0;
}
int guessnum(int num)
{	int guessnum,Round;
	Round=0;
	do{	cout<<"Guess the number (1-10):";
		cin>>guessnum;
		if(guessnum<num){
			cout<<"The secret num is lower"<<endl;}
		else if(guessnum>num){
			cout<<"The secret num is higher"<<endl;}
		Round++;
	}while(guessnum!=num);
	return (Round);
}