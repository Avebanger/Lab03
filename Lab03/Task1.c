#include <locale.h>
#include <stdio.h>
#define      D       2.54
#define		 I		 2.32
#define		 S		 2.70
int calculator()
{
	int num, num2;
	printf("Введите число: ");
	scanf("%d", &num);
	printf("Введено число A\n");
	printf("Введите еще одно число: ");
	scanf("%d", &num2);
	printf("Введено число B\n");
	printf("Сумма чисел B и A: %+d\nРазность чисел B и A: %+d\nПроизведение чисел B и A: %+d\nЧастное чисел B и A: %+d\nОстаток от деления B на A: %+d",num2+num,num2-num,num2*num,num2/num,num2%num);
}
int inches_to_centimeters()
{
	int inch,inchi,inchs;
	float result,result2,result3;
	printf("Введите значение в дюймах (англ): ");
	scanf("%d", &inch);
	printf("Введите значение в дюймах (исп): ");
	scanf("%d", &inchi);
	printf("Введите значение в дюймах (старолит): ");
	scanf("%d", &inchs);
	
	result =D *inch;
	result2 = I * inchi;
	result3 = S * inchs;
	printf("%d дюймов (английских) - это %.1f см\n",inch,result);
	printf("%d дюймов (испанских) - это %.1f см\n", inchi, result2);
	printf("%d дюймов (старолитовских) - это %.1f см\n", inchs, result3);

}

int table()
{
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);

}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//calculator();
	//inches_to_centimeters();
}