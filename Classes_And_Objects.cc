#include<iostream>
using namespace std;

class Rectangle
{


private:
	int length;
	int breadth;


public:
	Rectangle()
	{
		length = 0;
		breadth = 0;

	}


	Rectangle(int l,int b)
	{
		length = l;
		breadth = b;		

	}

	int area()
	{
		return length*breadth;
	}

	int perimeter()
	{
		return 2*(length+breadth);
	}


	int getlength()
	{
		return length;
	}

	void setlength(int l)
	{
		length = l;
	}


	int getbreadth()
	{
		return breadth;
	}

	void setbreadth(int b)
	{
		breadth = b;
	} 


	~Rectangle()
	{
		cout << "Destructor" << endl;
	}


};




int main()
{
	Rectangle r(10,5);

	cout << "Area " << r.area() << endl;
	cout << "Perimeter " << r.perimeter() << endl;



}