#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee *emp;
    emp = (struct Employee*) malloc(n * sizeof(struct Employee));

    if(emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Employee Information ---\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s | ID: %d | Salary: %.2f\n",
               emp[i].name, emp[i].id, emp[i].salary);
    }

    free(emp);  
    return 0;
}
