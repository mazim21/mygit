#include<stdio.h>
#include<string.h>
main()
{int t,k,g;
char a[1100];
unsigned long long int d;
scanf("%d",&t);
while(t--)
{scanf("%s",a);
scanf("%llu",&d);
k=a[(strlen(a)-1)]-48;
g=d%4;
if(d==0)
    printf("%d",1);
else if(k==1||k==6||k==5||k==0)
printf("%d",k);
else if(k==4||k==9)
{    if(d%2==0)
        printf("%d",(k==4)?6:1);
    else
        printf("%d",(k==4)?4:9);
}
else if(k==2||k==8)
{    if(g==1)
        printf("%d",k);
    else if(g==2)
        printf("%d",4);
    else if(g==3)
        printf("%d",(k==2)?8:2);
        else if(g==0)
        printf("%d",6);
}
else if(k==3||k==7)
{    if(g==1)
        printf("%d",k);
    else if(g==2)
        printf("%d",9);
    else if(g==3)
        printf("%d",(k==3)?7:3);
        else if(g==0)
        printf("%d",1);
}printf("\n");
}}
