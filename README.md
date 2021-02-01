# rapiz.h 
## V1.1
****
 **2020.7.20**
 ****

 ****

 ****
 ## 操作说明
 #### 下载相应版本的项目文件
 #### 将`.h`文件放到程序根目录当中
 #### 使用`#include"rapiz.h"`引用函数库
 ****
### void sayhello(void)
**输出 hello world !**
#### 例程
`sayhello();`
### int intmax(int *a,int len)
**输出整型数组最大值**
#### 例程
`int max=intmax(a);`
### int intmax(int *a,int len)
**输出整型数组最小值**
#### 例程
`int min=intmin(a);` 
### float floatmax(float *a,int len)
**输出浮点型型数组最大值**
#### 例程
`float max=floatmax(a);`
### float floatmax(float *a,int len)
**输出浮点型数组最小值**
#### 例程
`float min=floatmin(a);` 
### int num(long int n)
**输出学号**
#### 例程
`num(1903130115);`
### void bubble(int *a,int len)
**数组进行冒泡排序**
#### 例程
`bubble(a,10);`
### void selsction(int *a,int len)
**数组进行选择排序**
#### 例程
`selsction(a,10);`
### int leapyear(int year)
**判断是否为闰年，返回-1为年份错误**
#### 例程
`flag=leapyear(2019);`
### int factorial(int n)
**返回n的阶乘值**
#### 例程
`n=factorial(10);`
### int narcissistic(int n)
**判断n是不是水仙花数，数字范围错误输出-1**
#### 例程
`flag=narcissistic(169);`
### int intarray(int len)
**向长度为len的整型数组赋值**
#### 例程
`i ntarray(10);`
### float floatarray(int len)
**向长度为len的浮点型数组赋值**
#### 例程
`floatarray(10);`
### char chararray(int len)
**向长度为len的字符型数组赋值**
#### 例程
`chararray(10);`
### int hcf(int n,int m)
**返回n和m的最大公约数**
#### 例程
`int t=hcf(20,88);`
### int lcm(int n,int m)
**返回n和m的最小公倍数**
#### 例程
`int t=lcm(20,88);`
### float tgarea(float a,float b,float c)
**根据三边返回三角形面积,当返回值为-1是代表无法构成三角形**
#### 例程
`double s=tgarea(2.3,66,15);`
### void table()
**打印九九乘法表**
#### 例程
`table();`
### void pyramin(int n)
**打印n行的*金字塔**
#### 例程
`pyramin(5);`
### int rhomb(int line)
**打印line行的*菱形 当line等于偶数时返回0**
#### 例程
`flag=rhomb(9);`
### int findchar(char *a,int len,char fid)
**输出长度为len的a数组中含有fid的个数**
#### 例程
`int flag =findchar(a,10,Q);`
### int isprimer（int n)
**判断n是否为质数 当错误时返回-1**
#### 例程
`int flag =isprimer(998);`
### int intsum(int *p,int len )
**求长度为len的整型p数组和**
#### 例程
`int sum=intsum(a,10);`
### float floatsum(float *p,int len)
**求长度为len的浮点型数组p的和**
#### 例程
`float sum=floatsum(a,10);`
### float intavg(int *p,int len)
**求长度为len的整型数组p的平均值**
#### 例程
`float avg=intavg(p,10);`
### float floatavg(float *p,int len)
**求长度为len的浮点型数组p的平均值**
#### 例程
`float avg=floatavg(p,10);`
