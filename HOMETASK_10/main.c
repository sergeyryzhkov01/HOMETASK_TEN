#define _CRT_SECURE_NO_DEPRECATE 

#include <locale.h>
#include <stdio.h>
#include <math.h>

float area_parallelogram(float a, float h) {
    return a * h;
}

void definition() {
    printf("\n�������������� � ��� ���������������, � �������� ��������������� ������� ������� �����������.\n");
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
        printf("\n������: �������������� (������ �������)\n");
    else
        printf("\n����������� ������\n");
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int choice;
    float a, h;
    int width, height;

    printf("�� ������� ������: ��������������\n");
    printf("����:\n");
    printf("1 - ���������� �������\n");
    printf("2 - ������� ����������� ������\n");
    printf("3 - ���������� ������\n");
    printf("�������� ����� ����: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("������� ����� ��������� a: ");
        scanf("%f", &a);
        printf("������� ������ h: ");
        scanf("%f", &h);
        printf("������� ��������������� = %.2f\n", area_parallelogram(a, h));
        break;

    case 2:
        name(4);
        definition();
        break;

    case 3:
        printf("������� ������ ���������������: ");
        scanf("%d", &width);
        printf("������� ������ ���������������: ");
        scanf("%d", &height);
        draw_parallelogram(width, height);
        break;

    default:
        printf("�������� �����.\n");
    }

    return 0;
}