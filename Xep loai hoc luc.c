#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Toan, Ly, Hoa, Sinh, Tong, TBC;
	printf ("Nhap vao diem Toan: ");
	scanf ("%f", &Toan);
	printf ("Nhap vao diem Ly: ");
	scanf ("%f", &Ly);
	printf ("Nhap vao diem Hoa: ");
	scanf ("%f", &Hoa);
	printf ("Nhap vao diem Sinh: ");
	scanf ("%f", &Sinh);
	
	Tong = Toan + Ly + Hoa + Sinh;
	TBC = Tong/4;
	
	if (TBC < 4) {	
	printf ("Diem trung binh la %.2f: Hoc sinh yeu", TBC);
	}	
	else if (TBC <6.5) {
	printf ("Diem trung binh la %.2f: Hoc sinh trung binh", TBC);
	}
	else if (TBC < 8 ) {
	printf ("Diem trung binh la %.2f: hoc sinh kha", TBC);
	}
	else printf ("hDiem trung binh la %.2f: hoc sinh gioi", TBC);
	return 0;
}
