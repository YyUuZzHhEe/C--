#include <stdio.h>
#define NUMBER_OF_STUDENTS 10
#define NUMBER_OF_SUBJECTS 5
double personal_aver[NUMBER_OF_STUDENTS];
double subject_aver [NUMBER_OF_SUBJECTS];
void int aver_of_stdutent (int score[][],int amount_of_subject)
{
	int sum[NUMBER_OF_STUDENTS];
	int sum = 0;
	int i, j;
	for (i = 0; i < NUMBER_OF_STUDENTS; ++i)
	{
		for (j = 0; j < NUMBER_OF_SUBJECTS; j++)
		{
			sum+=score[i][j];
		}
		personal_aver[i]=sum/NUMBER_OF_SUBJECTS;
	}
}
void int aver_of_subject (int score[][], int subject_aver[])
{
	int sum[NUMBER_OF_SUBJECTS];
	int sum = 0, i, j;
	for (i = 0; i < NUMBER_OF_SUBJECTS; ++i)
	{
		for (j = 0; j < NUMBER_OF_STUDENTS; ++j)
		{
			sum += score[j][i];
		}
		subject_aver[i]= sum/NUMBER_OF_STUDENTS;
	}
}
int main ()
{  
	int score[NUMBER_OF_STUDENTS][NUMBER_OF_SUBJECTS];
	for (i = 0; i < NUMBER_OF_STUDENTS; ++i)
	{
		for (j = 0; j < NUMBER_OF_SUBJECTS; ++j)
		{
			printf("请输入第%d位同学的第%d门成绩:\n",i,j);
			scanf("%d",&score[i][j]);
		}
	}
	aver_of_stdutent (score, personal_aver[NUMBER_OF_STUDENTS]);
	aver_of_subject(score, subject_aver[NUMBER_OF_SUBJECTS] ) 
	for (i = 0; i < NUMBER_OF_STUDENTS; ++i)
	{
		printf("第%d个学生的平均分：%lf\n", i+1, personal_aver[i]);
	}
	for (j = 0; j < NUMBER_OF_SUBJECTS; ++j)
	{
		printf("第%d门成绩的平均分为%lf\n", j+1, subject_aver[j]);
	}
	return 0;
}