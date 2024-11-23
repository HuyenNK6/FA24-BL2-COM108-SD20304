#include <stdio.h>

int main(){
	int luaChon;
	do{
		printf("-----------MENU-------\n");
		printf("1. Tinh tong\n");
		printf("2. Tinh hoc phi\n");
		printf("3. Tinh thue\n");
		printf("0. Thoat CT\n");
		printf("-----------------------\n");
		printf("Moi nhap lua chon: ");
		scanf("%d",&luaChon);
		switch(luaChon){
			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 0:
				printf("0. Thoat CT\n");
				return 0;
			default: 
				printf("Moi nhap lai (1-3)!!\n");
		}
	}while(luaChon != 0);
	
	
	return 0;
}
