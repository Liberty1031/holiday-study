//#include<stdio.h>
//#include<string.h>
//int main(){
//	/*#define a 100*/
////	printf("i love you!");
////2026.2.3
////int num1 = 0;
////int num2 = 0;
////scanf_s("%d %d",&num1,&num2);
////int sum = num1 + num2;
////printf("%d\n",sum);
////2026.2.4//
//	/*int arr[a] = { 0 };*/
//	/*printf("%d",a);*/
//	char arr1[] = {'a','b','c','d','e','f'};
//	/*char arr2[] = { 'a','b','c','d' };*/
//	/*printf("%s\n", arr1);
//	printf("%s", arr2);*/
//	printf("%d", strlen(arr1));
//		return 0;
//}
#include<stdio.h>
int main() {
    /*字母大小写*/
   // int a= 0;
   // scanf_s("%c", &a);
   // int c = a -32;
   // /*scanf_s("%c",&ch);*/
   ///* float b = 0;
   // scanf_s("%f %f", &a, &b);
   // int sum = a + b;*/
   // printf("%c\n", c);

    /*由123组成的三位数*/
   ///* for (int i = 1; i < 5; i++) {
   //     for (int j = 1; j < 5; j++) {
   //         for (int k = 1; k < 5; k++) {
   //             if (i != j && j != k && i != k) { printf("%d\n", i * 100 + j * 10 + k * 1); }
   //         }
   //     }
   // };*/
   /*分段利润问题*/
   /* double e = 0;
    scanf_s("%lf", &e);
                    if (e <= 10) { printf("%lf", e * 1.1 ); }
                    if (e > 10 &&e <= 20) { printf("%lf", e * 1.075 + 0.25); }
                    if (e > 20 && e <= 40) { printf("%lf", e*1.05 + 0.75); }
                    if (e > 40 && e <= 60) { printf("%lf", e * 1.03 + 1.55); }
                    if (e > 60 && e <= 100) { printf("%lf", e * 1.015 + 3.45); }
                    if (e > 100) { printf("%lf", e * 1.01 + 2.95); }*/

    //int i = 0;
    //int j = 0;
    //for (i = 2; i < 85; i++) {
    //    for (j = 2; j <85; j++) {
    //        int a = (i-j)*(i-j) / 4 - 100;
    //        if (i * j == 168&&i%2==0&&j%2==0) {
    //            printf("%d\n", a
    //            );
    //        };
    //    }        
    //};

    /*正三角形135*/
    /*int i, j, k;
    for (i = 1; i < 4; i++) {
        for (j = 1; j <= 3 - i; j++) { printf(" "); }
        for (k = 1; k <= i * 2 - 1; k++) { printf("*"); }
        printf("\n");
    }*/

    /*直角三角形*/
    /*int i, j;
    for (i = 1; i <= 4; i++) {
        printf("\n");
            for (j = i; j > 0; j--) {
                printf("*");
            }
    }*/

   //99乘法表
   /* int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d", i, j, i * j);
        }
        printf("\n");
    }*/

   //打印菱形
   /* int i, j, k, m, n, p;
    for (i = 1; i < 4; i++) {
        for (j = 1; j <= 3 - i; j++) { printf(" "); }
        for (k = 1; k <= 2 * i - 1; k++) { printf("*"); }
        printf("\n");
    }
    for (m = 1; m < 3; m++) {
        for (n = 1; n <= m; n++) { printf(" "); }
        for (p = 1; p <= 5 - m * 2; p++) { printf("*"); }
        printf("\n");
    }*/

    int X0, Y0, r, X1, Y1;
    scanf_s("%d,%d %d %d,%d", &X0, &Y0,&r,&X1,&Y1);
    if (r == (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("On the circle"); }
    if (r >= (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("Outside"); }
    if (r <= (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("Inside"); }
        return 0;
    }