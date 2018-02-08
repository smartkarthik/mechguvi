#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter the number");
    scanf("%d",&a);
    b=a/100;
    c=(a-(b*100)+(c/10));
    d=(a+(b*100)+(c/10));
     e=(d*100)+(c*10)+b;
     if(a==e)
     {
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
