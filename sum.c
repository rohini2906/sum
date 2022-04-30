#include<stdio.h>
#include<conio.h> 
int sum(int a);
int main()
{
    int n,res;
    printf("Enter the number:");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum of digits is %d\n",res);
    return 0;
}
 
int sum(int num)
{
    if(num!=0)
    {
        return(num%10+sum(num/10));
    }
    else
    {
       return 0;
    }
}
