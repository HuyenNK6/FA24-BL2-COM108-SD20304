#include <stdio.h>

int main(){
	int luaChon;
	do{
		printf("------------MENU------------\n");
		printf("1. BAI 1\n");
		printf("2. BAI 2\n");
		printf("3. BAI 3\n");
		printf("4. BAI 4\n");
		printf("5. BAI 5\n");
		printf("0. Thoat CT\n");
		printf("------------------------------\n");
		printf("Moi nhap lua chon (0-5): ");
		scanf("%d", &luaChon);	
		switch(luaChon){
			case 1:
				printf("1. BAI 1\n");
				//code 
				break;
			case 2:
				printf("2. BAI 2\n");
				//code
				break;
			case 0:
				printf("Thoat CT\n");
				return 0;
			default:
				printf("Moi ban nhap lai (1-5)!!!\n");
				break;				
		}
	}while(luaChon != 0);

	return 0;
}
