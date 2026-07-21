#include <stdio.h>

int main() {
    float per;

    printf("Enter Percentage: ");
    scanf("%f", &per);

    if(per >= 75)
        printf("Grade: Distinction");
    else if(per >= 60)
        printf("Grade: First Class");
    else if(per >= 50)
        printf("Grade: Second Class");
    else if(per >= 35)
        printf("Grade: Pass");
    else
        printf("Grade: Fail");

    return 0;
}
