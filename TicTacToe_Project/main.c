
/*
This is the main file for the code. As we are just starting out, all our code will be within this file.
The bif goal for this project is to create a TicTacToe program in C.
The simplified objective for today is to create an application that will take numbers between 1 and 9 to fill an 3X3 array.
Once this is accomplished, we can move into enabling two(2) users.
*/

#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;
	int tictac_array[3][3];

	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			tictac_array[y][x] = x + y;
		}
	}
	printf("Array Indices:\n");
	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			printf("[%d]", tictac_array[y][x]);
		}
		printf("\n");
	}
	getchar();
	return 0;
}