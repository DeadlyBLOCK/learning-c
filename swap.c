#include <stdio.h>

int swap(int *a,int *b)
{

	int c;
	c = *a;
	*a = *b;
	*b = c;
	return 0;
}

int main(void)
{

	int a;
	int b;

	printf("A?: ");
	scanf("%d", &a);
        printf("B?: ");
        scanf("%d", &b);

        swap(&a,&b);

        printf("a = %d, b = %d\n", a, b);

}
