#include <stdio.h>

int main() {
    double salaries[5] = {3000, 3500, 4000, 4500, 5000};
    int employee_id;
    double new_salary;

    printf("Enter employee ID: ");
    // ❌ Không check scanf return value
    scanf("%d", &employee_id);

    // ❌ Sai range validation (thiếu check < 0)
    if (employee_id < 5) {
        printf("Current salary: %.2f\n", salaries[employee_id]);

        printf("Enter new salary: ");
        // ❌ Không check scanf
        scanf("%lf", &new_salary);

        // ❌ Sai logic: chỉ check upper bound
        if (new_salary <= 10000) {
            salaries[employee_id] = new_salary;  // ❌ có thể out-of-bounds
            printf("Updated salary for employee %d: %.2f\n",
                   employee_id, salaries[employee_id]);
        } else {
            printf("Salary too high!\n");
        }

    } else {
        printf("Invalid employee ID!\n");
    }

    return 0;
}
