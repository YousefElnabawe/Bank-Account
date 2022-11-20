#include <stdio.h>

typedef struct bank {
	int account_pan[50];
	int expiryMonth[50];
	int expiryYear[50];
	char username[50];
}key;

void getCardPan() {
	key user;
	printf("Please Enter account number: \n");
	scanf("%d", user.account_pan);
}

void getCardExpiryDate() {
	key user;
	printf("Please Enter expiry month: \n");
	scanf("%d", user.expiryMonth);
	printf("Please Enter expiry year: \n");
	scanf("%d", user.expiryYear);
}

void getCardHolderName() {
	key user;
	printf("Please Enter card holder Name: \n");
	scanf("%s", user.username);
}