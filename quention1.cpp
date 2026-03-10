#include <stdio.h>

int main() {
    float Marathi, Math, English, History, Geography;
    float total, percentage;
    char grade;

    // Input marks
    printf("Enter marks for Marathi: ");
    scanf("%f", &Marathi);

    printf("Enter marks for Math: ");
    scanf("%f", &Math);

    printf("Enter marks for English: ");
    scanf("%f", &English);

    printf("Enter marks for History: ");
    scanf("%f", &History);

    printf("Enter marks for Geography: ");
    scanf("%f", &Geography);

    // Calculate total and percentage
    total = Marathi + Math + English + History + Geography;
    percentage = total / 5;

    // Grade using ternary operator
    grade = (percentage >= 75) ? 'A' :
            (percentage >= 60) ? 'B' :
            (percentage >= 45) ? 'C' : 'F';

    // Display result
    printf("\n----- Result -----\n");
    printf("Subject 1: %.2f\n", Marathi);
    printf("Subject 2: %.2f\n", Math);
    printf("Subject 3: %.2f\n", English);
    printf("Subject 4: %.2f\n", History);
    printf("Subject 5: %.2f\n", Geography);

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    printf("Grade: ");
    (grade == 'F') ? printf("Fail\n") : printf("%c\n", grade);

    return 0;
}
