#pragma once
#include "Administrators.h"


void arrToFileadmins(Admins * a, int N)
{
	FILE *fp = fopen("passwords.bin", "wb");
	if (fp == NULL)
		perror("Ошибка открытия файла");
	else {
		fwrite(&N, sizeof(int), 1, fp);

		for (int i = 0; i < N; i++) {
			a[i].toFileadmins(fp);
		}
		fclose(fp);
	}


}

Admins * arrFromFileadmins(int & N)
{
	FILE *fp = fopen("passwords.bin", "rb");
	if (fp == NULL)
	{
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		Admins * a = new Admins[N];
		for (int i = 0; i < N; i++) {
			a[i].fromFileadmins(fp);
		}
		fclose(fp);
		return a;
	}
}

void filladmins(Admins * a, int N)
{
	cin.get();
	for (int i = 0; i < N; i++) {
		a[i].fillAlladmins();
	}
}

void printadmins(Admins * a, int N)
{
	for (int i = 0; i < N; i++) {
		a[i].printAlladmins();
		cout << "------" << endl;
	}
}

bool checkPassword(Admins * a, int N, char * username, char *password)
{
	for (int i = 0; i < N; i++) {
		if (strcmp(username, a[i].name.str) == NULL) {
			if (strcmp(password, a[i].password_name.str) == NULL)
				return true;
			else
				return false;
		}
	}
}
