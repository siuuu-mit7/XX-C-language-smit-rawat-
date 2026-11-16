#include <stdio.h>

struct student
{
    int roll_no;
    float marks;
};

int main()
{
    struct student s1;

    printf("Enter roll no and marks: ");
    scanf("%d %f", &s1.roll_no, &s1.marks);

    printf("Roll No = %d\n", s1.roll_no);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}