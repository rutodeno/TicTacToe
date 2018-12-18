
/*
This is the main file for the code. As we are just starting out, all our code will be within this file.
The bif goal for this project is to create a TicTacToe program in C.
The simplified objective for today is to create an application that will take numbers between 1 and 9 to fill an 3X3 array.
Once this is accomplished, we can move into enabling two(2) users.
*/

#include <stdio.h>
#include <stdbool.h>

void printTicTacToe(int x, int y, int array[3][3]);
int replaceValue(int userValue, int array[3][3]);


int main()
{
	int x = 0;
	int y = 0;
	int counter = 1;
	int user_1, user_2;
	bool gameplay = false;
	
	int tictac_array[3][3];

	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			tictac_array[y][x] = counter++;
		}
	}

	printf("////////////////////////////////////////////////////////////////////////////\n");
	printf("////////////////////////////////////////////////////////////////////////////\n");
	printf("////////////////////////////////////////////////////////////////////////////\n");
	printf("This is a TicTacToe Game. To start, using the keypad, select the number to point to where you want to play\n");
	printf("For example, entering 9 will place X on box 9 of the matrix.\n");
	printf("\n");

	while(!gameplay) // while the game is not over
	{
		
		//printTicTacToe(x, y, tictac_array);

		printf("User 1, play enter your selection: \n");
		scanf_s("%d", &user_1);
		printf("User 1 entered %d \n", user_1);
		int newarray = replaceValue(user_1, tictac_array);
		printTicTacToe(x, y, newarray);



		/*
		printf("User 2, please enter your selection: \n");
		scanf_s("%d", &user_2);
		printf("User 2 entered %d \n", user_2);
		*/
		gameplay = true;
	}
	
	system("pause");
	return 0;
}

void printTicTacToe(int x, int y, int array[3][3])
{
	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			printf("[%c]", array[y][x]);
		}
		printf("\n");
	}

}
int replaceValue(int userValue, int array[3][3])
{
	switch (userValue)
	{
		case 1 :
			array[0][0] =  char X;
			break;
		case 2:
			array[0][1] = 'X';
			break;
		case 3:
			array[0][2] = 'X';
			break;
		case 4:
			array[1][0] = 'X';
			break;
		case 5:
			array[1][1] = 'X';
			break;
		case 6:
			array[1][2] = 'X';
			break;
		case 7:
			array[2][0] = 'X';
			break;
		case 8:
			array[2][1] = 'X';
			break;
		case 9:
			array[2][2] = 'X';
			break;
		default:
			printf("Please enter a valid input");
	}

	return array[3][3];
}