#include<stdio.h>

<<<<<<< HEAD
#define new


=======
#define slave_new
#define master_new
#define slave_new2 //for cancle merge

//local_branch_test
>>>>>>> slave
int main()
{
	int kor, eng, math;
	int sum = 0;

	math = 80;
	eng = 100;
	kor = 90;
	sum = 80 + 100 + 90;

	printf("This program print report card.\n");

	printf("Korean : %d\n", kor);
	printf("English : %d\n", eng);
	printf("Math : %d\n", math);
	printf("total : %d\n", sum);
	
	printf("test\n");
	return 0;
}
