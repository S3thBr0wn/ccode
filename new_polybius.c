#include <cmath>
#include <iostream>
#include <stdio.h>
using namespace std;

void polybiusCipher(string s) {
	int row, col;
	
	for (int i = 0; s[i]; i++) {
		
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
}

	int main() {
		string s = "sdb";
		polybiusCipher(s);
		return 0;
	}
