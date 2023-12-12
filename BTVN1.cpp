#include <stdio.h>
#include <math.h>

int main() {
    
   float a;
   printf("Nhap a: ");
   scanf("%f", &a);
   float b;
   printf("Nhap b: ");
   scanf("%f", &b);
   float c;
   printf("Nhap c: ");
   scanf("%f", &c);
    float p = a+b+c;
    if ((a+b>c)&&(a+c>b)&&(b+c>a)){
	
        float s =sqrt(p*(p-a)*(p-b)*(p-c));
        printf("dien tich : %f\n",s);
	}else{
           printf("tam giac khong hop le");
		}

    return 0;
}
