#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct {
	int x;
	float y;
} foo;

 typedef struct {
	int age;
	char *name;
}person;

int main(){
/*	foo var;
	foo *pvar;
	pvar = malloc(sizeof(pvar));
	
	var.x = 5;
	printf("%d\n",var.x);
	(&var) -> y = 14.3;
	printf("%.2f\n",(&var) -> y);
	pvar->x = 22;
	printf("%d\n ",pvar -> x);
	(*pvar).y = 64.2;
	printf("%.2f",(*pvar).y);*/
	
	//declare a new struct
	 person burak;
	//set some data
	burak.age = 24;
	burak.name = malloc(6 * sizeof(char));
	
	strcpy(burak.name,"Burak");
	printf("%s\n",burak.name);
	
	//pointer struct;
	 person *burak_ptr = &burak;
	
	(*burak_ptr).age = 25;
	(*burak_ptr).name = realloc((*burak_ptr).name, 7 * sizeof(char));
	strcpy((*burak_ptr).name,"Burak !!");
	printf("%s\n",(*burak_ptr).name);
	
	burak_ptr -> age = 30;
	burak_ptr->name = realloc(burak_ptr -> name,8 * sizeof(char));
	strcpy(burak_ptr->name,"Burak!!!");
	printf("%s\n",(burak_ptr -> name));
		printf("%d\n",burak.age);
	//better syntax
	//burak_ptr -> age
	
}
