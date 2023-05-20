#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;
    printf("Введіть координати першої точки (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Введіть координати другої точки (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Відстань між точками (%.2f, %.2f) та (%.2f, %.2f) дорівнює %.2f\n", x1, y1, x2, y2, distance);
    return 0;
}
