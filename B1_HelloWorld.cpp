#include <stdio.h>

int main(){
	//ket thuc moi dong code la dau ;
	printf("Hello world \n");
	//B1: KHAI BAO BIEN
	//C1: <kieu du lieu> <tên bien>;
	int tuoi; //so nguyen
	float chieuCao; //so thuc
	float canNang; 
	//B2: gán giá tri
	tuoi = 18;
	//su dung to hop phim Ctrl + space
	chieuCao = 152;
	canNang = 40.5;
	//B3: IN RA MAN HINH =>  \n xuong dong moi
	printf("Tuoi = %d \n", tuoi);
	printf("Chieu cao = %.0f \n", chieuCao); //.0 lay 0 so thap phan sau dau phay
	printf("Can nang = %.2f \n", canNang);//.2 lay 2 so thap phan sau dau phay
	
	//C1: <kieu du lieu> <tên bien> = <gia_tri>;
	int namSinh= 2006;
	double diemToan= 8;
	double diemVan = 7.5;
	printf("Nam sinh = %d \n", namSinh);
	printf("Diem Toan = %lf - Van= %lf \n", diemToan, diemVan); 
	//%lf : chu l ko phai so 1
	
	return 0;
}
//day la comment 1 dòng
/*
	day la
	comment nhieu dòng
*/
/*
	BTVN (trong note ly thuyet)
*/
