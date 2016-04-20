#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 4
int main()
{
	system("color 5f");
	int i,j=0,t,u,count=0,x=3,y=2,n,b[N][2]={{5,2},{5,3},{4,2},{4,3}};
	char a[7][11]={"##########",
				   "##     ###",
                   "##O###   #",
                   "# S O  O #",
                   "# **# O ##",
                   "##**#   ##",
                   "##########"};
    char c[7][11]={"##########",
				   "##     ###",
                   "##O###   #",
                   "# S O  O #",
                   "# **# O ##",
                   "##**#   ##",
                   "##########"};
	while(count!=4)
    {
		
		for(i=0;i<7;i++)
		{
			puts(a[i]);
		}
		n=getch();
		if(!(n=='w'||n=='a'||n=='s'||n=='d'))
		{
			if(n=='r')
            {
				for(i=0;i<7;i++)
                for(j=0;j<11;j++)
                {
					a[i][j]=c[i][j];
                }
                x=3;
                y=2;
            }
			system("cls");
			continue;
		}
		if(n=='w')
		{
			if(a[x-1][y]==' ')
            {	
                
                a[x][y]=' ';
				x--;
                a[x][y]='S';         
            }
            else if(a[x-1][y]=='O')
            {	
                if(a[x-2][y]=='*'||a[x-2][y]==' ')
				{	a[x-2][y]='O';
                    a[x][y]=' ';
					x--;
					a[x][y]='S';         
                }
            }
            else
            {
				if(a[x-1][y]=='*')
				{	
					a[x-1][y]='S';
					a[x][y]=' ';
					x--;   
                }
            }
    }
    if(n=='a')
    {
			if(a[x][y-1]==' ')
            {	
                
                a[x][y]=' ';
				y--;
                a[x][y]='S';    
            }
            else if(a[x][y-1]=='O')
            {
				if(a[x][y-2]=='*'||a[x][y-2]==' ')
				{	
					a[x][y-2]='O';
                    a[x][y]=' ';
					y--;
					a[x][y]='S';         
                }
            }
            else
            {
				if(a[x][y-1]=='*')
				{	
					a[x][y-1]='S';
					a[x][y]=' ';
					y--;      
                }
            }
    }
    if(n=='s')
    {
			if(a[x+1][y]==' ')
             {	
                 
                a[x][y]=' ';
				x++;
                a[x][y]='S';    
            }
            else if(a[x+1][y]=='O')
            {
			if(a[x+2][y]=='*'||a[x+2][y]==' ')
				{		a[x+2][y]='O';
                    a[x][y]=' ';
					x++;
					a[x][y]='S';         
                }
            }
            else
            {
				if(a[x+1][y]=='*')
				{	
					a[x+1][y]='S';
					a[x][y]=' ';
					x++;   
                }
            }
    }
    if(n=='d')
    {
			if(a[x][y+1]==' ')
             {	   
                a[x][y]=' ';
				y++;
                a[x][y]='S';    
                
            }
            else if(a[x][y+1]=='O')
            {
			if(a[x][y+2]=='*'||a[x][y+2]==' ')
				{		a[x][y+2]='O';
                    a[x][y]=' ';
					y++;
					a[x][y]='S';         
                }
            }
            else
            {
				if(a[x][y+1]=='*')
				{	
					a[x][y+1]='S';
					a[x][y]=' ';
					y++;      
                }
            }
     }
		count=0;
		for(i=0;i<N;i++)
        {	
            
            j=0;
			t=b[i][j];
            u=b[i][j+1];
			if(a[t][u]==' ')
            {
				a[t][u]='*';
            }
			if(a[t][u]=='O')
				count++;
        }
		system("cls");
    }
    system("cls");
	printf("游戏胜利\(^o^)/\n");
	system("pause");
	return 0;
}
