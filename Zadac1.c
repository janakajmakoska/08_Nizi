#include <stdio.h>

int main() {
    int month, days, i;
    float temperature, sum = 0;

    printf("Enter the number of days in the month: ");
    scanf("%d", &days);

    printf("Enter the temperatures for each day of the month:\n");
    for (i = 1; i <= days; i++) {
        printf("Temperature for day %d: ", i);
        scanf("%f", &temperature);
        sum += temperature;
    }

    printf("The average temperature for the month is: %.2f\n", sum / days);

    return 0;
}
