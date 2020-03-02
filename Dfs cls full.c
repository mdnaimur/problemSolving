   #include<stdio.h>
int array[10][10],d[10],f[10],color[10],df[10],indfs=0,prev[10],low[10],s,cc,white=1,gray=2,black=3,time=0,tindex=0,cycle=0;
void dfs_visit(int start,int node,int k);
void print(int node);
void dfs(int node);
void print_cycle();
int main()
{
    int  i,node,edge,a,b,j;
    FILE *fp;
    fp=fopen("input.txt","r");
    fscanf(fp,"%d %d ",&node,&edge);
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
    printf("DFS Traverse :");
    dfs(node);
    return 0;
}
void print(int node)
{
    int i,c;
    printf("\n \n");
    c=0;
    for(i=1;i<=node;i++)
    {
        if(color[i]==white)
        {
            c=1;
            break ;
        }
    }
    if(c==1)
        printf("Graph is not connected \n");
    else
        printf("Graph is connected \n");
}
void dfs(int node)
{
    int i;
    for(i=1;i<=node;i++)
    {
        color[i]=white;
        prev[i]=0;
        d[i]=0;
        f[i]=0;
    }
    for(i=1;i<=1;i++)
    {
        if(color[i]==white)
            dfs_visit(i,node,1);
    }
    print(node);
    for(i=1;i<=node;i++)
        for(i=1;i<=node;i++)
    {
        color[i]=white;
        prev[i]=0;
        d[i]=0;
        f[i]=0;
    }
    for(i=1;i<=node;i++)
    {
        if(color[i]=white)
            dfs_visit(i,node,0);
    }
    printf("\n\n");
    if(cycle==1)
    {
        int x[5],j=0;
        x[++j]=s;
        while(prev[s]!=cc)
        {
            x[++j]=prev[s];
            s=prev[s];
        }
        printf("cycle is    ");
        printf("%d",cc);
        for(s=j;s>=1;s--)
            printf("%d ",x[s]);
        printf("\n Graph is not DAG\n\n");
    }
    else
        printf("Graph is DAG\n\n");
}
void dfs_visit(int start,int node, int k)
{
    int j;
    d[start]=++time;
    color[start]=gray;
    for(j=1;j<=node;j++)
    {
        if(array[start][j]==1)
        {
            if (color[j]==white)
            {
                if(k==1)
                    printf("\nEdge %d------------> %d is tree\n",start,j);
                prev[j]=start;
                dfs_visit(j,node,k);
            }
            else if (color[j]==gray)
            {
                if(k==0)
                    printf("edge %d--------->%d is back edge\n",start,j);
                cycle=1;
                s=start;
                cc=j;
            }
            else
            {
                if(k==0)
                {
                    if(d[start]<d[j])
                        printf("edge %d ------->%d is forward edge\n",start,j);
                    else
                        printf("Edge %d---------> %d is cross edge\n",start, j);
                }
            }
        }
    }
    color[start]=black;
    if(k==1)
        printf("%d  ",start);
    f[start]=++time;
    df[++indfs]=start;
}
