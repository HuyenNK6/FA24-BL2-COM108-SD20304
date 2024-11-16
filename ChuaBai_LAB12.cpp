#include <stdio.h>
#include <stdbool.h>
int main(){
	int luaChon;
	do{
		printf("----------MENU-----------\n");
		printf("1. Bai 1: Toc do\n ");
		printf("2. Bai 2: Gioi tinh\n");
		printf("3. Bai 3: Tinh Tong\n");
		printf("4.: Thoat\n");
		printf("-------------------------\n");
		printf("Moi ban nhap lua chon:");
		scanf("%d", &luaChon);
		switch(luaChon){
		
		     case 1:{
		     	int vanToc;
				printf("Bai 1: Toc do:\n");
				printf("Moi ban nhap van toc\n");
		     	scanf("%d", &vanToc);
		     	printf("Van toc cua ban la = %d", vanToc);
		     	if (vanToc>100){
		     		printf("Ban da qua toc do cho phep\n");
				 }else{
				 	printf("Toc do phu hop\n");
				 }
		     	break;
			 }
		     	
		    case 2:{
		    	printf("Bai 2: Gioi tinh:\n");
		    	//bool gioiTinh;
		    	int gioiTinh;
		    	printf("Moi ban nhap gioi tinh\n");
		    	
		    	scanf("%d",&gioiTinh);
		    	if(gioiTinh==0){
		    		printf("gioi tinh cua ban la nu \n");
				}else if(gioiTinh==1){
					printf("gioi tinh cua ban la nam \n ");
				}else{
					printf("gioi tinh khac");
				}
				
		    	
		    	break;
		    	
			}
		    	
		    case 3: {
				printf("Bai 3: Tinh Tong:\n");
		        int n;
				int tong = 0;
		        printf("Moi ban nhap so nguyen: \n");
		        scanf("%d",&n);
		        if( n <= 0 ){
		        	printf("moi ban nhap so nguyen duong \n");
				}else{
					printf("so nguyen duong cua ban la %d \n",n);
					if( n%2 == 0 ){
						for(int i=0; i<=n; i++){
							if( i%2 == 0 ){
								tong += i; //tong=tong+i
							}
						}	
						printf("Tong cac so chan tu 1 den %d la %d \n",n,tong);			
					}else{
						for(int i=0; i<=n; i++){
							if( i%2 != 0 ){
								tong += i; //tong=tong+i
							}
						}	
						printf("tong cac so le tu 1 den %d la %d \n",n,tong);
					}
					
					
				}
		        break;
			}
		        
		    case 4:
		    	printf("Thoat CT\n");
		    	//break; -> thoat khoi switch case
		    	return 0;
		    default:
		    	printf("Sai moi ban nhap lai:");
		    	break;
        }
		    
	}while(luaChon!=4);
	printf("Toi da hoan thanh bai thi!!!");
	
	return 0;
}
