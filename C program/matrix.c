#include <stdio.h>
int main() {
int m,n,A[20][20],B[20][20],C[20][20],i,j;
printf("Enter matrix size of A:");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("enter valueof A:");
        scanf("%d",&A[i][j]);
    }
}
printf("Enter matrix size of B:");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("enter value of B:");
        scanf("%d",&B[i][j]);
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        C[i][j]=A[i][j]+B[i][j];
        printf("%d\t",C[i][j]);
    }
    printf("\n");
}
return 0;
}