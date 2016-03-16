#include <iostream>
using namespace std;

class Counter
{
public:
	Counter obj();
	int c1 = 0;
	int c2;
	int stop1 = 0;
	int incr, decr;

	Counter(){

	}

	Counter(int val)
	{
		incr = val;
	}

	Counter& operator+(Counter& inc)
	{
		Counter in;
		in.c1 += 20;
		return in;
	}

	Counter& operator-(Counter& inc)
	{
		Counter in;
		in.c1 -= 20;
		return in;
	}


	void stop(int val)
	{
		if (c1 == 0)
		{
			stop1 = 255;
		}
		if (c1 == 20)
		{
			stop1 = 210;
		}

	}

	void start()
	{

		for (int i = 0; i <stop1; i++)
		{
			c1 = c1 + incr;
			if (c1 == 20)
			{
				c2 = 20;
			}
		}
		cout << "Stopped at: " << c1 << endl;
		stop(c2);
		for (int j = 0; j < 210; j++)
		{
			c2 = c2 + incr;
		}
		cout << "Stopped at: " << c2 << endl;
	}//Counting from 20



};//Class

void main()
{
	Counter obj;
	int in;
	cout << "Please enter increment to count in: " << endl;
	cin >> in;
}
