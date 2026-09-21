#include <locale.h>
#include <stdio.h>
#define      D       2.54
#define		 I		 2.32
#define		 S		 2.70
int calculator()
{
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	printf("Ââåäèòå ÷èñëî: ");
	scanf("%d", &num);
	printf("Ââåäåíî ÷èñëî A\n");
	printf("Ââåäèòå åùå îäíî ÷èñëî: ");
	scanf("%d", &num2);
	printf("Ââåäåíî ÷èñëî B\n");
	printf("Ñóììà ÷èñåë B è A: %+d\nÐàçíîñòü ÷èñåë B è A: %+d\nÏðîèçâåäåíèå ÷èñåë B è A: %+d\n×àñòíîå ÷èñåë B è A: %+d\nÎñòàòîê îò äåëåíèÿ B íà A: %+d",num2+num,num2-num,num2*num,num2/num,num2%num);
}
int inches_to_centimeters()
{
	int inch,inchi,inchs;
	float result,result2,result3;
	printf("Ââåäèòå çíà÷åíèå â äþéìàõ (àíãë): ");
	scanf("%d", &inch);
	printf("Ââåäèòå çíà÷åíèå â äþéìàõ (èñï): ");
	scanf("%d", &inchi);
	printf("Ââåäèòå çíà÷åíèå â äþéìàõ (ñòàðîëèò): ");
	scanf("%d", &inchs);
	
	result =D *inch;
	result2 = I * inchi;
	result3 = S * inchs;
	printf("%d äþéìîâ (àíãëèéñêèõ) - ýòî %.1f ñì\n",inch,result);
	printf("%d äþéìîâ (èñïàíñêèõ) - ýòî %.1f ñì\n", inchi, result2);
	printf("%d äþéìîâ (ñòàðîëèòîâñêèõ) - ýòî %.1f ñì\n", inchs, result3);

}

int table()
{
	float a, b;
	scanf("%f", &a);
	scanf("%f", &b);

}
int main()
{
	//calculator();
	//inches_to_centimeters();
}
