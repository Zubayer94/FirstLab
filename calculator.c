#include<stdio.h>
#include<stdlib.h>
float addition(float x,float y)
{
    float add;
    add=x+y;
    return add;

}
float sub(float x,float y)
{
    float subt;
    subt=x-y;
    return subt;
}
float mul(float x,float y)
{
    float mult;
    mult=x*y;
    return mult;
}
float division(float x,float y)
{
    float divi;
    divi=x/y;
    return divi;
}
int main()
{
    int m;
    float a,b,temp,result;
    printf("Enter two values:\n");
    scanf("%f %f",&a,&b);
    if(b>a)
    {
        temp=b;
        b=a;
        a=temp;
    }
    printf("\nfirst number is: %.2f",a);
    printf("\nsecond number is: %.2f",b);
    printf("\n1.Press 1 for addition");
    printf("\n2.press 2 for subtract");
    printf("\n3.press 3 for multiply");
    printf("\n4.press 4 for division");
    printf("\n4.press 5 to exit");
    do{
    printf("\n Enter the your choice\t");
    scanf("%d",&m);
    switch(m){
    case 1:
        result=addition(a,b);
        printf("\nThe addition of two number is: %.2f",result);
        break;
    case 2:
        result=sub(a,b);
        printf("\nThe subtract of two number is: %.2f",result);
        break;
    case 3:
        result=mul(a,b);
        printf("\nThe multiply of two number is: %.2f",result);
        break;
    case 4:
       result=division(a,b);
       printf("\nThe division of two number is: %.2f",result);
        break;
    case 5:
       exit(0);
        break;
    default:
        printf(" Invalid Option !!! Try Again !! ");
        break;
        }
    }
    while(m!=4);
    return 0;
}

