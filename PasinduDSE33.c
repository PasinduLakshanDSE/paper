#include<stdio.h>
main(){
	int g,h=1;
		do{
			for(g=5;g>=3;g--){
				printf("%d\n",g-h);
				
			}
			++h;
		}
		while(h<=2);
return 0;
}
