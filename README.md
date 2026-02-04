2026.2.2变量与常量
1.主函数前为“全局变量”，后为“局部变量”。
2.在局部变量中，不可将一个变量重复定义，例如：int a=1,int a=2,这是错误的。
3.计算两个整数的和
  1）.将两个变量初始化，例:int num1=0,int num2=0.
  2）.include<stdio.h>
  int main(){
  int num1 = 0;
  int num2 = 0;
  scanf_s("%d %d",&num1,&num2);
  int sum = num1 + num2;
  printf("%d\n",sum);
	return 0;
}
2026.2.4变量的作用域和生命周期
1.全局变量：作用于代码运行的整个过程。（生命周期约等于作用域）
2.局部变量：作用于该变量所在的大括号内。
2026.2.4常量
1.常量的理解：定义代码中不能被改变的量。
2.常量的类型：字面常量，const修饰的常变量，#define定义的标识符常量，const修饰的常变量，枚举常量
例：include<stdio.h>
    int main(){
	}