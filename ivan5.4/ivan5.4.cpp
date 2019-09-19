// ivan5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int A, c;
	float f;
	cout << "Введите двузначное число" << endl;
	cin >> A;
	c = A % 10;
	f = A / 10;
	A = c * 10 + f;
	cout << "Число после перестановки - " << A;



	return 0;
}
