#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>

int number(int, int);
int random(int, int);

int max=10000;
int main() 
{
	int a, b, r, n,ans,*p_ch,*p2;
	r = 0;
	int check[10000];
	scanf("%d %d", &a, &b);
	scanf("%d", &n);
	while (r < n)
	{
		if (r >= max)
		{
			printf("Output : ERROR\n");
			r++;
			continue;
		}
		ans = number(a, b);
		p_ch = check;
		if(r>0)
		{ 
		 while (*p_ch != '\0')
		 {
			 if (*p_ch == ans)
			 {
				 p_ch = check;
				 ans = number(a, b);
			 }
			 else 
			 {
				 p_ch++;
			 }
		 }
		}
		check[r] = ans;
		check[r + 1] = NULL;
		printf("Output : %d\n", ans);
		r++;
	}
}

int number(int a, int b)
{
	int num;
	if (a > b)
	{
		num=random(a, b);
	}
	else
	{
		num=random(b, a);
	}
	return num;
     
}

int random(int x,int y)
{
	int a=-1;
	max = (x - y) + 1;
	do
	{
			a = rand();
			if (a >= y && a <= x) break;

	} while (1);
	return a;
}
