#include <stdio.h>
int main(){
char ch;
int letters=0,space=0,num=0,other=0;
printf;"输入一行字符：";
while((ch=getchar())!='\n'){
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    letters++;
else if(ch==' ')
    space++;
else if(ch>='0'&&ch<='9')
    num++;
else
    other++;}
printf("字母:%d\n空格：%d\n数字:%d\n其他:%d\n",letters,space,num,other);
return 0;}
