
#include <stdio.h>

int matrix[10][10], visited[10], n;

void DFS(int i)
{
    int w;
    visited[i]=1;
    printf("%d\n", i);
    for(w=0; w<n; w++){
        if(visited[w]==0 && matrix[i][w]==1)
        DFS(w);
    }
}

int main()
{
    printf("Enter node num = ");
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element %d,%d = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    int source;
    printf("Enter source node = ");
    scanf("%d", &source);
    DFS(source);
}
