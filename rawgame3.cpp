#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int magic_num = 0;
	bool win = false;
	magic_num = 1 + rand() % 10;
	int i = 0;
	int num;
	int lives = 5;
	int ugadal = 0;
	cout << "Угадай число!!!\n";
	do {
		cout << "Введите число:\n";
		cin >> num;
		if (num != magic_num) {
			if (num > magic_num) {
				cout << "Ваше число больше\n";
				lives--;
			}
			else {
				cout << "Ваше число меньше\n";
				lives--;
			}
			if (num == 0) {
				break;
			}
		}
		if (lives == 0) {
			num = magic_num;
			ugadal == 2;
		}
		i++;
	} while (num != magic_num);
	if (ugadal == 1) {
		cout << "\nЧисло: " << magic_num << "\nВы угадали\n";
		cout << "\n" << i << " попыток\n";
	}
	if (ugadal == 2) {
		cout << "\nЧисло: " << magic_num << "\nВы не угадали\n";
		cout << "У вас закончились жизни!!!";
	}
	
}
