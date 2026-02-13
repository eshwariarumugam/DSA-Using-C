#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c,**arr;
    scanf("%d %d",&r,&c);

    arr = malloc(r * sizeof(int*));

    for(int i=0;i<r;i++)
    {
        arr[i] = malloc(c * sizeof(int));
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<r;i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
