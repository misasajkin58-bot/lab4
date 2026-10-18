#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void Task1() {
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 7.6e-4;  // 0.00076
    printf("Исходные значения: %c,%g,%f,%e\n", c, i, f, d);

    printf("Введите новый символ: ");
    scanf("%c", &c);
    printf("Введите новое целое число: ");
    scanf("%d", &i);
    printf("Введите новое вещественное число: ");
    scanf("%f", &f);
    printf("Введите новое вещественное число(double): ");
    scanf("%lf", &d);

    printf("Новые значения: %c,%d,%f,%d=%.2e\n\n", c, i, f, d);

    int a = (int)f;
    float b = f - a;
    printf("Целая часть: %d, Дробная часть: %.4f\n", a, b);
    printf("Символ '%c': десятичный код = %d, шестнадцатеричный код = %x\n", c, c, c);
    printf("1 / %d = %f\n", i, 1.0 / i);
}
void Task2() {
    printf("Задание 2\n");
    int a = 11;int b = 3;
    int x = a / b;
    float y = (float)a / b;
    double z = a / b;
    printf("Неявное преобразование(a/b, где a = 11, b = 3 )\n");
    printf("x(int) = %d\n", x);
    printf("f(float) = %f\n", y);
    printf("z(double) = %lf\n", z);

    printf("Явное преобразование:\n");
    printf("(float)a / b   = %f\n", (float)a / b);
    printf("(double)a / b  = %lf\n", (double)a / b);
    printf("(float)(a / b) = %f\n", (float)(a / b));

}
void Task3() {
    printf("ЗАДАНИЕ 3 \n");
    int n;
    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    int last = n % 10;
    int first = n / 100;
    int mid = (n / 10) % 10;
    int sum = first + mid + last;
    int reversed = last * 100 + mid * 10 + first;
    printf("Последняя цифра: %d, Первая: %d, Сумма цифр: %d, Число наоборот: %d\n", last, first, sum, reversed);


}
void TaskDZ() {
    int A, B, C;

    printf("Введите уровень силы героя (A): ");
    scanf("%d", &A);
    printf("Введите уровень силы героя (B): ");
    scanf("%d", &B);
    printf("Введите уровень силы героя (C): ");
    scanf("%d", &C);
    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) { 
        printf("Условие выполнено! Тройной удар активируется.\n");
    }
    else {  
        printf("Условие не выполнено. способность не активировалась.\n");
    }
    return 0;
}
int main() {
    setlocale(LC_CTYPE, "RUS");
    TaskDZ();
}