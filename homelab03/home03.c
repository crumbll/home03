#include <locale.h>
#include <stdio.h>
#define      D       1.852
void main() {
    setlocale(LC_ALL, "RUS");
    int dym;
    float result;
    printf("������� ��������:\n");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d ���� � ��� %.1f �", dym, result);

}