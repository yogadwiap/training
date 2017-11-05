#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10

int calc();
int deletedup();
int meanmm();
int sorting();
int fungsitambah(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6);
int fungsikurang(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6);
int fungsibagi(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6);
int fungsikali(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6);
int main(){
    char user[6], password[6];
	int pilih;
    for(int i=0; i<3; i++){
        printf(" \n       Silahkan masukkan username dan password anda\n");
        printf("Masukkan username anda :\n");
        scanf("%s", &user);

        printf("Masukkan password anda :\n");
        scanf("%s", &password);

        if ((strcmp(user,"yoga")==0)&&(strcmp(password,"ftui16")==0)) {
			printf("Berhasil Login!\n\n");
            break;
        } else {
            printf("Maaf username atau password anda salah\n");
		}
	}

		int pil;
		printf("=====MENU UTAMA=====\n");
		printf("1.Calculator Sederhana\n2.Mean-Median-Modus\n3.Sorting Data\n4.Delete Duplicate Data\n");
		printf("Masukkan pilihan anda: ");
		scanf("%d",&pil);
		switch(pil){
		case 1: calc();break;
		case 2: meanmm();break;
		case 3: sorting();break;
		case 4: deletedup();break;
	}
	
	}

		int calc(){
		int q,w,e,r,t,y,z,jumlah;
	printf("Masukkan angka:");
	scanf("%d",&q);
	printf("Masukkan angka:");
	scanf("%d",&w);
	printf("Masukkan angka:");
	scanf("%d",&e);
	printf("Masukkan angka:");
	scanf("%d",&r);
	printf("Masukkan angka:");
	scanf("%d",&t);
	printf("Masukkan angka:");
	scanf("%d",&y);
	
	printf("1. Pertambahan\n 2. Pengurangan\n 3. Pembagian\n 4.Perkalian\n");
	printf("masukkan pilihan anda: ");
	scanf("%d",&z);
	switch(z){
		case 1:
		jumlah = fungsitambah(q,w,e,r,t,y);
		break;
		case 2:
		jumlah = fungsikurang(q,w,e,r,t,y);
		break;
		case 3:
		jumlah = fungsibagi(q,w,e,r,t,y);
		break;
		case 4:
		jumlah = fungsikali(q,w,e,r,t,y);
		break;
		
	
		
	}
	printf("hasilnya : %d ",jumlah);
	return 0;
	}
	
	int fungsitambah(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6){
	int hasil;
	hasil = angka1+angka2+angka3+angka4+angka5+angka6;
	return hasil;
	
	}
	int fungsikurang(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6){		
	int hasil;
	hasil = angka1-angka2-angka3-angka4-angka5-angka6;
	return hasil;
	}
	int fungsibagi(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6){		
	int hasil;
	hasil = angka1/angka2/angka3/angka4/angka5/angka6;
	return hasil;
	}
	int fungsikali(int angka1,int angka2,int angka3,int angka4,int angka5,int angka6){		
	int hasil;
	hasil = angka1*angka2*angka3*angka4*angka5*angka6;
	return hasil;
		}		
			
		int meanmm(){
			int a,b;
			printf("====Data dari tabel====\n");
			printf("25,50,65,70,50,30,60,70,20,20\n");
			a = (25+50+65+70+50+30+60+70+20+20)/10;
			printf("mean : %d\n",a);
			printf("modus : 20,50,70\n");
			b = (50+50)/2;
			printf("median : %d\n",b);
			return main();
		}
		
		int sorting(){
			
			int data[MAX] = {25,50,65,70,50,30,60,70,20,20};

			void printline(int count) {
			int i;
			for(i = 0;i <count-1;i++) {
			printf("=");
			}
			printf("=\n");
			}

			void display() {
			int i;
			printf("[");
			for(i = 0;i<MAX;i++) {
			printf("%d ", data[i]);
			}
			printf("]\n");
			}

			void selectionSort() {
			int indexMin,i,j;
			for(i = 0; i < MAX-1; i++) { 
			indexMin = i; 
			for(j = i+1;j<MAX;j++) {
			if(data[j] < data[indexMin]) {
            indexMin = j;
			}
		}

			if(indexMin != i) { 
			int temp = data[indexMin];
			data[indexMin] = data[i];
			data[i] = temp;
			}           
   
			}
		}  
			printf("Input Data: ");
			display();
			printline(50);
			selectionSort();
			printf("Output Data: ");
			display();
			printline(50);
			
}
		int deletedup(){
	int i, j, k;
	int data[10] = {25,50,65,70,50,30,60,70,20,20};
   printf("\nHasilnya  : ");
   for (i = 0; i < 10; i++) {
      for (j = i + 1; j < 10;) {
         if (data[j] == data[i]) {
            for (k = j; k < 10; k++) {
               data[k] = data[k + 1];
            }
            data[10]--;
         } else
            j++;
      }
   }
 
   for (i = 0; i < 10; i++) {
      printf("%d ", data[i]);
   }
 
   return (0);
}

		

