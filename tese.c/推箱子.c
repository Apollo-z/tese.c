#include<stdio.h>;
#include<conio.h>;
#include<windows.h>;
int map[9][11] = {
	{0,1,1,1,1,1,1,1,1,1,0},
	{0.1,0.0,0.1,0.0,0,1,0},
	{0,1,0,3,3,3,3,3,0,1,0},
	{0,1,0,3,0,3,0,3,0,1,1},
	{0,1,0,0,0,2,0,0,3,0,1},
	{1,1,0,1,1,1,1,0,3,0,1},
	{1,0,4,4,4,4,4,1,0,0,1},
	{1,0,4,4,4,4,4,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,0}
};
int drawmain();
int tuidong();
int winshu();

int main()
{
	while (1)
	{
		system("cls");
		drawmain();
		tuidong();
	}
	printf("shuchu\n");
	return 0;
}

int drawmain()
{
	int i, j;
	winshu();
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 11; j++)
		{
			switch (map[i][j])
			{
			case 0:
				printf(" ");
				break;
			case 1:
				printf("")
			}
		}
	}

}

