// Assign-One.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
# include<stdlib.h>

using namespace std;


int main()
{
	system("COLOR F0");

	int r, ft = 50, q = 0;
	int tt = 20, q1 = 0;
	int t = 10, q2 = 0;
	int fi = 5, q3 = 0;
	int o = 1, q4 = 0;
	char a;
	int ma = 0;
	int mi = 0;
	cout << "Please enter withdrwal amount -->";
	cin >> ma;
	if (ma > 300)
	{
		cout << "Sorry the max amount you can withdraw is $300.00" << endl << endl;
	}
	cout << "Please enter withdrwal amount -->";
	cin >> mi;

	if (mi <= 0)
	{

		cout << "Sorry the min amount you can withdraw is $1.00" << endl << endl;

	}
	
		do {


			q = 0; q1 = 0; q2 = 0; q3 = 0; q4 = 0;
			cout << "Please enter withdrawal amount-->  ";
			cin >> r;
			while (r >= ft)
			{
				r = r - ft;
				q++;
			}
			if (q != 0) {
				cout << "You have  " << q << "  $50.00 bills" << endl;
			}
			while (r >= tt)
			{
				r = r - tt;
				q1++;

				while (r >= t)
				{
					r = r - t;
				}
				if (q1 != 0) {
					cout << "You have  " << q1 << "  $20.00 bills" << endl;

				}
				q2++;

			}
			if (q2 != 0) {
				cout << "You have  " << q2 << "  $10.00 bills" << endl;
			}
			while (r >= fi)
			{
				r = r - fi;
				q3++;

			}
			if (q3 != 0) {
				cout << "You have  " << q3 << "  $5.00 bills" << endl;
			}
			while (r >= o)
			{
				r = r - o;
				q4++;

			}
			if (q4 != 0) {
				cout << "You have  " << q4 << "  $1.00 bills" << endl;
			}

			cout << endl;
			cout << "Do you want to continue? -->  ";
			cin >> a;



		} while ((a == 'Y') || (a == 'y'));

		system("pause");

		return 0;
	}


