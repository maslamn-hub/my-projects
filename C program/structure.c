#include<stdio.h>
struct Student{
    int roll_no;
    char name[50];
    float total_mark;
    float percentage;
    char grade;
};
float calculatePercentage(float total_marks){
    return (total_marks/500)*100;
}
char calculateGrade(float percentage){
    if(percentage>=90)
       return 'O';
    else if(percentage>=80)
       return 'A';
    else if (percentage >= 70)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else
        return 'D';
}
void updateStudent(struct Student*s){
    s->percentage = calculatePercentage(s->total_mark);
    s->grade = calculateGrade(s->percentage);
}
int main(){
struct Student students[4];
int i;
for(i=0;i<4;i++){
 printf("\nEnter details for student%d\n",i+1);
 printf("Enter Roll.no");
 scanf("%d",&students[i].roll_no);
 printf("Name: ");
 scanf(" %[^\n]",&students[i].name);
 printf("Total Mark (out of 500): ");
 scanf("%f", &students[i].total_mark);
 updateStudent(&students[i]);
}
printf("\nStudent Records\n");
printf("Roll No\tName\t\tTotal\tPercentage\tGrade\n");
for(i=0;i<4;i++){
    printf("%d\t%s\t\t%.2f\t%.2f\t%c\n",students[i].roll_no,students[i].name,students[i].total_mark,students[i].percentage,students[i].grade);
}
return 0;
}
