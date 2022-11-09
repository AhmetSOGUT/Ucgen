#include <stdio.h>


int main(){
	
	int satir,k,sayisi;
   scanf("%d",&satir);
    
	for( k=1 ; k<=satir ; k++)
	{    
        for(sayisi=1;sayisi <= k;sayisi++)
        printf("*");
	    
        printf("\n");
    }  
        return 0;
	}