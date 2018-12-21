
/*
This is the main file for the code. As we are just starting out, all our code will be within this file.
The bif goal for this project is to create a TicTacToe program in C.
The simplified objective for today is to create an application that will take numbers between 1 and 9 to fill an 3X3 array.
Once this is accomplished, we can move into enabling two(2) users.
*/

#include <stdio.h>
#include <stdbool.h>

char inputSelection(int userNumber);
char replaceValue(char user, char userValue, char array[3][3]);


int main()
{
	int x = 0;
	int y = 0;
	char userInput1;
	char userInput2;
	int counter = 0;
	bool user_1 = false;
	bool user_2 = false;
	bool gameplay = false;
	
	char tictac_array[3][3] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

	// printing out the double array
	printf("User 1 (X)   User 2 (O) \n");
	printf("\n");

	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			printf("[%c]", tictac_array[y][x]);
		}
		printf("\n");
	}

	printf("\n");

	while (counter < 9) 
	{
		user_1 = true;
		if (user_1 && !user_2) 
		{
			char user = 'X';
			userInput1 = inputSelection(1);
			//printf("User 1 selected: %c\n", userInput1);
			replaceValue(user, userInput1, tictac_array[3][3]);
			user_2 = true;
			user_1 = false;

			
		} else
		{
			char user = 'O';
			userInput2 = inputSelection(2);
			//printf("User 2 selected: %c\n", userInput2);
			replaceValue(user, userInput2, tictac_array[3][3]);
			user_1 = true;
			user_2 = false;
		}
		counter++;
	}

	printf("DRAW !! Game Over! \n");
	system("pause");
	return 0;
}

char inputSelection(int userNumber)
{	
	char line[10];
	char userInput;
	printf("\rUser %d please enter your selection: ", userNumber);
	fflush( stdout );
	Sleep(1);
	fgets(line,sizeof(line), stdin);
	sscanf_s(line, " %c", &userInput);
	return  userInput;
}


char replaceValue(char user, char userValue, char array[3][3])
{
	
	switch (userValue)
	{
		case 'a' :
			array[0][0] = user;
			break;
		case 'b' :
			array[0][1] = user;
			break;
		case 'c':
			array[0][2] = user;
			break;
		case 'd':
			array[1][0] = user;
			break;
		case 'e':
			array[1][1] = user;
			break;
		case 'f':
			array[1][2] = user;
			break;
		case 'g':
			array[2][0] = user;
			break;
		case 'h':
			array[2][1] = user;
			break;
		case 'i':
			array[2][2] = user;
			break;
		default:
			printf("Please enter a valid input");
	}

	return array[3][3];
}