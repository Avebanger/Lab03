#include <stdio.h>
#include <locale.h>
#define G 6.67e-11
// «акон всемир т€готени€: F = G * m1 * m2 / (r * r);
int main()
{
	setlocale(LC_CTYPE,"RUS");
	double F,m1,m2,r;
	printf("¬ведите массу первого тела в кг: ");
	scanf("%lf",&m1);
	printf("¬ведите массу второго тела в кг: ");
	scanf("%lf", &m2);
	printf("¬ведите рассто€ние между телами в метрах: ");
	scanf("%lf", &r);
	F = G * m1 * m2 / (r * r);
	printf("—ила прит€жени€ между телами в Ќьютонах: %.4f", F);
}