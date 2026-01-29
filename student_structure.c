#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student s[2];
    float average;

    for(int i = 0; i < 2; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Marks: ");
        scanf("%f", &s[i].totalMarks);
    }

    printf("\n--- Student Information ---\n");
    for(int i = 0; i < 2; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\nAge: %d\nTotal Marks: %.2f\n",
               s[i].name, s[i].age, s[i].totalMarks);
    }

    average = (s[0].totalMarks + s[1].totalMarks) / 2;
    printf("\nAverage Total Marks = %.2f\n", average);

    return 0;
}
