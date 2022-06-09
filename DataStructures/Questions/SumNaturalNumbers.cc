#include<iostream>
#include<stdio.h>
using namespace std;

/*int sum(int n)              //My way
{
	static int x;
	if(n > 0)
	{
		sum(n - 1);
		x = x + n;

	}

	return x;


}*/



int sum(int n)
{
	if(n == 0)
	return 0;
	else
	return sum(n - 1) + n;
	



}





int main()
{
	 int mysum =0,k = 0;

	 cin >> k;

	 mysum = sum(k);



	 cout << mysum << endl;

	return 0;
}