#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*****    1.play  0.exit   ****\n");
	printf("******************************\n");
}

void game()
{
	//ɨ����Ϸ
	char mine[ROWS][COLS];//����׵���Ϣ
	char show[ROWS][COLS];//����Ų���׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��

}

void test()
{
	//ɨ����Ϸ�Ĳ���
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����, ����ѡ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}