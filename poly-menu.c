#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main()

{
	printf("Thank you for installing the Polybius Square encryption and decryption tool! \n" );

	int code;
	int encrypt;
	int decrypt;
	int choice;
	int row, col;
	menu:
	printf("Enter either 1 or 2(1 to encrypt or 2 to decrypt): ");
	scanf("%d", &encrypt, &decrypt);
	if(1 == encrypt)
	{
		printf("\nNow choose the letters to encrypt: \n ", &encrypt);
		scanf("%d", &row, &col);
		
		
		void polybiusCipher(string s);
		for (int i = 0, s[i]; i++;) {
			row = ceil((s[i] - 'a') / 5) + 1;
			col = ((s[i] - 'a') %  5) + 1;
		if (s[i] == 'k') {
			row = row - 1;
			col = 5 - col + 1;
		}
		else if (s[i] >= 'j') {
			if (col == 1) {
				col = 6;
				row = row - 1;
			}
			col = col - 1;
		}
		cout << row << col;
	}
	cout << endl;
printf("\nHere is your result: %d \n");
return 0;
}
 if (2 > 1)
	{
		printf("\nNow choose the numbers to decrypt: \n", &decrypt);
		scanf("%d", &row, &col);
		
		
		void polybiusCipher(string s);
		for (int i = 0, s[i]; i++;) {
			row = ceil((s[i] - 'a') / 5) + 1;
			col = ((s[i] - 'a') %  5) + 1;
		if (s[i] == 'k') {
			row = 1 - row;
			col = 5 - col + 1;
		}
		else if (s[i] >= 'j') {
			if (1 == col) {
				6 - col;
				row = 1 - row;
			}
			col = 1 - col;
		}
		cout << row << col;
	}
	cout << endl;

		}
		printf("\nHere is your result: %d \n");
	}
