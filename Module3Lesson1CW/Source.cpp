#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include<Windows.h>

void main() {
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	srand(time(NULL));

	int n = 0;
start:
	printf("������� ����� �������: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("1.	������ � ���������� ��� �����. ����������, ��� ������,����� ��������� ��� ������� ����� ���� �����. ����� ������� � ���� ���������.");

		int a = 0, b = 0;

		a = 1 + rand() % 10;
		b = 1 + rand() % 10;

		printf("a=%d, b=%d", a, b);

		if (pow(a, 2) + pow(b, 2) > pow((a + b), 2))
			printf("����� ��������� ������ \n");
		else
			printf("������� ����� ������ \n");
	}
	else if (n == 2) {
		printf("2.���������� �������� � �������� �� ����, ���� ���� �� 2 �� 5 ���, �������� ���������� 2%,  ���� ���� �� 5 �� 10 ��� - 5%. ������ � ���������� �������� � ����, ������� �������� � ����� � ������� \n");

		float salary = 0, stazh = 0, nadbavka1 = 0.02, nadbavka2 = 0.05;
		printf("������� ��������: ");
		scanf("%f", &salary);
		printf("������� ���� ������: ");
		scanf("%f", &stazh);

		if (stazh >= 2 && stazh <= 5)
		{
			salary = salary + (salary*nadbavka1);
			printf("�������� �������� %f \n", salary);
		}
		else if (stazh >= 5 && stazh <= 10)
		{
			salary = salary + (salary*nadbavka2);
			printf("�������� �������� %f \n", salary);
		}
	}
	else if (n == 3) {
		printf("3.	������ � ���������� ��� �����, ������������� �������� � �������, � ������������� �������� ��� ���������.");

		int a = 0, b = 0, c = 0;

		printf("������� ����� �: ");
		scanf("%d", &a);

		printf("������� ����� b: ");
		scanf("%d", &b);

		printf("������� ����� �: ");
		scanf("%d", &c);

		if (a > 0)
			a = pow(a, 2);

		if (b > 0)
			b = pow(b, 2);

		if (c > 0)
			c = pow(c, 2);

		printf("a=%d, b=%d, c=%d\n", a, b, c);
	}
	else if (n == 4) {
		printf("4.	���� ����������� �����. ����������, �������� �� ��� ������, ��� ������������ ������ 3 \n");

		int a = 0;
		a = 1 + rand() % 100;

		printf("a=%d\n", a);

		if (a % 2 == 0)
			printf("����� �������� ������ \n", a);
		else if ((a - 3) % 10 == 0)
			printf("����� ������������ �� 3 \n", a);
	}
	else if (n == 5) {
		printf("5.	���������� ����� ����������� ������ ��������� �� ��������, ���� ������� ��������� �� ������� ��� 6% ������� ��� �� ��� ��� 8% �������. � ���������� ������ ����� ������ � ���� �������� \n");

		float vklad = 0, srok = 0, nadbavka1 = 0.06, nadbavka2 = 0.08, viplati1 = 0, viplati2 = 0;

		printf("������� ����� ������: ");
		scanf("%f", &vklad);

		printf("������� ����: ");
		scanf("%f", &srok);

		if (srok <= 6)
		{
			viplati1 = (vklad*(nadbavka1 / 12)) * 6;
			printf("����� ����������� ������ �������� %f\n", viplati1);
		}
		else if (srok > 6 && srok <= 12)
		{
			viplati2 = (vklad*(nadbavka2 / 12)) * 12;
			printf("����� ����������� ������ �� ��� �������� %f\n", viplati2);
		}
	}
	else if (n == 6) {
		printf("���������, �������� �� ��� ���������� (������� 4) � �������� �� 2000 �� ����� ��� �� 2000 ����� ���. ������ � ������ ��� � ������� ���, ������� ��������� � ���� �656 ��� ����� ��� � ����������.\n");

		int god = 0;

		god = -2000 + rand() % 2000;
		printf("���=%d \n", god);

		if (god < 0 && god % 4 == 0)
		{
			printf("%d ��� �� ����� ��� - ���������� \n", god);
		}
		else if (god < 0 && god % 4 != 0)
		{
			printf("%d ��� �� ����� ���-�� ���������� \n", god);
		}
		else if (god > 0 && god % 4 == 0)
		{
			printf("%d ��� ����� ���- ���������� \n", god);
		}
		else
		{
			printf("%d ��� ����� ��� - �� ���������� \n", god);
		}
	}
	else if (n == 7) {
		printf("��������� ��������� ������� � ������ ������. ������ � 10% ���������������, ���� ����� ������� ��������� 1000 �����. \n");

		float skidka = 0.1, summa = 0;
		printf("������� ����� �������: ");
		scanf("%f", &summa);

		if (summa > 1000)
		{
			summa = summa - (summa*0.1);
			printf("����� ������� � ������ ������ �������� %f \n", summa);
		}
		else
		{
			printf("����� ������� %f \n", summa);
		}
	}
	else if (n == 8) {
		printf("�������� ��������� ���������� ���������� ���� ������������ (���� 100). ������ ������������ � ������������� ����������� ���� ��������.\n");

		

	}
	
	else if (n == 11) {
		printf("1.	������ � ���������� ����� ������. ���������� ����� � ����������� �� ������ ������ � ������� ��������� (����� (3,4,5), ���� (6,7,8), ����� (9,10,11)  ���� (12,1,2) \n");
		
		
		
		int mes = 0;
		printf("������� ����� ������, mes= ");
		scanf("%d", &mes);

		switch (mes)
		{

		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("����� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("���� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("����� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("���� \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	goto start;
}