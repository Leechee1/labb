//
//  main.c
//  practice lab
//
//  Created by 李志远 on 2021/10/9.
//


//找零计算器
//#include <stdio.h>
//
//int main(){
//    int A=0;
//    int B=0;
//    printf("请输入购买的金额");
//    scanf("%d",&B);
//
//    printf("请输入你的现金");
//    scanf("%d",&A);
//    int C=A-B;
//
//    if (C>0) {printf("找你的零钱是%d",C);
//
//
//    }
//        else
//            printf("对不起，你的钱不够");
//
//
//
//    return 0;
//
//
//
//}



//switch case 语句

//#include "stdio.h"
//int main()
//{
//
//
//    int month=0;
//    printf("please enter the number of the month");
//    scanf("%d",&month);
//    switch (month) {
//        case 1:
//            printf("January");
//            break;
//        case 2:
//            printf("February");
//            break;
//        case 3:
//            printf("March");
//            break;
//
//        default:
//            printf("sorry,i don't know \n");
//
//            }
//
//    return 0;
//
//}



//计数循环程序

//#include "stdio.h"
//
//int main(){
//
//    int count=100;
//
////Way 1
////    do {
////        printf("%d\n",count);
////        count--;
////    } while (count>0);
////    printf("Lauching!!");
////
//
////Way 2
//    while (count>0) {
//        printf("%d\n",count);
//        count--;
//    }
//
//    printf("Launching!!");
//
//
//
//}


//计数游戏

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
    
    
    srand(time(0));
    int a=rand();
    int b=0;
    int c=0;
//    printf("%d\n",a%100);
    printf("please enter your number\n");
    scanf("%d",&b);
    int d=a%100;
    while (b!=d) {
        c++;
        printf("你猜错了，请再输入一个数字\n");
        scanf("%d",&b);

    }
        printf("恭喜你，你猜对了！！");
    printf("你用了%d次猜对了这个数",c);
    
}
    
