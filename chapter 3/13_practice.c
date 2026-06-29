
 #include <stdio.h>

int main() {

    float m1, m2, m3, m4, m5;
    float total, percentage, CGPA;

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &m5);

    // Total marks
    total = m1 + m2 + m3 + m4 + m5;

    // Percentage
    percentage = (total / 500) * 100;

    // CGPA
    CGPA = percentage / 9.5;

    // Output
    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("CGPA = %.2f\n", CGPA);

    return 0;
}
    

    