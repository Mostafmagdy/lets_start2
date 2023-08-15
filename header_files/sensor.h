#ifndef _SENSOR_H
#define _SENSOR_H
#define PI_VALUE (3.1489)
#define EXPERISSION (2*3)
#\
define \
MULTIPLE_LINES \
77
#define sum(num1,num2) (num1+num2)
#define swap(x,y) \
{ \
	x=y; \
	y=x; \	
} ;
#define SET_BIT(REG,BIT_NUM) (REG|=(1<<BIT_NUM))
#define CLEAR_BIT(REG,BIT_NUM) (REG&=~(1<<BIT_NUM))
#define TOGGLE_BIT(REG,BIT_NUM) (REG^=(1<<BIT_NUM))

void sensor(void);
#endif