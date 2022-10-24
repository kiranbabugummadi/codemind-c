#include<stdio.h>
int way(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return way(n-1)+way(n-2)+way(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",way(n));
    
    
}