#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yearWithUs, bizDone;
	printf ("nhap vao so nam kinh nghiem: ");
	scanf ("%d", &yearWithUs);
	printf ("nhap vao so doanh thu: ");
	scanf ("%d", &bizDone);
	
	if (yearWithUs >=10) 
		if (bizDone > 5000000) 	{
		printf ("Classified as an MVS");
	}
		else {	
			printf ("A little more effort requied");
	}
	else {	
	printf ("A little more effort requied");
	}
	return 0;
}
