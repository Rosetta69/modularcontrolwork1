#include <stdio.h>

int main() {
    float x, y, x0, y0, x1, y1;
    float result;

    // введення значень координат
    printf("Введіть значення x: ");
    scanf("%f", &x);
    printf("Введіть значення y: ");
    scanf("%f", &y);
    printf("Введіть значення x0: ");
    scanf("%f", &x0);
    printf("Введіть значення y0: ");
    scanf("%f", &y0);
    printf("Введіть значення x1: ");
    scanf("%f", &x1);
    printf("Введіть значення y1: ");
    scanf("%f", &y1);

    // перевірка на нуль перед діленням
    if ((x1 - x0) != 0 && (y1 - y0) != 0) {
        // обчислення результату
        result = (x - x0) / (x1 - x0) - (y - y0) / (y1 - y0);

        // виведення результату
        printf("Результат: %f", result);
    } else {
        printf("Помилка: ділення на нуль!");
    }

    return 0;
}

