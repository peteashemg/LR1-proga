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
	
	// Proverka
	if(a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0 ) {
		printf("warning! all sides are negative.\n");
		return 1;
		}
	if(c < h || d < h ) {
		printf("warning! wysota.\n");
                return 1;
                }
		if (abs(a - b) >= (c + d) || abs(c - d) >= (a + b)) {
			printf("Warning! Trapezia with this side cannot exist\n");
			return 1;
		}

    	// Расчеты
    	perimeter = a + b + c + d;
    	mid_line = (a + b) / 2.0;
    	area = mid_line * h;
	
    	printf("\nРезультаты\n");
    	printf("Периметр: %.2f\n", perimeter);
    	printf("Средняя линия: %.2f\n", mid_line);
    	printf("Площадь: %.2f\n", area);

	return 0;
}
