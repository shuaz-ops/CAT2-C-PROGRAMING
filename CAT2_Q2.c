
#include<stdio.h>
int main(){

	int i;
	int j;

	
	int scores[4][2]={{65,92},{84,72},{35,70},{59,69}};


	for ( i=0;i<4;i++){

		
		for( j=0;j<2;j++){

			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
			
		}
	}
return 0;
}