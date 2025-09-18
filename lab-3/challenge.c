// Expected Output
// Calculus score: 85
// Physic score: 73
// compro score: 92
// 
// Subject     Score     Grade     Grade
// --------------------------------------
// Cal         85        B         3.0
// Physics     73        C         2.0
// compro      92        A         4.0
// 
// GPA: 3.0

#include <stdio.h>

int main() {
    int CalScore, PhyScore, ComProScore;
    char CalGrade, PhyGrade, ComProGrade;
    float CalP, PhyP, ComProP;
    float GPA, avgscore;

    printf("Calculus score: ");
    scanf("%d", &CalScore);
    printf("Physics score: ");
    scanf("%d", &PhyScore);
    printf("ComPro score: ");
    scanf("%d", &ComProScore);

    // Calculate grade for Cal
    if(CalScore >= 80) {
        CalGrade = 'A'; CalP = 4.0;
    }
    else if(CalScore >= 70 && CalScore < 80) {
        CalGrade = 'B'; CalP = 3.0;
    }
    else if(CalScore >= 60 && CalScore < 70) {
        CalGrade = 'C'; CalP = 2.0;
    }
    else if(CalScore >= 50 && CalScore < 60) {
        CalGrade = 'D'; CalP = 1.0;
    } 
    else if(CalScore < 50){
        CalGrade = 'F'; CalP = 0.0;
    }

    // Calculate grade for Phy
    if(PhyScore >= 80) {
        PhyGrade = 'A'; PhyP = 4.0;
    }
    else if(PhyScore >= 70 && PhyScore < 80) {
        PhyGrade = 'B'; PhyP = 3.0;
    }
    else if(PhyScore >= 60 && PhyScore < 70) {
        PhyGrade = 'C'; PhyP = 2.0;
    }
    else if(PhyScore >= 50 && PhyScore < 60) {
        PhyGrade = 'D'; PhyP = 1.0;
    } 
    else if(PhyScore < 50) {
        PhyGrade = 'F'; PhyP = 0.0;
    }

    // Calculate grade for ComPro
    if(ComProScore >= 80) {
        ComProGrade = 'A'; ComProP = 4.0;
    }
    else if(ComProScore >= 70 && ComProScore < 80) {
        ComProGrade = 'B'; ComProP = 3.0;
    }
    else if(ComProScore >= 60 && ComProScore < 70) {
        ComProGrade = 'C'; ComProP = 2.0;
    }
    else if(ComProScore >= 50 && ComProScore < 60) {
        ComProGrade = 'D'; ComProP = 1.0;
    } 
    else if(ComProScore < 50) {
        ComProGrade = 'F'; ComProP = 0.0;
    }

    avgscore = (CalScore + PhyScore + ComProScore) / 3;

    if(avgscore >= 80) {
        GPA = 4.0;
    }
    else if(avgscore >= 70 && avgscore < 80) {
        GPA = 3.0;
    }
    else if(avgscore >= 60 && avgscore < 70) {
        GPA = 2.0;
    }
    else if(avgscore >= 50 && avgscore < 60) {
        GPA = 1.0;
    } 
    else if(avgscore < 50) {
        GPA = 0.0;
    }

    printf("\n%-12s%-10s%-10s%-10s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-12s%-10d%-10c%-10.1f\n", "Calculus", CalScore, CalGrade, CalP);
    printf("%-12s%-10d%-10c%-10.1f\n", "Physics", PhyScore, PhyGrade, PhyP);
    printf("%-12s%-10d%-10c%-10.1f\n", "Calculus", ComProScore, ComProGrade, ComProP);

    printf("\nGPA: %.1f\n", GPA);

    return 0;
}