#include <stdio.h>

int main() {
    float temp, result;
    char unit;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    printf("Enter unit (C/F): ");
    scanf(" %c", &unit);

    switch (unit) {
        case 'C' :
            result = (temp * 9/5) + 32;
            printf("Tempreture in Fahrenheit: %.2f\n", result);
            break;
            case 'F' :
            result = (temp - 32) * 5/9;
            printf("Tempreture in Celsius: %.2f\n", result);
            break;
            default:
            printf("Invalid unit\n");
    }

    return 0;

}