#include<stdio.h>
struct CourseRecord
{
    char firstname[30];
    char lastname[30];
    char rollnumber[10];
    char department[30];
    char coursecode[30];
    int testmarks[3];
};

float averageTestmarks(struct CourseRecord student)
{
    int s=0; //sum=0
    for (int i=0;i<3;i++)
    s=s+student.testmarks[i];
    return (float)s/3;
}

int hasPassed(struct CourseRecord student)
{
    for (int i=0;i<3;i++)
    {
        if (student.testmarks[i]<35) //pass marks=35
        {
            return 0;//false
        }
    }
    return 1; //true
    
}
int main()
{
    struct CourseRecord student1 ={"Sam","Hathaway","23A120","CSE","CS101",{40,50,45}};
    printf("\nAverage test marks: %.2f",averageTestmarks(student1));
    printf("\n%s",hasPassed(student1)?"Pass":"Fail");

    return 0;
}