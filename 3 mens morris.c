#include <stdio.h>
#include <string.h>
int chck(int arr[][3]);
int move_chck(int row_pic, int col_pic, int row_des, int col_des, int arr[][3]);

int main()
{

	char a, b, c, d, e, f, g, h, i, temp;
	int row, col, loop = 1, loop2 = 2, k, l, count = 1, result, move = 0, x, y, temp_num = 34, row_pic, col_pic, row_des, col_des, sgnl;
	char name1[20], name2[20], card1, card2;
	int tic_tac[3][3];
	printf("Enter 1st person's name: ");
	gets(name1);
	printf("choose your card 'X' or 'O' : ");
	scanf("%c", &card1);
	printf("\nEnter 2nd person's name: ");
	gets(name2);
	scanf("%[^\n]s", name2);
	if (card1 == 'X')
	{
		card2 = 'O';
	}
	else
	{
		card2 = 'X';
	}
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			tic_tac[x][y] = 129;
		}
	}

	while (loop > 0)
	{

		if (count <= 5)
		{

		start:
			printf("    .......... 3-GUTI ............ \n");
			printf("       %s :%c \t", name1, card1);
			printf("%s :%c \n", name2, card2);
			printf("    ..............................    \n");
			printf("\n"
				   "   0,0        0,1         0,2\n"
				   "    %c -------- %c -------- %c\n"
				   "    |\\         |         /| \n"
				   "    | \\        |        / | \n"
				   "    |  \\       |       /  | \n"
				   "    |   \\      |      /   | \n"
				   "    |    \\     |     /    | \n"
				   "    |     \\    |    /     | \n"
				   "    |      \\   |   /      | \n"
				   "    |       \\  |  /       | \n"
				   "    |        \\ | /        | \n"
				   "    |      1,1\\|/         | \n"
				   "1,0 %c -------- %c -------- %c 1,2\n"
				   "    |         /|\\         | \n"
				   "    |        / | \\        | \n"
				   "    |       /  |  \\       | \n"
				   "    |      /   |   \\      | \n"
				   "    |     /    |    \\     | \n"
				   "    |    /     |     \\    | \n"
				   "    |   /      |      \\   | \n"
				   "    |  /       |       \\  | \n"
				   "    | /        |        \\ | \n"
				   "    |/         |         \\| \n"
				   "    %c -------- %c -------- %c\n"
				   "   2,0        2,1         2,2 \n",
				   a, b, c, d, e, f, g, h, i);

			printf("Enter your choice: either 'X' or 'O' \n");
			printf("~~~~~~~~~~~~~~~~\n");

			printf("\nchoose the position to fill: \n");
			printf("\nenter row no:");
			scanf("%d", &row);
			printf("\nenter column no:");
			scanf("%d", &col);

			if (row == 0 && col == 0)
			{
				printf("\nchoose either 'X' or 'O' :");
				a = getchar();
				scanf("%c", &a);
				if (a == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (a == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 0 && col == 1)
			{
				printf("\nchoose either 'X' or 'O' :");
				b = getchar();
				scanf("%c", &b);
				if (b == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (b == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 0 && col == 2)
			{
				printf("choose either 'X' or 'O' :");
				c = getchar();
				scanf("%c", &c);

				if (c == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (c == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 1 && col == 0)
			{
				printf("choose either 'X' or 'O' :");
				d = getchar();
				scanf("%c", &d);

				if (d == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (d == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 1 && col == 1)
			{
				printf("choose either 'X' or 'O' :");
				e = getchar();
				scanf("%c", &e);

				if (e == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (e == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 1 && col == 2)
			{
				printf("choose either 'X' or 'O' :");
				f = getchar();
				scanf("%c", &f);

				if (f == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (f == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 2 && col == 0)
			{
				printf("choose either 'X' or 'O' :");
				g = getchar();
				scanf("%c", &g);

				if (g == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (g == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 2 && col == 1)
			{
				printf("choose either 'X' or 'O' :");
				h = getchar();
				scanf("%c", &h);

				if (h == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (h == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else if (row == 2 && col == 2)
			{
				printf("choose either 'X' or 'O' :");
				i = getchar();
				scanf("%c", &i);

				if (i == 'X')
				{
					tic_tac[row][col] = 1;
				}
				else if (i == 'O')
				{
					tic_tac[row][col] = 0;
				}
				else
				{
					tic_tac[row][col] = 12;
				}
				count++;
			}
			else
			{
				printf("\n__ENTER A VALID POSITION !!__ \n");
			}

			if (count == 7)
			{
				goto end;
			}
			else
			{
				// none..
			}
		}

		else if (count > 5 && count < 7)
		{

			result = chck(tic_tac);
			/*if(result<0)
			  {
				 printf("\n......GAME DRAW.......\n");
				 break;


			  }*/
			if (result == 1)
			{
				if (card1 == 'X')
				{
					printf("\n\tWINNER IS:- %s (%c) \n", name1, card1);
					/*for(x=0;x<3;x++)
					  {
						for(y=0;y<3;y++)
						   {
							 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
							}
						printf("\n");
					  }*/

					break;
				}
				else
				{
					printf("\n\tWINNER IS:- %s (%c) \n", name2, card1);

					/*for(x=0;x<3;x++)
					  {
						for(y=0;y<3;y++)
						   {
							 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
							}
						printf("\n");
					  }*/
					break;
				}
			}
			else if (result == 0)
			{
				if (card1 == 'O')
				{
					printf("\n\tWINNER IS:- %s (%c) \n", name1, card1);

					/*for(x=0;x<3;x++)
					  {
						for(y=0;y<3;y++)
						   {
							 printf("%d \t",tic_tac[x][y]);  //FOR OPERATION INSIDE THE MATRIX
							}
						printf("\n");
					  }*/
					break;
				}
				else
				{
					printf("\n\tWINNER IS:- %s (%c) \n", name2, card1);

					/*for(x=0;x<3;x++)
					  {
						for(y=0;y<3;y++)
						   {
							 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
							}
						printf("\n");
					  }*/
					break;
				}
			}
			else
			{
				goto start;
			}
		}

		else
		{
			while (loop2 > 0)
			{

			end:
				printf("    ........... 3-GUTI ........... \n");
				printf("       %s :%c \t", name1, card1);
				printf("%s :%c \n", name2, card2);
				printf("    ..............................    \n");
				printf("\n"
					   "   0,0        0,1         0,2\n"
					   "    %c -------- %c -------- %c\n"
					   "    |\\         |         /| \n"
					   "    | \\        |        / | \n"
					   "    |  \\       |       /  | \n"
					   "    |   \\      |      /   | \n"
					   "    |    \\     |     /    | \n"
					   "    |     \\    |    /     | \n"
					   "    |      \\   |   /      | \n"
					   "    |       \\  |  /       | \n"
					   "    |        \\ | /        | \n"
					   "    |      1,1\\|/         | \n"
					   "1,0 %c -------- %c -------- %c 1,2\n"
					   "    |         /|\\         | \n"
					   "    |        / | \\        | \n"
					   "    |       /  |  \\       | \n"
					   "    |      /   |   \\      | \n"
					   "    |     /    |    \\     | \n"
					   "    |    /     |     \\    | \n"
					   "    |   /      |      \\   | \n"
					   "    |  /       |       \\  | \n"
					   "    | /        |        \\ | \n"
					   "    |/         |         \\| \n"
					   "    %c -------- %c -------- %c\n"
					   "   2,0        2,1         2,2 \n",
					   a, b, c, d, e, f, g, h, i);

				result = chck(tic_tac);
				/*if(result<0)
				  {
					 printf("\n......GAME DRAW.......\n");
					 break;


				  }*/
				if (result == 1)
				{
					if (card1 == 'X')
					{
						printf("\n\tWINNER IS:- %s (%c) \n", name1, card1);
						/*for(x=0;x<3;x++)
						  {
							for(y=0;y<3;y++)
							   {
								 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
								}
							printf("\n");
						  }*/

						break;
					}
					else
					{
						printf("\n\tWINNER IS:- %s (%c) \n", name2, card1);

						/*for(x=0;x<3;x++)
						  {
							for(y=0;y<3;y++)
							   {
								 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
								}
							printf("\n");
						  }*/
						break;
					}
				}
				else if (result == 0)
				{
					if (card1 == 'O')
					{
						printf("\n\tWINNER IS:- %s (%c) \n", name1, card1);

						/*for(x=0;x<3;x++)
						  {
							for(y=0;y<3;y++)
							   {
								 printf("%d \t",tic_tac[x][y]);  //FOR OPERATION INSIDE THE MATRIX
								}
							printf("\n");
						  }*/
						break;
					}
					else
					{
						printf("\n\tWINNER IS:- %s (%c) \n", name2, card1);

						/*for(x=0;x<3;x++)
						  {
							for(y=0;y<3;y++)
							   {
								 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
								}
							printf("\n");
						  }*/
						break;
					}
				}
				else
				{
					printf("now lets move this card to make a line pattern \n");
					if (move == 0)
					{
						printf("CHOOSE position TO PICK THE CARD :");
						printf("\nenter row no:");
						scanf("%d", &row);
						printf("\nenter column no:");
						scanf("%d", &col);
						row_pic = row;
						col_pic = col;
						if (tic_tac[row][col] != 0 && tic_tac[row][col] != 1)
						{
							printf("\n!!....CHOOSE A CARD's VALID(fullfill) POSITION TO PICK....!!\n");
							continue;
						}
						else
						{
							// none..
						}

						/*for(x=0;x<3;x++)
							  {
								for(y=0;y<3;y++)
								   {
									 printf("%d \t",tic_tac[x][y]);   //FOR OPERATION INSIDE THE MATRIX
									}
								printf("\n");
							  }*/
						if (tic_tac[row][col] == 1)
						{
							temp = 'X';
							temp_num = 1;
						}
						else if (tic_tac[row][col] == 0)
						{
							temp = 'O';
							temp_num = 0;
						}

						if (row == 0 && col == 0)
						{
							printf("\nenter SPACE-BAR to erase the card:");
							a = getchar();
							scanf("%c", &a);
							if (a == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (a == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 0 && col == 1)
						{
							printf("\nenter SPACE-BAR to erase the card:");
							b = getchar();
							scanf("%c", &b);
							if (b == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (b == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 0 && col == 2)
						{
							printf("enter SPACE-BAR to erase the card:");
							c = getchar();
							scanf("%c", &c);

							if (c == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (c == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 1 && col == 0)
						{
							printf("enter SPACE-BAR to erase the card:");
							d = getchar();
							scanf("%c", &d);

							if (d == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (d == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 1 && col == 1)
						{
							printf("enter SPACE-BAR to erase the card:");
							e = getchar();
							scanf("%c", &e);

							if (e == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (e == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 1 && col == 2)
						{
							printf("enter SPACE-BAR to erase the card:");
							f = getchar();
							scanf("%c", &f);

							if (f == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (f == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 2 && col == 0)
						{
							printf("enter SPACE-BAR to erase the card:");
							g = getchar();
							scanf("%c", &g);

							if (g == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (g == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 2 && col == 1)
						{
							printf("enter SPACE-BAR to erase the card:");
							h = getchar();
							scanf("%c", &h);

							if (h == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (h == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else if (row == 2 && col == 2)
						{
							printf("enter SPACE-BAR to erase the card:");
							i = getchar();
							scanf("%c", &i);

							if (i == 'X')
							{
								tic_tac[row][col] = 1;
							}
							else if (i == 'O')
							{
								tic_tac[row][col] = 0;
							}
							else
							{
								tic_tac[row][col] = 12;
							}
							count++;
						}
						else
						{
							printf("\n__ENTER A VALID POSITION !!__ \n");
						}

						move++;
					}
					else
					{
					empty_start:
						printf("CHOOSE position TO MOVE :");
						printf("\nenter row no:");
						scanf("%d", &row);
						printf("\nenter column no:");
						scanf("%d", &col);
						row_des = row;
						col_des = col;
						sgnl = move_chck(row_pic, col_pic, row_des, col_des, tic_tac); // EMPTY PLACE CHCK FUNCTION CALL
						if (sgnl != 1)
						{
							printf("!!...CHOOSE a NEAREST EMPTY position TO MOVE...!! \n");
							goto empty_start;
						}
						else
						{
							goto empty_end;
						}
					empty_end:
						if (row == 0 && col == 0)
						{
							a = temp;
							tic_tac[row][col] = temp_num;

							count++;
						}
						else if (row == 0 && col == 1)
						{
							b = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 0 && col == 2)
						{
							c = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 1 && col == 0)
						{
							d = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 1 && col == 1)
						{
							e = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 1 && col == 2)
						{
							f = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 2 && col == 0)
						{
							g = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 2 && col == 1)
						{
							h = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else if (row == 2 && col == 2)
						{
							i = temp;
							tic_tac[row][col] = temp_num;
							count++;
						}
						else
						{
							printf("\n__ENTER A VALID POSITION !!__ \n");
						}

						move = 0;
					}
				}
			}
			break;
		}
	}

	return (0);
}

int chck(int arr[3][3])
{
	arr[3][3];

	int n;
	if ((arr[0][0] == 0 && arr[0][1] == 0 && arr[0][2] == 0) || (arr[1][0] == 0 && arr[1][1] == 0 && arr[1][2] == 0) || (arr[2][0] == 0 && arr[2][1] == 0 && arr[2][2] == 0) ||
		(arr[0][0] == 0 && arr[1][0] == 0 && arr[2][0] == 0) || (arr[0][1] == 0 && arr[1][1] == 0 && arr[2][1] == 0) || (arr[0][2] == 0 && arr[1][2] == 0 && arr[2][2] == 0) ||
		(arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0) || (arr[0][2] == 0 && arr[1][1] == 0 && arr[2][0] == 0))
	{
		n = 0;
		return (n);
	}
	else if ((arr[0][0] == 1 && arr[0][1] == 1 && arr[0][2] == 1) || (arr[1][0] == 1 && arr[1][1] == 1 && arr[1][2] == 1) || (arr[2][0] == 1 && arr[2][1] == 1 && arr[2][2] == 1) ||
			 (arr[0][0] == 1 && arr[1][0] == 1 && arr[2][0] == 1) || (arr[0][1] == 1 && arr[1][1] == 1 && arr[2][1] == 1) || (arr[0][2] == 1 && arr[1][2] == 1 && arr[2][2] == 1) ||
			 (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1) || (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1))
	{
		n = 1;
		return (n);
	}
	else
	{
		n = 7;
		return (n);
	}
}

int move_chck(int row_pic, int col_pic, int row_des, int col_des, int arr[3][3])
{
	int signal;
	arr[3][3];
	if (arr[1][1] == 1 || arr[1][1] == 0)
	{
		if (row_pic == 0 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 1) || (row_des == 1 && col_des == 0))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 0 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 0) || (row_des == 0 && col_des == 2))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 0 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 1) || (row_des == 1 && col_des == 2))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 1 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 0) || (row_des == 2 && col_des == 0))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 1 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 2) || (row_des == 2 && col_des == 2))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 1 && col_des == 0) || (row_des == 2 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 2 && col_des == 0) || (row_des == 2 && col_des == 2))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 1 && col_des == 2) || (row_des == 2 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 1 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				signal = 1;
				return (signal);
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
	}

	else
	{
		if (row_des == 1 && col_des == 1)
		{
			signal = 1;
			return (signal);
		}
		else if (row_pic == 0 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 1) || (row_des == 1 && col_des == 0) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 0 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 0) || (row_des == 0 && col_des == 2) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 0 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 1) || (row_des == 1 && col_des == 2) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 1 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 0) || (row_des == 2 && col_des == 0) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 1 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				signal = 1;
				return (signal);
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}

		else if (row_pic == 1 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 0 && col_des == 2) || (row_des == 2 && col_des == 2) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 0)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 1 && col_des == 0) || (row_des == 2 && col_des == 1) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 1)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 2 && col_des == 0) || (row_des == 2 && col_des == 2) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
		else if (row_pic == 2 && col_pic == 2)
		{
			if ((arr[row_des][col_des] != 0) && (arr[row_des][col_des] != 1))
			{
				if ((row_des == 1 && col_des == 2) || (row_des == 2 && col_des == 1) || (row_des == 1 && col_des == 1))
				{
					signal = 1;
					return (signal);
				}
				else
				{
					signal = 0;
					return (signal);
				}
			}
			else
			{
				signal = 0;
				return (signal);
			}
		}
	}
}
