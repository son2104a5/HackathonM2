#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,m,j,prime;
	int sum,sum_prime;
	int max,min;
	int numbers[100];
	int bien_doi;
	int key;
	do{
	printf("\n*********************MENU***********************\n");
	printf("1. Nhap gia tri n phan tu cua mang\n");
	printf("2. In gia tri cac phan tu trong mang\n");
	printf("3. Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
	printf("4. In ra gia tri lon nhat va gia tri nho nhat trong mang\n");
	printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n");
	printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
	printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 theo thu tu tang dan, cac phan tu con lai o giua mang theo thu tu giam dan\n");
	printf("8. Nhap gia tri m vao ban phim, chem gia tri m vao mang(sap xep tang dan) dung vi tri\n");
	printf("9. Thoat\n");
	int choice;
	printf("Vui long chon lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("nhap n: ");
 	        scanf("%d",&n);
	        for(int i=0;i<n;i++){
		        printf("numbers[%d]=",i);
		        scanf("%d",&numbers[i]);
	        }
	        break;
	    case 2:
	    	printf("Cac gia tri hien co trong mang numbers la:\n");
	        for(int i=0;i<n;i++){
		        printf("%d\t",numbers[i]);
	        }
	        break;
	    case 3:
	        for(int i=0;i<n;i++){
		        if(numbers[i]%2==0||numbers[i]%3==0){
			        sum+=numbers[i];
		        }
	        }
	        printf("Tong cac so chia het cho 2 va 3 trong mang la: %d\n",sum);
	        break;
	    case 4:   
	        max=numbers[0];
	        min=numbers[0];
	        for(int i=0;i<n;i++){
		        if(max<numbers[i]){
			        max=numbers[i];
		        }
		        if(min>numbers[i]){
			        min=numbers[i];
		        }
	        }
 	        printf("Gia tri max trong mangla:%d\nGia tri min trong mang la:%d\n",max,min);
 	        break;
 	    case 5:
 	    	for(int i=1;i<n;i++){
 	    		key=numbers[i];
 	    		j=i-1;
 	    		while(j>=0&&numbers[j]>key){
 	    			numbers[j+1]=numbers[j];
 	    			j=j-1;
				}
				numbers[j+1]=key;
			}
			printf("Mang tang dan:\n");
			for(int i=0;i<n;i++){
		        printf("%d\t",numbers[i]);
	        }
 	    	break;
 	    case 6:
 	    	sum_prime=0;
 	    	for(int i=1;i<=n;i++){
 	    		prime=0;
 	    		for(int j=1;j<=i;j++){
 	    			if(numbers[i]%j==0){
 	    				prime++;
					}
				}
				if(prime<=2){
					sum_prime+=numbers[i];
				}
			}
			printf("Tong cac phan tu la so nguyen to trong mang la:%d",sum_prime);
			break;
		case 7:
			for(int i=0;i<n;i++){
 	    		key=numbers[i];
 	    		j=i-1;
 	    		while(j>=0&&numbers[j]>key){
 	    			if(numbers[j]%5==0&&numbers[j]%2!=0){
					    numbers[j]=numbers[j-1];
					    numbers[j-1]=key;
					}
 	    			if(numbers[j]%5&&numbers[j]%2==0){
 	    				numbers[n-j+1]=numbers[n-j];
 	    				numbers[n-j]=key;
					}
					j--;
				}
			}
			printf("Mang duoc sap xep lai:\n");
			for(int i=0;i<n;i++){
				printf("%d\t",numbers[i]);
			}
			break;
		case 8:
			printf("Nhap m: ");
			scanf("%d",&m);
			for(int i=0;i<n;i++){
				if(m>numbers[i]){
					bien_doi=numbers[i];
					numbers[i]=m;
					numbers[i-1]=bien_doi;
				}
			}
			break;
		case 9:
			exit(0);
		default:
	    	printf("Vui long nhap lai gia tri tu 1-9");
	    }
	}while(1==1);
}
