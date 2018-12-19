
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
	printTicTacToe(x, y, tictac_array); // print array


	while(!gameplay) // while the game is not over
	{
		printf("User 1, play enter your selection: \n");
		scanf_s("%d", &user_1);
		printf("User 1 entered %d \n", user_1);
		replaceValue("user1", user_1, tictac_array);
		printTicTacToe(x, y, tictac_array);

		
		printf("User 2, please enter your selection: \n");
		scanf_s("%d", &user_2);
		printf("User 2 entered %d \n", user_2);
		replaceValue("user2", user_2, tictac_array);
		printTicTacToe(x, y, tictac_array);

		//gameplay = true;
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
			printf("[%d]", array[y][x]);
		}
		printf("\n");
	}

}


int replaceValue(char user[], int userValue, int array[3][3])
{
	int initial;

	if (user == "user1")
	{
		initial = 0;
	}
	else if (user == "user2")
	{
		initial = 1;
	}
	
	switch (userValue)
	{
		case 1 :
			array[0][0] =   initial;
			break;
		case 2:
			array[0][1] = initial;
			break;
		case 3:
			array[0][2] = initial;
			break;
		case 4:
			array[1][0] = initial;
			break;
		case 5:
			array[1][1] = initial;
			break;
		case 6:
			array[1][2] = initial;
			break;
		case 7:
			array[2][0] = initial;
			break;
		case 8:
			array[2][1] = initial;
			break;
		case 9:
			array[2][2] = initial;
			break;
		default:
			printf("Please enter a valid input");
	}

	return array[3][3];
}