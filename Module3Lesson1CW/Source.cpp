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
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1) {
		printf("1.	Ввести с клавиатуры два числа. Определить, что больше,сумма квадратов или квадрат суммы этих чисел. Ответ вывести в виде сообщения.");

		int a = 0, b = 0;

		a = 1 + rand() % 10;
		b = 1 + rand() % 10;

		printf("a=%d, b=%d", a, b);

		if (pow(a, 2) + pow(b, 2) > pow((a + b), 2))
			printf("Сумма квадратов больше \n");
		else
			printf("Квадрат суммы больше \n");
	}
	else if (n == 2) {
		printf("2.Рассчитать надбавку к зарплате за стаж, если стаж от 2 до 5 лет, надбавка составляет 2%,  если стаж от 5 до 10 лет - 5%. Ввести с клавиатуры зарплату и стаж, вывести надбавку и сумму к выплате \n");

		float salary = 0, stazh = 0, nadbavka1 = 0.02, nadbavka2 = 0.05;
		printf("Введите зарплату: ");
		scanf("%f", &salary);
		printf("Введите стаж работы: ");
		scanf("%f", &stazh);

		if (stazh >= 2 && stazh <= 5)
		{
			salary = salary + (salary*nadbavka1);
			printf("Зарплата составит %f \n", salary);
		}
		else if (stazh >= 5 && stazh <= 10)
		{
			salary = salary + (salary*nadbavka2);
			printf("Зарплата составит %f \n", salary);
		}
	}
	else if (n == 3) {
		printf("3.	Ввести с клавиатуры три числа, положительные возвести в квадрат, а отрицательные оставить без изменений.");

		int a = 0, b = 0, c = 0;

		printf("Введите чсило а: ");
		scanf("%d", &a);

		printf("Введите число b: ");
		scanf("%d", &b);

		printf("Введите число с: ");
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
		printf("4.	Дано натуральное число. Определить, является ли оно четным, или оканчивается цифрой 3 \n");

		int a = 0;
		a = 1 + rand() % 100;

		printf("a=%d\n", a);

		if (a % 2 == 0)
			printf("Число является четным \n", a);
		else if ((a - 3) % 10 == 0)
			printf("Число оканчивается на 3 \n", a);
	}
	else if (n == 5) {
		printf("5.	Рассчитать сумму ежемесячных выплат процентов по депозиту, если договор составлен на полгода под 6% годовых или на год под 8% годовых. С клавиатуры ввести сумму вклада и срок договора \n");

		float vklad = 0, srok = 0, nadbavka1 = 0.06, nadbavka2 = 0.08, viplati1 = 0, viplati2 = 0;

		printf("Введите сумму вклада: ");
		scanf("%f", &vklad);

		printf("Введите срок: ");
		scanf("%f", &srok);

		if (srok <= 6)
		{
			viplati1 = (vklad*(nadbavka1 / 12)) * 6;
			printf("Сумма ежемесячных выплат составит %f\n", viplati1);
		}
		else if (srok > 6 && srok <= 12)
		{
			viplati2 = (vklad*(nadbavka2 / 12)) * 12;
			printf("Сумма ежемесячных выплат за год составит %f\n", viplati2);
		}
	}
	else if (n == 6) {
		printf("Проверить, является ли год високосным (кратным 4) в пределах от 2000 до нашей эры до 2000 нашей эры. Ввести с экрана год и признак эры, вывести сообщение в виде «656 год нашей эры – високосный».\n");

		int god = 0;

		god = -2000 + rand() % 2000;
		printf("Год=%d \n", god);

		if (god < 0 && god % 4 == 0)
		{
			printf("%d год до нашей эры - високосный \n", god);
		}
		else if (god < 0 && god % 4 != 0)
		{
			printf("%d год до нашей эры-не високосный \n", god);
		}
		else if (god > 0 && god % 4 == 0)
		{
			printf("%d год нашей эры- високосный \n", god);
		}
		else
		{
			printf("%d год нашей эры - не високосный \n", god);
		}
	}
	else if (n == 7) {
		printf("Вычислить стоимость покупки с учетом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 тенге. \n");

		float skidka = 0.1, summa = 0;
		printf("Введите сумму покупки: ");
		scanf("%f", &summa);

		if (summa > 1000)
		{
			summa = summa - (summa*0.1);
			printf("Сумма покупки с учетом скидки составит %f \n", summa);
		}
		else
		{
			printf("Сумма покупки %f \n", summa);
		}
	}
	else if (n == 8) {
		printf("Написать программу вычисления идеального веса пользователя (рост 100). Выдать рекомендации о необходимости поправиться либо похудеть.\n");

		

	}
	
	else if (n == 11) {
		printf("1.	Ввести с клавиатуры номер месяца. Определить сезон в зависимости от номера месяца и вывести сообщение (весна (3,4,5), лето (6,7,8), осень (9,10,11)  зима (12,1,2) \n");
		
		
		
		int mes = 0;
		printf("Введите номер месяца, mes= ");
		scanf("%d", &mes);

		switch (mes)
		{

		case 3:
		case 4:
		case 5:
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("Весна \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 6:
		case 7:
		case 8:
		{
			SetConsoleTextAttribute(hConsole, 14);
			printf("Лето \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 9:
		case 10:
		case 11:
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("Осень \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;

		case 12:
		case 1:
		case 2:
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Зима \n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		break;
		}
	}
	goto start;
}