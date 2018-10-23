#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status { CONTINUE, WON, LOST };
int rollDice();

int main()
{
	int sum;
	int mypoint;

	enum Status gameStatus;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;

	default:
		gameStatus = CONTINUE;
		mypoint = sum;
		printf("Point is %d\n", mypoint);
		break;
	}
	while (gameStatus == CONTINUE)
	{
		sum = rollDice();
		if (sum == 7)
			gameStatus = WON;
		else
		{
			if (sum == 7)
				gameStatus == LOST;
		}
	}
	if (gameStatus == WON)
		printf("Player win\n");
	else
		printf("Player lose\n");
	system("pause");
	return 0;
}

int rollDice()
{
	int d1;
	int d2;
	int worksum;

	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	worksum = d1 + d2;

	printf("Player rolled %d+%d=%d\n", d1, d2, worksum);
	return worksum;
}