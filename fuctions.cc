#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

// * Modular/Procedural Programming

int add(int a,int b)	//pass by value
{
	int c;
	c = a + b;
	return(c);


}

void swap(int *a,int *b)	//pass by addresss
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp; 


}


void newswap(int &a,int &b)		//pass by reference
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}



void func(int A[],int n)		//Pass Array As A Parameter
{
	A[0] = 25;
	
}

int * func1(int n)
{
	int *p;
	p = new int[n];

	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;
	return p;


}



int main()
{
	int x = 10;
	int y = 20,z;

	z = add(x,y);				//pass by value

	cout << z << endl;


	newswap(x,y);					//pass by reference
	cout << x << endl;
	cout << y << endl;


	swap(&x,&y);					//pass by addresss

	cout << x << endl;
	cout << y << endl;



	int A[5] = {2,4,6,8,10};
	func(A,5);

	for(int i = 0; i < 5 ; i++)
	{
		cout << A[i] << endl;


	}
	cout << "--------------"<<endl;
	int *B;
	B = func1(5);

	for(int i = 0 ;i < 5 ; i++)
	{
		cout << B[i] << endl;
	}


	return 0;
}

