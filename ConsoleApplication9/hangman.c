#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include <conio.h>
#include <windows.h>

#define WORD 51 // �ܾ� ����
char quiz[][WORD] = {
	"orange","school","train","apple","pencil",
	"soccer","basketball","right","perfect","castle",
	"select","exercise","angel","different","language",
	"print","walk","knowledge","card","battle",
	"sound","game","miracle","phone", "assignment",
	"mouse","tiger","mushroom","last", "hand",
	"start", "couch", "potato", "house", "fish",
	"piano", "bread", "play", "night", "ground",
	"chocolate", "friend", "family", "help", "earth",
	"electronic", "case", "life", "alphabet", "exprience"
};

int i;
int ok = 0, temp = 0;
int life = 10;
char alpha[27];	//�Է��ߴ� ���ĺ� �����ϴ� �迭
char ran[WORD] = "";	//������ �����ϴ� �迭
char fil[WORD] = "";	//���ٰ� �Է��� ������ �����Ѵ� �迭
char ans;
int score = 0;
int total = 0;
int count = 0;

int award();
void Print();
void Game();
void openscreen();
int endscreen();

int main()
{
	if (count == 0)
	{
		openscreen();
		count = 1;
	}
	srand(time(NULL));	//�������� �ܾ� ����
	strcpy(ran, quiz[rand() % WORD]);
	for (i = 0;i<strlen(ran);i++)
		fil[i] = '_';
	Game();
	return 0;
}


void openscreen()
{
	printf("                                                         \n");
	printf("          ��    ��      ��      ��       ��    ����    \n");
	printf("          ��    ��     ���     �� ��    ��  ��          \n");
	printf("          �����    ��  ��    ��   ��  ��  ��  ����  \n");
	printf("          ��    ��   �����   ��     ���  ��      ��  \n");
	printf("          ��    ��  ��      ��  ��       ��    ����    \n");
	printf("                                                         \n");
	printf("               ��      ��     ��     ��       ��         \n");
	printf("               ���  ���    ���    �� ��    ��         \n");
	printf("               ��  ��  ��   ��  ��   ��   ��  ��         \n");
	printf("               ��  ��  ��  �����  ��     ���         \n");
	printf("               ��  ��  �� ��      �� ��       ��         \n");
	printf("                                                         \n");
	printf("                                                         \n");
	printf("                 ����       ��      ��      �� �����\n");
	printf("               ��            ���     ���  ��� ��      \n");
	printf("               ��  ����   ��  ��    ��  ��  �� �����\n");
	printf("               ��      ��  �����   ��  ��  �� ��      \n");
	printf("                 ����   ��      ��  ��  ��  �� �����\n");
	printf("                                                         \n");
	printf("                   ���� �ε����Դϴ�.                    \n");
	printf("                                                         \n");
	Sleep(2500);
	system("cls");
}

void Print() {
	printf("\t\t��");
	for (i = 0;i < strlen(ran);i++)
		printf("��");
	printf("��\n");
	printf("\t\t��");
	for (i = 0;i<strlen(ran);i++)
		printf("%c ", fil[i]);
	printf("��\n");
	printf("\t\t��");
	for (i = 0;i<strlen(ran);i++) printf("��"); //��
	printf("��\n");
	if (life == 10) {
		printf("\t\t          \n");
		printf("\t\t          \n");
		printf("\t\t          \n");
		printf("\t\t          \n");
		printf("\t\t          \n");
		printf("\t\t         ���� \n");
	}if (life == 9) {
		printf("\t\t            \n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 8) {
		printf("\t\t      ������\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 7) {
		printf("\t\t    ��������\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 6) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 5) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t ��       ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 4) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t ��  ��   ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 3) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t �צ���   ��\n");
		printf("\t\t          ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}if (life == 2) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t �צ���   ��\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t          ��\n");
		printf("\t\t         ���� \n");
	}
	if (life == 1) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t �צ���   ��\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t ��       ��\n");
		printf("\t\t         ���� \n");

	}
	if (life == 0) {
		printf("\t\t    ��������\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t �צ���   ��\n");
		printf("\t\t   ��     ��\n");
		printf("\t\t ��  ��   ��\n");
		printf("\t\t         ���� \n");
	}
}


void Game()
{
	while (1)
	{
		while (1)
		{
			system("cls");
			printf("life : %d\n", life);
			printf("���� : %d\n", life * 10);
			Print();
			printf("�Է��ߴ� ���ĺ� : ");
			for (i = 0;i < strlen(alpha);i++)
				printf("%c ", alpha[i]); //�Է��ߴ� ���ĺ� ���
			printf("\n���ĺ� �Է� : ");
			scanf(" ");	//�����̿��� ���� ����
			scanf("%c", &ans);	//���� �Է�

			for (i = 0, temp = 0;i < strlen(alpha);i++)
				if (alpha[i] == ans) temp = 1;	//�Է��ߴ� ���ĺ����� Ȯ��
			if (temp == 0)
			{
				alpha[strlen(alpha)] = ans;
				break;
			} //�Է��� ���ĺ����� ����
		}
		for (i = 0, temp = 0;i < strlen(ran);i++)
		{
			if (ran[i] == ans && fil[i] != ans)
			{
				fil[i] = ans;
				ok++; temp = 1;
			}
		}
		if (temp == 0) life--;
		if (ok == strlen(ran)) break; //������ ��� �¾Ҵ��� Ȯ��
		if (life == 0)
		{
			system("cls"); puts("Game Over"); Print(); printf("������ %s�Դϴ�.\n", ran);
			score = life * 10;
			award();
			endscreen();
			return 0;
		}
	}
	system("cls");
	score = life * 10;
	award();
	Print();
	printf("\t\t<< Clear >>\n");
	endscreen();
}


int endscreen()
{
	int answer, i;

	Sleep(1800);
	system("cls");
	printf("\n\t\t re game?\n\n");
	printf("\n\t\t 1.go\n\n");
	printf("\n\t\t 2.exit\n");
	if (score == 0)
		printf("\n\t\t(�������� ������ ���Ͽ����Ƿ� ������ -10�� �˴ϴ�.)\n\n");
	printf("\n\t\t1 or 2 ? : ");
	scanf("%d", &answer);
	if (answer == 1)
	{
		ok = 0, temp = 0;
		life = 10;
		memset(alpha, '\0', sizeof(alpha));
		system("cls");
		main();
		Game();
		return 1;
	}
	if (answer == 2)
	{
		system("cls");
		printf("������ ����Ǿ����ϴ�.\n");
	}
}

int award()
{

	if (score != 0) {
		total = total + score;
	}
	printf("\n\t\t����: %d\n", total);

	if (score == 0) {
		total = total + score - 10;
	}
}