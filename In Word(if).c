#include<stdio.h>
int main()

{
    int n,a,b,c;

    printf("Enter a number between 1-999\n");
    scanf("%d",&n);

    a=n/100;
    b=(n%100)/10;
    c=n%10;


    if(a==1)printf("One hundred ");
    if(a==2)printf("Two hundred ");
    if(a==3)printf("Three hundred ");
    if(a==4)printf("Four hundred ");
    if(a==5)printf("Five hundred ");
    if(a==6)printf("Six hundred ");
    if(a==7)printf("Seven hundred ");
    if(a==8)printf("Eight hundred ");
    if(a==9)printf("Nine hundred ");


    if(b==1)
    {
        if(c==1)printf("eleven");
        if(c==2)printf("twelve");
        if(c==3)printf("thirteen");
        if(c==4)printf("fourteen");
        if(c==5)printf("fifteen");
        if(c==6)printf("sixteen");
        if(c==7)printf("seventeen");
        if(c==8)printf("eighteen");
        if(c==9)printf("nineteen");
    }


    else
    {
    if(b==2)printf("twenty ");
    if(b==3)printf("thirty ");
    if(b==4)printf("forty ");
    if(b==5)printf("fifty ");
    if(b==6)printf("sixty ");
    if(b==7)printf("seventy ");
    if(b==8)printf("eighty ");
    if(b==9)printf("ninety ");


    if(c==1)printf("one ");
    if(c==2)printf("two ");
    if(c==3)printf("three ");
    if(c==4)printf("four ");
    if(c==5)printf("five ");
    if(c==6)printf("six ");
    if(c==7)printf("seven ");
    if(c==8)printf("eight ");
    if(c==9)printf("nine ");
    }

return 0;

}
