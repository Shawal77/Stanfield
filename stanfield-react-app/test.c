#include <stdio.h>
#include <stdlib.h>

int main()
{
    double semester, weightedscore = 0, TCU, CU = 0, CGPA;

    for (semester = 1; semester <= 6; semester = semester + 1)
    {

        printf("Enter the total number of course units offered.\t\n");
        scanf("%lf", &TCU);
        printf("Enter the total number of credit units.\n");
        scanf("%lf", &CU);
        if (TCU == 8){
            double G1, G2, G3, G4, G5, G6, G7, G8, C1, C2, C3, C4, C5, C6, C7, C8;
            printf("Enter the credit units from each of the courses offered:\n");
            scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &C1, &C2, &C3, &C4, &C5, &C6, &C7, &C8);
            printf("Enter the grade points earned in each course with respect to the credit units\n");
            scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &G1, &G2, &G3, &G4, &G5, &G6, &G7, &G8);
            weightedscore = (G1 * C1 + G2 * C2 + G3 * C3 + G4 * C4 + G5 * C5 + G6 * C6 + G7 * C7 + G8 * C8);
        }
        else if (TCU == 7){
            double G1, G2, G3, G4, G5, G6, G7, C1, C2, C3, C4, C5, C6, C7;
            printf("Enter the credit units from each of the courses offered:\n");
            scanf("%lf%lf%lf%lf%lf%lf%lf", &C1, &C2, &C3, &C4, &C5, &C6, &C7);
            printf("Enter the grade points earned in each course with respect to the credit units\n");
            scanf("%lf%lf%lf%lf%lf%lf%lf", &G1, &G2, &G3, &G4, &G5, &G6, &G7);
            weightedscore = (G1 * C1 + G2 * C2 + G3 * C3 + G4 * C4 + G5 * C5 + G6 * C6 + G7 * C7);
        }
        else if (TCU == 6){
            double G1, G2, G3, G4, G5, G6, C1, C2, C3, C4, C5, C6;
            printf("Enter the credit units from each of the courses offered:\n");
            scanf("%lf%lf%lf%lf%lf%lf", &C1, &C2, &C3, &C4, &C5, &C6);
            printf("Enter the grade points earned in each course with respect to the credit units\n");
            scanf("%lf%lf%lf%lf%lf%lf", &G1, &G2, &G3, &G4, &G5, &G6);
            weightedscore = (G1 * C1 + G2 * C2 + G3 * C3 + G4 * C4 + G5 * C5 + G6 * C6);
        }
        else if (TCU == 5){
            double G1, G2, G3, G4, G5, C1, C2, C3, C4, C5;
            printf("Enter the credit units from each of the courses offered:\n");
            scanf("%lf%lf%lf%lf%lf", &C1, &C2, &C3, &C4, &C5);
            printf("Enter the grade points earned in each course with respect to the credit units\n");
            scanf("%lf%lf%lf%lf%lf", &G1, &G2, &G3, &G4, &G5);
            weightedscore = (G1 * C1 + G2 * C2 + G3 * C3 + G4 * C4 + G5 * C5);
        }

        else if (TCU == 4){
            double G1, G2, G3, G4, C1, C2, C3, C4;
            printf("Enter the credit units from each of the courses offered:\n");
            scanf("%lf%lf%lf%lf", &C1, &C2, &C3, &C4);
            printf("Enter the grade points earned in each course with respect to the credit units\n");
            scanf("%lf%lf%lf%lf", &G1, &G2, &G3, &G4);
            weightedscore = (G1 * C1 + G2 * C2 + G3 * C3 + G4 * C4);
        }
        printf("%.2f", weightedscore);
        scanf("%lf", &weightedscore);
    }
    CGPA = (weightedscore + weightedscore) / (CU + CU);
    printf("CGPA is %.2f.", CGPA);
    return 0;
}
