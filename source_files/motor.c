#include"D:\course_ahmed abdelghafar_code\tasks\course_c\modules\header_files/motor.h"
#include<stdio.h>

unsigned int dummy_var;
static unsigned int motor_version=123;
static void motor_print(void)
{
	printf("mya mya");
}
void motor_move_forward(void)
{
	scanf("%d",&dummy_var);

	printf("move forward");
	motor_print();
}
unsigned int motor_get_model()
{
	return motor_version;
}
