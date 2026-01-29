#include <stdio.h>

struct Car {
    int carID;
    char model[50];
    float rentPerDay;
};

int main() {
    struct Car c[3];
    int days;

    for(int i = 0; i < 3; i++) {
        printf("\nEnter details of car %d\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &c[i].carID);
        printf("Model: ");
        scanf("%s", c[i].model);
        printf("Rent per day: ");
        scanf("%f", &c[i].rentPerDay);
    }

    printf("\nEnter number of rental days: ");
    scanf("%d", &days);

    printf("\n--- Rental Cost Details ---\n");
    for(int i = 0; i < 3; i++) {
        float totalCost = c[i].rentPerDay * days;
        printf("Car ID: %d | Model: %s | Total Cost: %.2f\n",
               c[i].carID, c[i].model, totalCost);
    }
    return 0;
}
