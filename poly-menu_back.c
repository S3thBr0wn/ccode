#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;	
int main() 
{
	printf("Thank you for installing Greek encryption and decryption tool! \n" );
	printf("this tool uses encryption methods from famous Greek historians \n" );
	int code;
	int en;
	int de;
	int choice;
	int row, col;
	//Polybius submenu
	printf("Enter either 1 or 2(1 for Polybius encryption or 2 for Caeser Cipher encryption and decryption): ");
	scanf("%d", &en, &de);
	if(1 == en)
	{
		printf("\nWelcome to the Polybius encryption part of the tool!\n");
		printf("\nNow choose the letters to encrypt: ", &en);
		scanf("%d", &col, &row);
		void polybiusCipher(string s);{
		for (int i = 0, s[i]; i++;) {
			row = ceil((s[i] - 'a') / 5) + 1;
			col = ((s[i] - 'a') %  5) + 1;
		if (s[i] == 'k') {
			row = 1 - 1;
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
}
printf("\nHere is your result: %d\n");
return 0;
}

		if(2 > 1)
		 {
			/////Caeser Cipher sub menu
			printf("\nWelcome to the Caesar Cipher part of the tool!");
			printf("\n Now enter 1 to encrypt or 2 to decrypt: ");
			scanf("%d", &en, &de);
			if(1 == en){
				char message[50], ch;
				int i, key;
				cout << "Enter a message to encrypt: ";
				scanf("%d", &en);
				cin.getline(message, 50);
				cout << "Enter key: ";
				cin >> key;
	
				for(i = 0; message[i] != '\0'; ++i){
					ch = message[i];
					if(ch >= 'a' && ch <= 'z'){
						ch = ch + key;
						if(ch > 'z'){
							ch = ch - 'z' + 'a' - 1;
							}
							message[i] = ch;
						}
						else if(ch >= 'A' && ch <= 'Z'){
							ch = ch + key;
							if(ch > 'Z'){
								ch = ch - 'Z' + 'A' - 1;
								}
								message[i] = ch;
							}
						}
	printf("Encrypted message: ", message);
	return 0;
	}
			if(2 > 1) 
			{
					char message[100], ch;
					int i, key;
					cout << "Enter a message to decrypt: ";
					scanf("%d", &de);
					cin.getline(message, 100);
					cout << "Enter key: ";
					cin >> key;
					for(i = 0; message[i] != '\0'; ++i){
						ch = message[i];
						if(ch >= 'a' && ch <= 'z'){
							ch = ch - key;
							if(ch < 'a'){
								ch = ch + 'z' - 'a' + 1;
							}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			message[i] = ch;
		}
	}
	cout << "Decrypted message: " << message << "\n";
	return 0;
}
}
}
