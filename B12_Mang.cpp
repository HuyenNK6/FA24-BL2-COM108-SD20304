#include <stdio.h>
void bai1(){
	//1. Khoi tao mang co 6 phan tu
	int arr[6] = {3,8,1,2,9,6};
	//2. truy xuat phan tu thong qua vi tri
	printf("arr[0] = %d\n", arr[0]);
	printf("arr[1] = %d\n", arr[1]);
	printf("arr[2] = %d\n", arr[2]);
	printf("arr[3] = %d\n", arr[3]);
	printf("arr[4] = %d\n", arr[4]);
	printf("arr[5] = %d\n", arr[5]);
	//3. gán giá tri cho phan tu arr tai vi tri 0
	arr[0] = 10;
	printf("arr[0] = %d\n", arr[0]);
}
void bai2(){
	//1. Nhap so luong Sv
	int soLuong;
	printf("Moi nhap so luong SV: ");
	scanf("%d", &soLuong);
	//2. Khai bao mang arrCanNang có kích thuoc= soLuong
	float arrCanNang [soLuong];
	//3. Nhap mang -> su dung vong for
	printf("----------NHAP MANG----------\n");
	for (int i = 0; i < soLuong ; i++){
		printf("Nhap can nang SV thu %d = ",i);
		scanf("%f", &arrCanNang[i]); //phan tu tai vi tri i
	}
	//4. Xuat mang -> su dung vong for
	for (int i = 0; i <soLuong ; i++){
		printf("Can nang sv thu %d la %.2f\n", i, arrCanNang[i]);
	}
}
void bai3(){
	//1. nhap so luong
	int n;
	printf("Moi nhap so luong laptop: ");
	scanf("%d", &n);
	//2. Khai bao mang
	
	//3. Nhap mang
	
	//4. Xuat mang
}

int main(){
	bai1();
	bai2();
	return 0;
}
