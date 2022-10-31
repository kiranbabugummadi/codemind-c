#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int r,s=0,j;
            
        for (j=a;j<=b;j++){
            r=j%10;
            if ((r==2) || (r==3) || (r==9)){
                s+=1;
            }
            r=0;
            
        }
        printf("%d
",s);
    }
}