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
    int a= 0;
    scanf_s("%c", &a);
    int c = a -32;
    /*scanf_s("%c",&ch);*/
   /* float b = 0;
    scanf_s("%f %f", &a, &b);
    int sum = a + b;*/
    printf("%c\n", c);
    return 0;
}