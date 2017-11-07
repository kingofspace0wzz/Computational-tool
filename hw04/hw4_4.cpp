#include <iostream>
#include <cmath>

using namespace std;

const int cols = 4;

double* crs(double x[][cols], int rows){
	// Args: two-dimensional array, rows and cols
	// Returns: Val array, col_ind array, row_ptr array
	int non = 0;
	int count = 0;
	bool in = false;
	int b = 0;
	double* row_ptr = new double[rows+1];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (x[i][j] != 0)
			{
				non++;	
			}
		}
	}
	double val[] = new double[non];
	double* col_ind = new double[non];
	for (int i = 0; i < rows; ++i)
	{
		in = true;
		for (int j = 0; j < cols; ++j)
		{
			if (x[i][j] != 0)
			{	
				if (in == 1)
				{
					row_ptr[b] = count;
					b++;
				}
				val[count] = x[i][j];
				col_ind[count] = j;
				count++;
				in = false;
			}
		}
	}
	row_ptr[rows] = non+1;
	double* pointer = new double[3];
	pointer[0] = val;
	pointer[1] = col_ind;
	pointer[2] = row_ptr;
	return pointer;
}

int main(){
	double x[4][4] = {{1,0,0,1},
					  {0,0,0,1},
					  {0,0,1,0},
					  {0,1,1,1}};
	double* c = crs(x, 4);

}