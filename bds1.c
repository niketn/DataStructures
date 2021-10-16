#include<stdio.h>
#define Max 100
int am[Max][Max];
int n=0;
int gtype,max_edges;
int q[20],top=-1,front=-1,rear=-1,vis[20],stack[20];
int delete();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push(int item);
int pop();

void create_graph()
{
    int i,j,s,d;
    printf(" ENTER THE TYPE OF GRAPH: \n 1 Undirected\n 2 Directed: ");
    scanf("%d",&gtype);
    printf(" ENTER THE NO OF VERTICES: ");
    scanf("%d",&n);
    if(gtype==1)
        max_edges=n*(n-1)/2;
    else
        max_edges=n*(n-1);
    for(i=1;i<=max_edges;i++)
    {
        printf("\n ENTER THE EDGE: \n");
        printf(" Source: "); scanf("%d",&s);
        printf(" Destination: "); scanf("%d",&d);
        if(s==-1 && d==-1)
            break;
        if(s>n || d>n || s<1 || d<1)
        {
            printf("\n INVALID INPUT");
            i--;
        }
        else
        {
            am[s][d]=1;
            if(gtype==1)
                am[d][s]=1;
        }
    }
}
void insert_edge(int s,int d,int gtype)
{
    if(s>n || d>n || s<1 || d<1)
    {
        printf("\n INVALID INPUT");
        return;
    }
    am[s][d]=1;
    if(gtype==1)
        am[d][s]=1;
}
void insert_vertex()
{
    n++;
    printf("\n vertex added( total vertices: %d)",n);
    if(gtype==1)
        max_edges=n*(n-1)/2;
    else
        max_edges=n*(n-1);
}
void delete_vertex()
{
    n--;
    printf("\n vertex deleted( total vertices: %d)",n);
    if(gtype==1)
        max_edges=n*(n-1)/2;
    else
        max_edges=n*(n-1);
}
void delete_edge(int s,int d,int gtype)
{
    am[s][d]=0;
    if(gtype==1)
        am[d][s]=0;
}
void display()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",am[i][j]);
        printf("\n");
    }
}
int main()
{
    int i,ch,j,gt,s,d;
    do
    {
		for(i=1;i<=n;i++)
		{vis[i]=0;
		 //q[i]=0;
		 //stack[i]=0;
		}
        printf("\n 1.CREATE GRAPH\n 2.INSERT EDGE \n 3.DELETE EDGE\n 4.INSERT VERTEX\n 5.DELETE VERTEX\n 6.DISPLAY\n 7.BFS\n 8.DFS\n 0.EXIT: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create_graph(); break;
        case 2:
            printf("\n ENTER THE EDGE: \n");
            printf(" Source: "); scanf("%d",&s);
            printf(" Destination: "); scanf("%d",&d);
            insert_edge(s,d,gt); break;
        case 3:
            printf("\n ENTER THE EDGE: \n");
            printf(" Source: "); scanf("%d",&s);
            printf(" Destination: "); scanf("%d",&d);
            delete_edge(s,d,gt); break;
        case 4:
            insert_vertex(); break;
        case 5:
            delete_vertex(); break;
             break;
        case 6:
            display(); break;
		case 7:
			printf("ENTER THE SOURCE VERTEX :");
			scanf("%d",&s);
			bfs(s,n); break;
		case 8:
			printf("ENTER THE SOURCE VERTEX :");
			scanf("%d",&s);
			dfs(s,n); break;
        case 0:
            printf("\n END "); break;
        }
    }while(ch!=0);
}

//**************BFS(breadth-first search) code**************//
void bfs(int s,int n)
{
int p,i;
add(s);
vis[s]=1;
p=delete();
if(p!=0)
printf(" %d",p);
while(p!=0)
{
for(i=1;i<=n;i++)
if((am[p][i]!=0)&&(vis[i]==0))
{
add(i);
vis[i]=1;
}
p=delete();
if(p!=0)
printf(" %d ",p);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
bfs(i,n);
}


void add(int item)
{
if(rear==19)
printf("QUEUE FULL");
else
{
if(rear==-1)
{
q[++rear]=item;
front++;
}
else
q[++rear]=item;
}
}
int delete()
{
int k;
if((front>rear)||(front==-1))
return(0);
else
{
k=q[front++];
return(k);
}
}


//***************DFS(depth-first search) code******************//
void dfs(int s,int n)
{
int i,k;
push(s);
vis[s]=1;
k=pop();
if(k!=0)
printf(" %d ",k);
while(k!=0)
{
for(i=1;i<=n;i++)
if((am[k][i]!=0)&&(vis[i]==0))
{
push(i);
vis[i]=1;
}
k=pop();
if(k!=0)
printf(" %d ",k);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
dfs(i,n);
}
void push(int item)
{
if(top==19)
printf("Stack overflow ");
else
stack[++top]=item;
}
int pop()
{
int k;
if(top==-1)
return(0);
else
{
k=stack[top--];
return(k);
}
}