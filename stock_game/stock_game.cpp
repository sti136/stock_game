// stock_game.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

void normal_day() {
	int number, bet, leverage;
	long long hsi = 30000;
	char confirmation;
	long long saving = 10000;
	double change = 0;
	int n = 0;
	int sign = 0;
	int day;
	cout << "How may day(s) you wanna play?" << endl;
	cin >> day;
	
	cout << "          " << "hang seng index" << "          " << "% change" << endl;
	cout << "          " << hsi << "                      " << change << endl;
	while (n < day) {
		cout << "--------------------" << "Day" << n + 1 << "--------------------" << endl;
	confirm:
		cout << "How much you bet ?" << "\n";
		cin >> number;


		cout << "leverage?x2,x5,x10" << "\n";
		cin >> leverage;
		cout << "The amount is : " << number * leverage << " You sure? y/n" << endl;
		cin >> confirmation;
		if (confirmation != 'y')
			goto confirm;

		double money_borrowed = leverage * number;
		if (leverage > 0)
			saving -= number;

		cout << "You current saving is : " << saving << endl;
		int random0 = rand() % 200;
		int i = 0;
		int random;
		srand(time(NULL));
		while (i < random0) {
			random = rand() % 20;
			i++;
		}

		switch (random)
		{
		case(0):
			change = 0.01;
			break;

		case(1):
			change = 0.05;
			break;

		case(2):
			change = 0.1;
			break;

		case(3):
			change = 0.15;
			break;

		case(4):
			change = 0.2;
			break;

		case(5):
			change = 0.25;
			break;

		case(6):
			change = 0.3;
			break;
		case(7):
			change = 0.35;
			break;
		case(8):
			change = 0.4;
			break;
		case(9):
			change = 0.45;
			break;
		case(10):
			change = 0.50;
			break;
		case(11):
			change = 0.55;
			break;
		case(12):
			change = 0.60;
			break;
		case(13):
			change = 0.65;
			break;
		case(14):
			change = 0.7;
			break;
		case(15):
			change = 0.75;
			break;
		case(16):
			change = 0.8;
			break;
		case(17):
			change = 0.85;
			break;
		case(18):
			change = 0.9;
			break;
		case(19):
			change = 0.95;
			break;
		case(20):
			change = 1;
			break;
		}
		int random3 = rand() % 200;
		int j = 0;
		int random2;
		while (j < random3) {
			random2 = round(rand() % 2);
			j++;
		}
		switch (random2)
		{
		case(0):
			sign = -1;
			break;
		case(1):
			sign = 1;
			break;
		}
		change *= sign;
		hsi *= (1 + change);
		cout << "          " << "hang seng index" << "          " << "% change" << endl;
		cout << "          " << hsi << "                      " << change * 100 << endl;
		money_borrowed *= (1 + change);

		saving += (money_borrowed - number * (leverage - 1));
		cout << "You" << " ";
		if (change > 0)

			cout << "gain" << " " << "$" << (long long)(money_borrowed - (leverage - 1) * number) << endl;

		else
			cout << "lost" << " " << "$" << (long long)(number * leverage * change * -1) << endl;


		cout << "Your current saving is: " << saving << " " << "Good Luck!" << endl;
		n++;
	}
};

int main() {
	
	
	
		normal_day();
	

}


