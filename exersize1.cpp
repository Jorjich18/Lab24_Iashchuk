#include <iostream>
#pragma warning(disable: 4996)
using namespace std;

int znaki(char* s)
{
	int kol = 0;
	for (int i = 0; i < strlen(s); i++)
		if (s[i] == '.' || s[i] == ',' || s[i] == ';' || s[i] == ':' || s[i] == '?' || s[i] == '!') {
			kol++;
		}
	return kol;
}

int main()
{
	setlocale(LC_ALL, ".1251");
	char s[100];
	puts("����i�� �����: ");
	gets_s(s);
	int kol = znaki(s);
	if (kol > 0) printf("�i���i��� ����i����� ����i�: %i", kol);
	else puts("����i����� ����i� ����");
	cout << endl;
	system("pause");
	return 0;
}