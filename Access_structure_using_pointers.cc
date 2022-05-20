#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle r = {10,5};
	struct Rectangle *p = &r;

	cout << p->length << endl;
	cout << p->breadth << endl;	

	//Dynamic memory allocation
	struct Rectangle *q;
	q = new Rectangle;

	q -> length = 10;
	q -> breadth = 20;

	cout << q ->length << endl;
	cout << q ->breadth << endl;


	return 0;
}