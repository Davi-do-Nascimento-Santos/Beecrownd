#include <stdio.h>

int main(){
	int seconds, s, m, h;
	scanf("%d", &seconds);
	h = seconds / 3600;
	m = (seconds % 3600) / 60;
	s = (seconds % 3600) % 60;
	printf("%d:%d:%d\n", h, m, s);
	return 0;
}
