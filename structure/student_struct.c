/*
 * structure.c
 *
 *  Created on: Jan. 7, 2021
 *      Author: rohan
 */
#include<stdio.h>
#include<string.h>

struct student{
	char sname[10];
	int sid,mark;
	};

int main(){
	struct student s1;
	struct student s2;

	printf("Enter student1 name:\n");
	scanf("%s",s1.sname);
	s1.sid = 1;
	s1.mark = 90;

	printf("Enter student2 name:\n");
	scanf("%s",s2.sname);
	s2.sid = 2;
	s2.mark = 100;

	printf("Name : %s\n",s1.sname);
	printf("ID :%d\n", s1.sid);
	printf("Marks: %d\n", s1.mark);
	printf("******************\n");
	printf("Name : %s\n",s2.sname);
	printf("ID :%d\n", s2.sid);
	printf("Marks: %d\n", s2.mark);


}
