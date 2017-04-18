#include<stdio.h>
int main(){
    int SZhi_1,SZhi_2; //数值1，数值2
    int YSZhi;  //运算值
    char Fhao;  //符号
    printf("请输入第一个数字：");
    scanf("%d",&SZhi_1);
    printf("请输入第二个数字：");
    scanf("%d",&SZhi_2);
    printf("你想让他们“+”还是“-”：");
    scanf("%c",&Fhao);
    if(Fhao == '+'){
        YSZhi = SZhi_1 + SZhi_2;
        printf("数字1加上数字2得到：%d",YSZhi);
    }
    else if(Fhao == '-'){
        YSZhi = SZhi_1 - SZhi_2;
        printf("数字1减去数字2得到：%d",YSZhi);
    }
    return 0;
    }
