#include <stdio.h>
struct student
{
	char rollno[10];
	char name[30];
    	int m[4];
};

int main()
{
	struct student s[3];
	int i,j;
	float avg,total;
	char grade;
	for(i=0;i<3;i++)
	{
		total = 0;
		scanf("%s", s[i].rollno);
		scanf("%s", s[i].name);
		for(j=0;j<4;j++)
		{
			scanf("%d",&s[i].m[j]);
			total = total + s[i].m[j];
		}
		avg = total/4.0;
		if(avg >=90.0)
		{
			grade = 'A';
		}
		if(avg >=70.0)
		{
			grade = 'B';
		}			
		else
		{
			grade = 'C';
		}
		printf("rollno = %s\t name = %s\t grade = %c\n",s[i].rollno,s[i].name,grade);
	}
}