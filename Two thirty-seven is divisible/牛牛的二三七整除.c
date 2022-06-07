#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int q = 0, w = 0, r = 0, t = 0;
	scanf("%d", &q);
	if (!(q % 2))
	{
		w = 2;
	}
	if (!(q % 3))
	{
		r = 3;
	}
	if (!(q % 7))
	{
		t = 7;
	}
	if (w && !(r) && !(t))
	{
		printf("%d\n", w);
	}
	else if (r && !(w) && !(t))
	{
		printf("%d\n", r);
	}
	else if (t && !(w) && !(r))
	{
		printf("%d\n", t);
	}
	else if (w && r && !(t))
	{
		printf("%d %d\n", w, r);
	}
	else if (w && !(r) && t)
	{
		printf("%d %d\n", w, t);
	}
	else if (!(w) && r && t)
	{
		printf("%d %d\n", r, t);
	}
	else if (w && r && t)
	{
		printf("%d %d %d\n", w, r, t);
	}
	else
	{
		printf("n\n");
	}
	return 0;
}