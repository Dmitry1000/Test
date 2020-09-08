// test 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "hello world hello cat hello ready ewrfew 41hellohfg hello ";
	string str2 = "hello";
	int pos[10];

	for (int i = 0; i < 10; i++)
		pos[i] = 0;

	int currentPosition = 0;

	int LWords;

	LWords = str2.length();

	for (int i = 0; i < 10; i++)
		{
		pos[i] = str.find(str2, currentPosition);
		if (pos[i] < 0)
		{
			pos[i] = 0;
			break;
		}
		currentPosition = pos[i] + LWords;
		
		}

	//Добавлен комментарий через сайт
	cout << pos;

	//Расширим функциональность в новой ветке... Под редактором кода нажато Commit changes. Create a new branch for this commit and start a pull request
}

