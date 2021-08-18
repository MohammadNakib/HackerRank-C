#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int size=(2*n)-1;
    int start=0;
    int end=size-1;
    int a[size][size],i,j;
    //part 02
    while(n!=0)
    {
    for(i=start;i<=end;i++)
    {
        for(j=start;j<=end;j++)
        {
            if(i==start || i==end || j==start || j==end)
            {
                a[i][j]=n;

            }
        }
    }
    ++start;
    --end;
    --n;
    }
    //part 03
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
