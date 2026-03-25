#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, d, h;
	double perimeter, area, mid_line;

	printf("Расчет параметров трапеции\n");
	printf("Введите длины оснований a и b: ");
    	scanf("%lf %lf", &a, &b);
    	printf("Введите длины боковых сторон (c и d): ");
    	scanf("%lf %lf", &d, &c);
    	printf("Введите высоту (h): ");
    	scanf("%lf", &h);

    	// Расчеты
    	perimeter = a + b + c + d;
    	mid_line = (a + b) / 2.0;
    	area = mid_line * h;
	
    	printf("\n--- Результаты ---\n");
    	printf("Периметр: %.2f\n", perimeter);
    	printf("Средняя линия: %.2f\n", mid_line);
    	printf("Площадь: %.2f\n", area);

	return 0;
}

