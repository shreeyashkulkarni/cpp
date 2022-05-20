#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Rectangle
	{
		int length;
		int breadth;
	};



struct Student
{
	int roll;
	char name[25];
	char dept[10];
	char address[50];

};


struct Card
{
	int face;     
	int shape;
	int colour;


};





int main()
{
	
	/*struct Rectangle r;*/   		//declaration
	struct Rectangle r = {10,5}; //declaration + Initialisation

	r.length = 15;
	r.breadth = 10;

	cout << "Area of Rectangle :  " << r.length *r.breadth<<endl;


	struct Student s;

	struct Card deck[52]= { {1,0,1}};

	cout << "" <<deck[0].face<<endl
	;

	int *p,*q,*t,i;
	int a =10;
	p = &a;

	cout << p << endl;
	printf("%d\n",*p);


	q = (int*)malloc(5*sizeof(int));
	t = new int[5];
	cout << "--------------"<<endl;
	for(i=0;i<5;i++)
	{
		cout << t[i] << endl;
	}


	cout << sizeof(p) << endl;


	int a1 = 10,a2 =20;
	int &e1 = a1; 			//reference

	cout << a1 <<endl;
	e1++;
	cout << a1 << endl;
	cout << e1 << endl;

	e1 = a2;
	cout << a1 << endl;

	delete [] t;
	free(q);

	return 0;
}