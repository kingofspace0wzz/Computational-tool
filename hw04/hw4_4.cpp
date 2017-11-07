#include <iostream>
#include <cmath>

using namespace std;



int main(){
	double x[4][4] = {{1,0,0,1},
					  {0,0,0,1},
					  {0,0,1,0},
					  {0,1,1,1}};
	int non = 0;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (x[i][j] != 0)
			{
				non++;
			}
		}
	}

	int val_col[2][non];	// val_col is a matrix that stores nonzero values in the first row
							// and stores the column index of nonzero values in the second row
	
	int row_id[4];	// Stores the indexs of first nonzero value each row in val_col


	int k = 0;


	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (x[i][j] != 0)
			{
				val_col[0][k] = x[i][j];
				val_col[1][k] = j;
				k++;
			}
		}
	}
	non = 0;
	int count = 0;
	bool in = false;
	for (int i = 0; i < 4; ++i)
	{
		in = true;
		for (int j = 0; j < 4; ++j)
		{
			if (in)
			{
				if (x[i][j] != 0)
				{
					row_id[count] = non;
					count++;
					in = false;	
				}
				
			}
			non++;
		}
	}


	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < non; ++j)
		{
			cout << val_col[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 4; ++i)
	{
		cout << row_id[i] << " ";
	}

}