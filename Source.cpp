#include<stdio.h>
int main() {
	int x, y, z, min;
	scanf_s("%d %d %d", &x,&y,&z);
	if (x <= y && x <= z) {
		min = x;
	}
	if (y <= x && y <= z) {
		min = y;
	}
	if (z <= x && z <= y) {
		min = z;
	}
	printf("%d", min);


		
	
}

