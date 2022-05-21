#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Rectangle
{
	int length;
	int breadth;

};


struct test 
{
	int A[5];
	int n;


};


void ChangeLength(struct Rectangle *p,int l)
{
	p -> length = 20;
	p -> breadth = 30;

}



struct Rectangle * fun()
{
	struct Rectangle *p;
	p = new Rectangle;

	p -> length = 15;
	p -> breadth = 7;

	return p;

}




int main()
{
	struct Rectangle r = {10,5};

	ChangeLength(&r,20);

	cout << r.length << endl;
	cout << r.breadth << endl;

	//struct test t = {{2,4,6,8,10},5}
	//fun(t);



	struct Rectangle *ptr = fun();

	cout << "Length "<< ptr->length << endl << "Breadth "<< ptr->breadth <<endl;


	return 0;
}