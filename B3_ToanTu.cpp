#include <stdio.h>

int main(){
	int a =5, b=2;
	int c = 5/2; //chia lay nguyen
	int d = 5%2; //chia lay du
	printf("c= %d \n", c); 
	printf("d= %d \n", d);
	//// toan tu ++ va --
	int ketQua = ++a - (--b); // a= 6 b= 1 => 6-1=5 => thuc hien tang/giam truoc
	printf("Ket qua= %d \n", ketQua);
	int ketQua2 = a++ - (b--); // a= 6 b= 1 => 6-1=5 => thuc hien tang/giam sau
	printf("Ket qua 2= %d \n", ketQua2);
	//sau khi tinh toan -> a =7 b= 0
	printf("a= %d \n", a);
	printf("b= %d \n", b);
	/////////toan tu so sanh
	printf("a > b = %d \n", a>b); //7 > 0 ?? true -> 1
	printf("a < b = %d \n", a<b); //7 < 0 ?? false -> 0
	printf("a != b = %d \n", a!=b); //7 != 0 ?? true -> 1
	printf("ketQua != ketQua2 = %d \n", ketQua!=ketQua2); 
	//5 != 5 => false => 0
	////toan tu logic
	//diemToan, diemVan >= 8 -> hoc sinh Gioi
	int diemToan= 10;
	int diemVan = 5;
	int hocLuc = diemToan >= 8 && diemVan >=8;
	//true 1 -> hoc luc gioi
	//false 0 -> ko dc hoc luc gioi
	printf("hoc luc= %d \n", hocLuc);
	bool hanhKiem = 1; // true -> false và false -> true
	printf("!hanhKiem= %d \n", !hanhKiem);
    int test = !((diemToan <= diemVan) || (hanhKiem == 1));
    // (false || true) => true -> !true = false =0
    printf ("test = %d \n", test);
    ////toan tu gan
    int i = 3;
    int j =0;
	j+= i;
    printf("j= %d \n", j);
	return 0;
}
