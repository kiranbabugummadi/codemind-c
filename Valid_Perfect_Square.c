#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,c=0;
        scanf("%d",&n);
        for(int j=1;j<n;j++){
            if(j*j==n){
                c+=1;
                break;
            }
            
        }if(c>0)
        printf("True
");
        else
        printf("False
");
    }
}