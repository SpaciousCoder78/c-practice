#include <stdio.h>
//array of structs
struct student{
    int sno;
    char section;
    float marks;
}stu;
int main(){
    printf("Enter sno");
    scanf("%d",&stu.sno);
    printf("Enter section");
    scanf("%c",&stu.section);
    printf("Enter marks");
    scanf("%f",&stu.marks);

    printf("Details are:\n");
    printf("SNo: %d\n",stu.sno);
    printf("Section: %c\n",stu.section);
    printf("Marks: %f\n",stu.marks);
}
