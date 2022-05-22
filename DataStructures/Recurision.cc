#include<stdio.h>
#include<iostream>
using namespace std;

void Reverseorder(int n)
{
	if(n > 0)
	{
		cout << n << " " ;
		Reverseorder(n-1);

	}

	

}


void Straightorder(int n)
{
	if(n>0)
	{
		Straightorder(n - 1);
		cout << n << " ";

	}



}




int main()
{
	int n1;

	cin >> n1;
	Reverseorder(n1);


	cout <<endl<< "==================" << endl;

	Straightorder(n1);






	return 0;
}