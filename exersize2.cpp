#include <iostream>
#pragma warning(disable: 4996)
using namespace std;

int lowreg(char* s)
{
	int kol = 0;
	for (int i = 0; i < strlen(s); i++)
		if (islower(s[i])) {
			s[i] = toupper(s[i]);
			kol++;
		}
	return kol;
}

int main()
{
	char s[100];
	puts("input one string: "); gets_s(s);
	int kol = lowreg(s);
	puts(s);
	cout << "Tke number of low-reg letters - " << kol << endl;
	system("pause");
	return 0;
}