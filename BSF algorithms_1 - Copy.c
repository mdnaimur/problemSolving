#include<stdio.h>
int array[10][10];
int prev[10],color[10],path[10],index=0,found=0;
int d[10];
void bfs(int start,int node)
{
    int i,queue[10],index=1,rear=0,n=node,k=0,l;
    queue[index]=start;
    for(i=1;i<=n;i++)
        color[i]=1;
    color[start]=2;
    for(i=1;i<=n;i++)
        d[i]=0;
    for(i=1;i<=n;i++)
        prev[i]=0;

    while(rear!=index)
    {
        l=0;
        node=queue[++rear];
        printf("%d ",node);
        ++k;
        for(i=1;i<=n;i++)
        {
            if(array[node][i]==1 &&color[i]==1)
            {
                prev[i]=node;
                queue[++index]=i;
                color[i]=2;
                d[i]=k;
                l=1;
            }
        }
        if(l==0)
            --k;
    }
    printf("\n");

}
void print(int start , int node)
{
    int i;
    for(i=1;i<=node;i++)
    {
        printf("distance from node %d to node %d is : %d \n",start,i,d[i]);
    }
    printf("\n\n");
    for(i=1;i<=node;i++)
    {
        if(start==i)
            continue;
        if(prev[i]==0)
            printf("node %d is not reachable from node %d\n",i,start);
    }
    printf("\n\n");
}
void shortest_path(int node, int cnode,int find,int k)
{
    int i,m,l=0;
    if(k>d[find])
    {
        return;
    }
    else
    {
            l=0;
    for(i=1;i<=node;i++)
    {
        if (array[cnode][i]==1&&d[i]==k&&color[i]==1)
        {
            color[i]=2;
            l=1;
            if(i==find&& d[i]==d[find])
            {
                path[++index]=cnode;
                path[++index]=find;
                printf("\n");
                for(m=1;m<=index;m++)
                    printf("%d ",path[m]);
                printf("\n");
                found=1;
                return;
            }
            else
            {
                path[++index]=cnode;
                ++k;
                shortest_path(node,i,find,k);
            }
        }
    }
if(l==0)
{
    ++k;
    shortest_path(node,i,find,k);
}
    }
}
void multiple_path(int start, int node,int find)
{
   int i,j;
    for(j=1;j<=node;j++)
        color[j]=1;
    for(i=1;i<=node;i++)
    {
        if(d[i]==1)
        {
            path[++index]=start;
            if(i==find)
            {
                printf("%d %d\n",start,find);
                found=1;
            }
            else
                shortest_path(node,i,find,2);
        }
        index=0;
        for(j=1;j<=node;j++)
            color[j]=1;
    }
    if(found==0)
        printf("\n #### no path exist ########\n\n");
}
int main()
{
    int start,node,edge,i,j,a,b,find;
    FILE *fp;
    fp=fopen("input.txt","r");
    fscanf(fp,"%d %d",&node,&edge );
    for(i=1;i<=node;i++)
    {
        for(j=1;j<=node;j++)
            array[i][j]=0;
    }
    for(i=1;i<=edge;i++)
    {
        fscanf(fp,"%d %d",&a,&b);
        array[a][b]=1;
    }
    printf("BFS start from : ");
    scanf("%d",&start);
    printf("\n\nBFS Traverse ");
    bfs(start,node);
    print(start,node);
    printf("Enter a node to find shortest path from source node %d :",start);
    scanf("%d",&find);
    multiple_path(start,node,find);

    return 0;
}
