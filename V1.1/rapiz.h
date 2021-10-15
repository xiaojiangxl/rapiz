#include<stdio.h>
#include<windows.h>
#include<math.h>
#define N 99999 
//输出Hello world！ 
 void sayhello(void){
 printf("Hello world !\n");
 	} 
 	//求整型数组最大值 
 int intmax(int *a,int len){
 	int i=0,max=0;
 	for(i=0;i<len;i++){
 			if(a[i]>max)
 			max=a[i];
	 } 
 	return max;
 }
 //求整型数组最小值 
  int intmin(int *a,int len){
 	int i=0,min=0;
 	for(i=0;i<len;i++){
 			if(a[i]<min)
 			min=a[i];
		}
 	return min;
 }
 // 求浮点型数组最大值
 float floatmax(float *a,int len){
 	int i;
 	float max=0;
 	for(i=0;i<len;i++){
 		if(a[i]>max)
 			max=a[i];
	 }
	 return max;
 } 
 //求浮点型数组最小值 
  float floatmin(float *a,int len){
 	int i;
 	float min=0;
 	for(i=0;i<len;i++){
 		if(a[i]>min)
 			min=a[i];
	 }
	 return min;
 } 
 //输出学号
 int num(long int n){
 	printf("ld",n);
 }
 //冒泡排序法 
  void bubble(int *a,int len){
  int i=0;
	int j;
	int t;
	for(i=0;i<len-1;i++) {
		for(j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				}
			}
		}
	}
	//选择排序法 
  void selsction(int *a,int len){
  	int i=0;
  	int j;
  	int t;
   for(i=1;i<=9;i++){ 
        for (j=i+1;j<=10;j++){ 
            if(a[i]>a[j])    //如果前一个数比后一个数大，则利用中间变量t实现两值互换
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
		}
	} 
  } 
  //闰年判断
  int  leapyear(int year){
  	int flag;
  	if(year<=0)
  		flag=-1;
  		else{
  			if(year%400==0)
        flag=1;
    else
    {
        if(year%4==0&&year%100!=0)
            flag=1;
        else
            flag=0;
    }
		  }
  	return flag;
  }
  //阶乘 
  int factorial(int n){
  	int i,s=1;
  	if(n<=0)
  		s=-1;
  	else{
  	for(i=1;i<=n;i++){
		 s=s*i; 		
	  }
	  }
	  return s;
  }
  //水仙花数
  int  narcissistic(int n){
  	int i,j,k,m,flag;
  	if(n<100||n>999)
  		flag=-1;
  	else{
        j=i%10;
        k=i/10%10;
        m=i/100;
        if(j*j*j+k*k*k+m*m*m==i)
        	flag=1;
		else flag =0;    
    }
  }
  //整型数组赋值
  int intarray(int len){
  	int i,a[N];
  	int *p=a;
    for(i=0;i<len;i++){
    	scanf("%d",a[i]);
	}
	return *p;	
  } 
  //浮点型数组赋值
  float floatarray(int len){
  	int i;
	float a[N];
  	float *p=a;
    for(i=0;i<len;i++){
    	scanf("%f",a[i]);
	}
	return *p;	
  } 
  //字符型数组赋值 
  char chararray(int len){
  	int i;
	char a[N];
  	char *p=a;
    for(i=0;i<len;i++){
    	scanf("%c",a[i]);
	}
  	return *p;
  }
  //最大公约数
  int  hcf(int n,int m){
  	int i,temp;
  	if(m<n)  
    { 
        temp=m;
        m=n;
        n=temp;
    }
    for(i=n; i>0; i--)  {
        if(m%i==0 && n%i==0)
        	break;}
  	return i;
  } 
  //最小公倍数 
  int lcm(int n,int m){
  	int i,temp;
  	if(m<n)  
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=m; i>0; i++){
        if(i%m==0 && i%n==0)
        	break;}
  	return i;
  }
  //三角形面积 
  float tgarea(float a,float b,float c){
  	float s,area;
  	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	if(a+b>c && b+c>a && a+c>b)
	return area;
	else
		return -1;
  	
  }
  //九九乘法表
  void  table(){
  	    int i,j;  // i, j控制行或列 
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++)
            // %2d 控制宽度为两个字符，且右对齐；如果改为 %-2d 则为左对齐
            // \t为tab缩进
            printf("%d*%d=%2d\t", i, j, i*j);
        printf("\n");
    }

  } 
  //打印*金字塔
  void pyramid(int n){
  	int i,j;
	for (i=1;i<=n;++i) // 控制金字塔的层数，本例输出3层，可bai以改变输du出任意层
	{
		for (j=1;j<=n-i;++j) // 控制金字塔每层前面输出的空格数
		printf(" ");
		for (j=1;j<=2*i-1;++j) // 控制金字塔每层需要打印'*'的个数
			printf("*");
			printf("\n"); // 一层金字塔输出完毕，换行继续输出下一层
  } 
}
  //打印*菱形 
  int rhomb(int line){
  	 int flag,column;
    int i;  // 当前行
    int j;  // 当前列
    if(line%2==0){  // 判断是否是奇数
        flag=0;
        
    }
    else{
	
    column = line;  // 总行数和总列数相同
    for(i=1; i<=line; i++){  // 遍历所有行
        if(i<(line+1)/2+1){  // 上半部分（包括中间一行）
            for(j=1; j<=column; j++){  // 遍历上半部分的所有列
                if( (column+1)/2-(i-1)<=j && j<=(column+1)/2+(i-1) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{  // 下半部分
            for(j=1; j<=column; j++){  // 遍历下半部分的所有列
                if( (column+1)/2-(line-i)<=j && j<=(column+1)/2+(line-i) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    flag=1;
	}
	return flag;
  }
  //查找字符出现次数
  int findchar(char *a,int len,char fid){
  	int i,flag=0;
  	for(i=0;i<len;i++){
  		if(a[i]==fid)
  			flag++;
	  }
  	return flag;
  }
  //判断质数 
   int isprimer(int n){
  	int i;
  	int flag=1;
  	int s=sqrt(n)+1;
  	for(i=2;i<s;i++){
  		if(n%i==0)
  		flag=0;
		  }
  		if(n<=0)
  		flag=-1;
  		return flag;
  }
   
   // 整数和 
   int intsum(int *p,int len){
   	int i,sum=0;
	   for(i=0;i<len;i++){
	   	sum+=p[i];
	   } 
	   return sum;
   } 
   // 整数平均值 
   float intavg(int *p,int len){
   	int i,sum=0;
   	for(i=0;i<len;i++){
   		sum+=p[i];
	   }
   	return sum/len;
   } 
   //浮点数和
   float floatsum(float *p,int len){
   	int i=0;
   	float sum=0;
   	for(;i<len;i++){
   		sum+=p[i];
	   }
	   return sum;
   } 
   //浮点数平均值
   float floatavg(float *p,int len){
   	int i=0;
   	float sum=0;
   	for(;i<len;i++){
   		sum+=p[i];
	   }
   	return sum/len;
   } 
  //说明文档
  int about(){
  	int c;
  	while(1){
  	printf("\t\t*****************RAPIZ.H*****************\n");
  	printf("\t\t**************彼方尚有荣光在*************\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            1  访问官网              ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            2  加入我们              ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            3  开发文档              ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            4  清    屏              ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            5  退    出              ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||              rapiz.h                ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||            教学用函数库             ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t||                      版本号：1.1   ||\n");
  	printf("\t\t||                       2020.7.15     ||\n");
  	printf("\t\t||                      作者：rapiz    ||\n");
  	printf("\t\t||                                     ||\n");
  	printf("\t\t***********念念不忘 必有回响*************\n");
  	printf("\t\t*****************52i.xyz*****************\n");
	  scanf("%d",&c);
	  switch(c){
	  	case 1:system("start http://blog.52i.xyz/index.php/archives/234/");break;
	  	case 2:system("start http://wpa.qq.com/msgrd?v=3&uin=5685429&site=qq&menu=yes");break;
	  	case 4:system("cls");break;
	  	case 3:system("start http://blog.52i.xyz/usr/uploads/2020/07/2307744438.md");break;
		case 5:exit(1);
	  	default:return 0;
	}
  } 
  } 
