#include<stdio.h>
int array[10][10],d[10],f[10],color[10],df[10],indfs=0,prev[10],low[10],s,cc,
white=1,gray=2,black=3,time=0,tindex=0,cycle=0,l,m;

void dfs_visit(int start,int node,int k);
void dfs(int node);
void print_cycle();
int main()
{
	int i,node,edge,a,b,j;
	FILE *fp;
	fp=fopen("input.txt","r");
	fscanf(fp,"%d %d",&node,&edge);
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
	printf("node to node i want to go ?\n");
	scanf("%d %d",&l,&m);
	dfs(node);

	return 0;
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
	for(i=1;i<=node;i++)
	{
		color[i]=white;
		prev[i]=0;
		d[i]=0;
		f[i]=0;
	}
	for(i=1;i<=node;i++)
	{
		if(color[i]==white)
			dfs_visit(i,node,0);
	}
}

void dfs_visit(int start,int node,int k)
{
	int j;
	d[start]=++time;
	color[start]=gray;
	for(j=1;j<=node;j++)
	{
		if(array[start][j]==1)
		{
			if(color[j]==white)
			{
				if(k==0){
                        if (start==l&&j==m){
					printf(" edge %d---->%d is tree edge\n",start,j);
                        }
				}
				prev[j]=start;
				dfs_visit(j,node,k);
			}
			else if(color[j]==gray)
			{
				if(k==0){
                        if (start==l&&j==m){
					printf(" edge %d---->%d is back edge\n",start,j);
                        }
				}
				cycle=1;
				s=start;
				cc=j;
			}
			else
			{
				if(k==0)
				{
				    if (start==l&&j==m){
					if(d[start]<d[j]){
						printf(" edge %d---->%d is forward edge\n",start,j);
					}
					else
					{
						printf(" edge %d---->%d is cross edge\n",start,j);
					}
					}
                }
			}
		}
	}
	color[start]=black;
	f[start]=++time;
	df[++indfs]=start;
	}
