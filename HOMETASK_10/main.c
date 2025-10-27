#define _CRT_SECURE_NO_DEPRECATE 

#include <locale.h>
#include <stdio.h>
#include <math.h>

float area_parallelogram(float a, float h) {
    return a * h;
}

void definition() {
    printf("Параллелограмм — это четырехугольник, у которого противоположные стороны попарно параллельны.");
}

void draw_parallelogram(int a, int b) {
    int offset = b - 1;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < offset; j++)
            printf(" ");
        for (int k = 0; k < a; k++)
            printf("*");
        printf("\n");
        offset--;
    }
}

void name(int sides) {
    if (sides == 4)
        printf("\nФигура: параллелограмм (четыре стороны)\n");
    else
        printf("\nНеизвестная фигура\n");
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int choice;
    float a, h;
    int width, height;

    printf("Вы выбрали фигуру: Параллелограмм\n");
    printf("Меню:\n");
    printf("1 - Рассчитать площадь\n");
    printf("2 - Вывести определение фигуры\n");
    printf("3 - Нарисовать фигуру\n");
    printf("Выберите пункт меню:: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Введите длину основания a: ");
        scanf("%f", &a);
        printf("Введите высоту h: ");
        scanf("%f", &h);
        printf("Площадь параллелограмма = %.2f\n", area_parallelogram(a, h));
        break;

    case 2:
        name(4);
        definition();
        break;

    case 3:
        printf("Введите ширину параллелограмма: ");
        scanf("%d", &width);
        printf("Введите высоту параллелограмма:: ");
        scanf("%d", &height);
        draw_parallelogram(width, height);
        break;

    default:
        printf("Неверный выбор.\n");
    }

    return 0;
}
