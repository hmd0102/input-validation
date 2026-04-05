#include <stdio.h>

int main() {
    double salaries[5] = {3000, 3500, 4000, 4500, 5000};
    int employee_id;
    double new_salary;

    printf("Enter employee ID (0-4): ");
    if (scanf("%d", &employee_id) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Range validation cho employee_id
    if (employee_id < 0 || employee_id >= 5) {
        printf("Error: Employee ID out of range!\n");
        return 1;
    }

    printf("Current salary: %.2f\n", salaries[employee_id]);
    printf("Enter new salary (1000 - 10000): ");

    if (scanf("%lf", &new_salary) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Range validation cho salary
    if (new_salary < 1000 || new_salary > 10000) {
        printf("Error: Salary out of allowed range!\n");
        return 1;
    }

    salaries[employee_id] = new_salary;
    printf("Updated salary for employee %d: %.2f\n", employee_id, salaries[employee_id]);

    return 0;
}
