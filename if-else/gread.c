#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    float percentage;

    printf("Enter marks for Physics: ");
    scanf("%d", &physics);
    
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);
    
    printf("Enter marks for Biology: ");
    scanf("%d", &biology);
    
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mathematics);
    
    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    // Calculate total marks obtained and total possible marks
    int totalMarksObtained = physics + chemistry + biology + mathematics + computer;
    int totalPossibleMarks = 500; // Assuming maximum marks for each subject is 100

    // Calculate percentage
    percentage = ((float)totalMarksObtained / totalPossibleMarks) * 100;

    char grade;
    if (percentage <= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Output the results
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}







