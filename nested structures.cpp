#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
};
struct student{
	int id;
	char name[40];
	float cgpa;
	char college[40];
	struct Date dateOfBirth;
};
int main(){
	struct student s1 = {1,"jnaneswari",7.7,"aus",{02,04,20007}};
 printf("ID\tName\tCGPA\tCollege\tDOB\t\n");
 printf("%d\t %s\t %.2f\t %s\t %d-%d-%d \n",s1.id,s1.name,s1.cgpa,s1.college,s1.dateOfBirth.day,s1.dateOfBirth.month,s1.dateOfBirth.year);
 printf("\n");
 printf("Age is:%d\n",2025-s1.dateOfBirth.year);
}