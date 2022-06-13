#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float d,c,s;
printf("Nhap vao gia tri d:");
scanf("%.2f", &d);
c = d*3.14;
s = d*d/4*3.14;
printf("c = %.2f\n", c);
printf("s = %.2f", s);
	return 0;
}
