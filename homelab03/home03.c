#include <locale.h>
#include <stdio.h>
#define      D       1.852
void main() {
    setlocale(LC_ALL, "RUS");
    int dym;
    float result;
    printf("¬ведите значение:\n");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d миль Ц это %.1f м", dym, result);

}