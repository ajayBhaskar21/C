
/*
    Each student attends 3 rounds and they are tested with oxygen levels and 
    the student or student's average should be maximum.  
*/

#include <stdio.h>
int findMaxAverage(int a[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) 
            max = a[i];
    }
    return max;
}

int main() {
    int noOfStudents;
    printf("Enter number of students : ");
    scanf("%d", &noOfStudents);
    int averages[noOfStudents], r1, r2, r3;
    for (int i = 0; i < noOfStudents; i++) {
        printf("Enter student-%d oxygen levels : ", i + 1);
        // oxygen value must be from 1 to 100
        while(1) {
            scanf("%d", &r1);
            if (!(r1 > 0 && r1 < 101)) {
                printf("Enter valid oxygen number: ");
            }
            else {
                break;
            }
        }
        while (1)
        {
            scanf("%d", &r2);
            if (!(r2 > 0 && r2 < 101))
            {
                printf("Enter valid oxygen number: ");
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            scanf("%d", &r3);
            if (!(r3 > 0 && r3 < 101))
            {
                printf("Enter valid oxygen number: ");
            }
            else
            {
                break;
            }
        }
        averages[i] = (r1 + r2 + r3) / 3;
    } 
    int maxAvg = findMaxAverage(averages, noOfStudents);
    // max average less than 70 then Students are unfit.
    if (maxAvg < 70)
    {
        printf("All Students are unfit");
        return -1;
    }
    for (int i = 0; i < noOfStudents; i++) {
        if (averages[i] == maxAvg) {
            printf("Student-%d oxygen levels are maximum", i + 1);
        }
    }
    return 0;
}

