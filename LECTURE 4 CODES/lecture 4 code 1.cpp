#include<stdio.h>
void funcOne(void) {
	printf("funcOne was called! \n");
}; //end of funcOne

void funcTwo(void) {
	printf("funcTwo was called! \n");
}//end of funcTwo

void main(void) {
	funcOne();
	funcTwo();
	printf("Address of funcOne : 0x%0x \n", funcOne);
	printf("Address of funcTwo : 0x%0x \n", funcTwo);
}//end of main
