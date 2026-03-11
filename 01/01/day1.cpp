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
    /*判断一个数数是否为素数*/
    //int n ;
    //int IsPrime;
    //scanf_s("%d",& n);
    //    if (n <= 1) {
    //        IsPrime = 0;
    //    }else
    //    if (n == 2) {
    //        IsPrime = 1;
    //    }else
    //    
    //    for (int i = 2; i*i <= n; i++) {
    //        if (n % i == 0) { 
    //            IsPrime = 0;
    //            break;// 不需要else！IsPrime默认是1，没找到因数就保持1
    //        }
    //    }
    //    if (IsPrime == 1) { printf("YES"); }
    //    else { printf("NO"); }
    
//判断一个数是否为素数（注意for循环中对i的定义方法不同
    /*int n, i;
    int IsPrime;
    scanf_s("%d", &n);
    if (n <= 1) {
        IsPrime = 0;
    }
    else
        if (n == 2) {
            IsPrime = 1;
        }
        else
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    IsPrime = 0;
                }
                break;
            }
    if (IsPrime == 1) { printf("IS"); }
    else { printf("NO"); }*/

//冒泡排序的基本形式
//#include<stdio.h>
//int main() {
//    int i, j;
//    int temp;
//    int arr[1005];
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("%d", arr[j]);
//}

//将有限个数字按大小顺序排列
//int a, b, c, d;
//int temp;
//scanf_s("%d %d %d %d", &a, &b, &c, &d);
//if (a > b) { temp = a; a = b; b = temp; }
//if (a > c) { temp = a; a = c; c = temp; }
//if (a > d) { temp = a; a = d; d = temp; }
//if (b > c) { temp = b; b = c; c = temp; }
//if (b > d) { temp = b; b = d; d = temp; }
//if (c > d) { temp = c; c = d; d = temp; }
//printf("%d %d %d %d", a, b, c, d);

//输入整数a，b，输出b个a相乘.
//int a = 0;
//int b = 0;
//int c = 1;
//scanf_s("%d %d",&a, &b);
//for (int i = 0; i < b; i++) {
//    c *= a;
//}
//printf("%d", c);
//转专业真题1
//    int X0, Y0, r, X1, Y1;
//    scanf_s("%d,%d %d %d,%d", &X0, &Y0,&r,&X1,&Y1);
//    if (r == (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("On the circle"); }
//    if (r >= (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("Outside"); }
//    if (r <= (X1 - X0) * (X1 - X0) + (Y1 - Y0) * (Y1 - Y0)) { printf("Inside"); }
// 
//转专业真题2（注意最后“total+=”处的格式）
//int n, a, b;
//scanf_s("%d %d %d", &n, &a, &b);
//int total=0;
//int i;
//int x1, y1, x2, y2;
//int Xmin = 0;
//int Ymin = 0;
//for (i = 0; i < n; i++) {
//    scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
//    if (x1 < 0) { x1 = Xmin; }
//    if (y1 < 0) { y1 = Ymin; }
//    if (x2 > a) { x2 = a; }
//    if (y2 > b) { y2 = b; }
//    total+= (x2 - x1) * (y2 - y1);
//}
//printf("%d", total);
// 
// 转专业真题3
//int IsPrime(int num) {
//    if (num <= 1) {
//        return 0;
//    }
//    if (num == 2) {
//         return 1;
//    }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return 0;
//        }
//    }return 1;
//}
//int main(){
//    int n = 0;
//scanf_s("%d",& n);
//int count = 0;
//int num = 2;
//while (1) {
//    if (IsPrime(num)) {
//        count++;
//    }
//    if (n == count) {
//        printf("%d", num);
//        break;
//    }num++;
//}

//转专业真题4
//int i, j;
//int n = 0;
//scanf_s("%d", &n);
//for (i = n; i <= n; i++) {
//    for (j = 1; j <= i; j++) {
//        printf("%dx%d=%d ", j, i, i * j);
//    }
//    printf("\n");
//}

//转专业真题5(指针）
//int a, b, c, d;
//int *max;
//scanf_s("%d %d %d %d", &a, &b, &c, &d);
//max = &a;
//if (b > *max)max = &b;
//if (c > *max)max = &c;
//if (d > *max)max = &d;
//int temp;
//temp = a;
//a = *max;
//*max = temp;
//printf("%d %d %d %d", a, b, c, d);
//int n;
//scanf_s("%d",& n);
//转专业真题5（非指针方法--索引）
//int arr[1005];
//int i;
//int temp;
//int n=0;
//scanf_s("%d",&n);
//for (i = 0; i < n; i++) {
//    scanf_s("%d", &arr[i]);
//}
//int max_idx = 0;
//for (i = 0; i < n; i++) {
//    if (arr[max_idx] < arr[i]) {
//        max_idx = i;
//    }
//}
//temp = arr[0];
//arr[0] = arr[max_idx];
//arr[max_idx] = temp;
//for (i = 0; i <n; i++) {
//    printf("%d", arr[i]);
//}

//转专业真题6
//int n, m;
//scanf_s("%d %d",&m, &n);
//int arr[100][100] = { 0 };
//int i, j;
//for (i = 0; i < m; i++) {
//    for (j = 0; j < n; j++) {
//        scanf_s("%d", &arr[i][j]);
//    }
//}
//int max = arr[0][0];
//int row = 1;
//int colum = 1;
//for (i = 0; i < m; i++) {
//    for (j = 0; j < n; j++) {
//        if (arr[i][j] > max) {
//            max=arr[i][j];
//            row = 1 + i;
//            colum = 1 + j;
//        }
//    }
//}
//printf("%d %d %d", max,row,colum);

//转专业真题7
//int n;
//scanf_s("%d", &n);
//int arr[260];
//int i;
//int j;
//int temp;
//for (i = 0; i < n; i++) {
//    scanf_s("%d", &arr[i]);
//}
//for(i=0;i<n-1;i++){
//    for (j = 0; j < n - 1 - i; j++) {
//        if (arr[j] > arr[j + 1]) {
//            temp = arr[j];
//            arr[j] = arr[j + 1];
//            arr[j + 1] = temp;
//    }
//    }
//}
//for (i = 0; i < n; i++) {
//    printf("%d ", arr[n/2+1/2]);
//    break;
//}
//转专业试题（重做）
//1.
//int x0 = 0;
//int y0 = 0;
//int r = 0;
//int x1 = 0;
//int y1 = 0;
//scanf_s("%d %d %d %d %d", &x0, &y0, &r, &x1, &y1);
//if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) > r * r) {printf("Outside");}
//if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) == r * r) { printf("On the Circle"); }
//if ((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0) < r * r) { printf("Inside"); }

//2.
//int a, b, n;
//int x1, y1, x2, y2;
//int i = 0;
//scanf_s("%d %d %d", &n, &a, &b);
//int minx = 0;
//int miny = 0;
//int total = 0;
//for (i = 0; i < n; i++) {
//    scanf_s("%d %d %d %d", &x1, &y1, &x2, &y2);
//    if (x1 <= 0) { x1 = minx; }
//    if (y1 <= 0) { y1 = miny; }
//    if (x2 > a) { x2 = a; }
//    if (y2 > b) { y2 = b; }
//      total += (x2 - x1) * (y2 - y1);
//}
//printf("%d", total);

//3.
//int isPrime(int num) {
//    if (num <= 1) { return 0; }
//    if (num == 2) { return 1; }
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) { return 0; }
//    }return 1;
//}
//int main(){
//    int count=0;
//    int n;
//    int num = 2;
//    scanf_s("%d", &n);
//    while (1) {
//        if (isPrime(num)) {
//            count++;
//        }
//        if (count == n) {
//            printf("%d", num);
//            break;
//        }
//        num++;
//    }

//4.
//int i, j;
//int n = 0;
//scanf_s("%d", &n);
//for (i = n; i <=n; i++) {
//    for (j = 1; j <= i; j++) {
//        printf("%dx%d=%d ", j,i,i*j);
//    }
//    printf("\n");
//}

//5.
int n = 0;
int arr[1005];
scanf_s("%d", &n);
int i;
for (i = 0; i < n; i++) {
    scanf_s("%d", &arr[i]);
}
int max_idx = 0;
int temp;
for (i = 0; i < n; i++) {
    if (arr[i] > arr[max_idx]) {
        max_idx = i;
        temp = arr[0];
        arr[0] = arr[max_idx];
        arr[max_idx] = temp;
    }
}
for (i = 0; i < n; i++) {
    printf("%d", arr[i]);
}
return 0;
    }