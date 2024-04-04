#include<stdio.h>
struct student{
    int rollno;
    char name[100];
    char address[100];
    int age;
    float averagemarks;
};
void scandetails(struct student class[], int n);
void printdetails(struct student class[], int n);
int main() {
    int n;
    printf("Enter the no of students : ");
    scanf("%d", &n);
    struct student class[n];
    
    scandetails(class,n);
    printdetails(class,n);
    return 0;


}
void scandetails(struct student class[], int n){
    for(int i= 0 ; i < n ; i++){
    printf("Enter the Roll No of the student-%d = ",(i+1));
    scanf("%d", &class[i].rollno);
    getchar();
    printf(" Enter the name of the student-%d : ", (i+1));
    gets(class[i].name);
    printf("Enter the Address of the student-%d : ", (i+1));
    gets(class[i].address);
    printf("Enter the age of the student-%d : ",(i+1));
    scanf("%d", &class[i].age);
    printf("Enter the average marks of the student-%d : ",(i+1));
    scanf("%f", &class[i].averagemarks);
}
}
void printdetails(struct student class[], int n){
    for(int i = 0 ; i <n ; i++){
        printf("The Roll no of the student-%d is : ", (i+1));
        printf("%d\n", class[i].rollno);
        printf("The name of the student-%d is : ", (i+1));
        puts(class[i].name);
        printf("\n");
        printf("The address of the student-%d is : ",(i+1));
        puts(class[i].address);
        printf("\n");
        printf("The age of the student -%d is : %d\n", (i+1),class[0].age);
        printf("The Average marks of the student-%d is : %f", (i+1),class[i].averagemarks);
    }
}
