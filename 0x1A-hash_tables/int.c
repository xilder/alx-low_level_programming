#include <stdio.h>

int main(void) {
	int c, v;
	printf("enter number");
	scanf("%d", &c);
	printf("enter number");
	scanf("%d", &v);
	int i = (c << v);
	int j = (c >> v);
	printf("%d %d", i, j);
	return 0;
}
