//C++ Language

#include <iostream>
using namespace std;

int main()
{
	int oddNumber = 11;
	bool check = false;

	if (oddNumber % 2 == 1)
		check = true;

	if (check)
	{
		//printing the first line
		for (int i = 1; i <= oddNumber; i++)
		{
			cout << "*\t";
		}
		cout << "\n";

		int space1 = 1;
		
		int oddNumberU = oddNumber - 1;
		int middleSpace;
		int space2;

		do
		{

			for (int i = 1; i <= space1; i++)
			{
				cout << "\t";
			}
			cout << "*";

			middleSpace = oddNumberU - 2;

			if (middleSpace != 0)
			{
				for (int i = 1; i <= middleSpace; i++)
				{
					cout<<"\t";
				}
				cout << "*";
			}

			cout << "\n";
			space1++;
			oddNumberU = middleSpace;
			space2 = space1; //6

		} while (middleSpace != 0);

		space2 = space2 - 2; //4

		middleSpace = 2;
		int lineNo = oddNumber/2;

		do
		{
			for (int i = 1; i <= space2; i++)
			{
				cout << "\t";
			}

			if (space2 != 0)
				cout << "*";

			if (middleSpace <= (oddNumber - 3))
			{
				for (int i = 1; i <= middleSpace; i++)
				{
					cout << "\t";
				}
				cout << "*";
				cout << "\n";
			}

			middleSpace = middleSpace + 2;
			space2--;

			--lineNo;

		} while (lineNo != 0);

		for (int i = 1; i <= oddNumber; i++)
		{
			cout << "*\t";
		}
	}


	

}
