#include <stdio.h>
#include <windows.h>
#include <time.h>

void cur(short x, short y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



int main(void)
{
	system("title 게임");
	system("mode con:cols=60 lines=30");
	srand(time(NULL));
	char NAME[10];

	printf("이름을 입력하세요.\n");
	scanf_s("%s",NAME[10]);

	system("cls");
	Sleep(30);

	int y = 0;
	while (y < 150)
	{
		cur(rand() % 61, rand() % 31);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 16);
		printf("%s",NAME);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 16);
		printf("바보");
		Sleep(10);
		y++;
	}

	
	system("cls");
	Sleep(30);

	cur(19, 9);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(19, 10);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(35, 11);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(35, 12);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(19, 13);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(19, 14);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(35, 15);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(35, 16);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}
	cur(35, 17);
	for (int i = 0; i < 2; i++)
	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		Sleep(10);
	}

	system("cls");
	Sleep(30);

	cur(19, 9);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(19, 10);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(35, 11);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(35, 12);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(19, 13);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(19, 14);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(35, 15);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(35, 16);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}
	cur(35, 17);
	for (int i = 0; i < 2; i++)
	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");

	}

	Sleep(100);
	system("cls");
	
	int x = 0;
    while (x < 100)
	{
		cur(rand() % 61, rand() % 31);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 16);
		printf("ㅋ");
		Sleep(10);
		x++;
	}

	system("cls");

	cur(19, 9);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		
	}
	cur(19, 10);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		
	}
	cur(35, 11);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		
	}
	cur(35, 12);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		
	}
	cur(19, 13);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
	
	}
	cur(19, 14);
	for (int i = 0; i < 10; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
		
	}
	cur(35, 15);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
	
	}
	cur(35, 16);
	for (int i = 0; i < 2; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
	
	}
	cur(35, 17);
	for (int i = 0; i < 2; i++)
	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 15 + 1);
		printf("ㅋ");
	
	}

	Sleep(1000);

	
}


