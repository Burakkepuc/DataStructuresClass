#include <stdio.h>
#define SIZE 5

int main(){
	 int i;
   int dizi[SIZE]= {1,20,5,78,30};
	int element,position;
	scanf("%d%d",&element,&position);
	
	if(position >= 0 && position <= SIZE ){
		for(i = SIZE ; i > position;i--){
			dizi[i] = dizi[i - 1];
		}
		dizi[position] = element;
	 for(i = 0 ; i< SIZE+1  ; i++){
       printf("%d ",dizi[i]);
   }
		
	}
	else{
		printf("Invalid ");
	}
   
   
   
  
}
