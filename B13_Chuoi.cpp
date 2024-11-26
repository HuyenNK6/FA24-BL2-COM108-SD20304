//B13_Chuoi -> slide 7
#include <stdio.h>

int main(){
	char ten[8] = "HuyenNK";
	printf("Ten la %s\n", ten);
	char monHoc[50]; //mang ky tu mon Hoc co do dai  = 50
	printf("Moi nhap ten mon hoc: ");
	//scanf("%s", &monHoc); //=> vì ko nhan dc dau cach
	gets(monHoc);
	printf("Ten mon hoc la: %s\n", monHoc);
	char nyc[50];
	printf("Moi nhap ten NYC: ");
	gets(nyc);
	printf("Ten NYC la: %s\n", nyc);
	
	return 0;
}
