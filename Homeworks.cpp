/*
 * Shape Examples
 * by Yusuf Özkan
 *
 */

#include <iostream>

using namespace std;

void duzUcgen(int n); // declaring functions
void tersUcgen(int n);
void elmas(int n);

int main()
{
	int x, ctrl = 0; // variables to selection and exit program

	while (ctrl == 0) // loop for choice screen
	{
		cout << "Selection Screen" << endl << endl;
		cout << "Press 1 to Straight Triangle" << endl;
		cout << "Press 2 to Reverse Triangle" << endl;
		cout << "Press 3 to Diamond" << endl;
		cout << "Press 0 to Exit" << endl << endl;

		cin >> x; // user selection number

		switch (x) // works according to the condition
		{
		case 1: // if user select straight triangle
		{
			int err = 0;
			int size1;

			label:   // to check errors

			cout << "Enter a size of triangle between 3 and 15 odd integer number:";
			cin >> size1;
			cout << endl;

			if (size1 >= 3 && size1 <= 15 && size1 % 2 == 1)
			{
				duzUcgen(size1); // calling functions to print shape
			}
			else if (err < 2)
			{
				err++; // to count incorrect entry 
				goto label;
			}
			else
			{
				cout << "You entered incorrectly 3 times !! \a" << endl <<endl ;
				break;
			}

			break; 
		}
		case 2: // if user select reverse triangle
		{
			int err1 = 0;
			int size2;

			label1:   // to check errors

			cout << "Enter a size of triangle between 3 and 15 odd integer number:";
			cin >> size2;
			cout << endl;

			if (size2 >= 3 && size2 <= 15 && size2 % 2 == 1)
			{
				tersUcgen(size2); // calling functions to print shape
			}
			else if (err1 < 2)
			{
				err1++; // to count incorrect entry 
				goto label1;
			}
			else
			{
				cout << "You entered incorrectly 3 times !! \a" << endl << endl;
				break;
			}
			break;
		}
		case 3: // if user select diamond
		{
			int err2 = 0;
			int size3;

		label2:   // to check errors

			cout << "Enter a size of triangle between 3 and 15 odd integer number:";
			cin >> size3;
			cout << endl;

			if (size3 >= 5 && size3 <= 15 && size3 % 2 == 1)
			{
				elmas(size3); 
			}
			else if (err2 < 2)
			{
				err2++; // to count incorrect entry 
				goto label2;
			}
			else
			{
				cout << "You entered incorrectly 3 times !! \a" << endl << endl;
				break;
			}

			break;
		}
		case 0:
			ctrl = 1;
			break;
		}

	}

	return 58;
}

void duzUcgen(int n)
{
	// number of spaces 
	int k = 2 * n - 2;

	for (int i = 0; i < n; i++) // rows
	{
		for (int j = 0; j < k; j++) //spaces
			cout << " ";

		k = k - 1;

		for (int j = 0; j <= i; j++) //stars
		{
			cout << "* ";
		}
		cout << endl;
	}
}



void tersUcgen(int n) // prints reverse triangle without for loop
{
	int k = n-1;
	int i = n;

	while(i>=0)	
	{
		int j = 0;

		while (j < k)  //prints spaces
		{
			cout << " ";
			j++;
		}
	
		k = k + 1;
		int l = i;

		while(l>0) // prints stars
		{
		    cout << "* ";
			l--;
		}
		cout << endl;
		i--;
	}
}


void elmas(int n) // functions were called in order for print diamond
{
	duzUcgen(n);
	tersUcgen(n);
}
