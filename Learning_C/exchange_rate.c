#include <stdio.h>

int usd_to_inr();

int main() {
	int usd; 
	printf("Enter USD: $");
	scanf_s("%d",&usd);
	int inr = usd_to_inr(usd);
	printf("$%d = Rs%d",usd,inr);
	return 0;
}

int usd_to_inr(int usd) {
	return usd * 83;
}