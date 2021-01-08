/Program to find how muchmemmory is occupied by structure


#include<stdio.h>

struct Emp
{
        int Emp_id;         
        char E_name[20];
        float salary;
};

int main()
{
         struct Emp e1;

        printf("size of employee id: %d\n",sizeof(e1.Emp_id));
        printf("size of employee name: %d\n",sizeof(e1.E_name));
        printf("size of slary: %d\n",sizeof(e1.salary));
        printf("size of employee structure: %d\n",sizeof(e1));     //passing structure variable to size of function

        return 0;
}
