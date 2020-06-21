#pragma once
#include"MyString.h"
#pragma once
#include"Data.h"



struct Admins {
	MyString name;
	MyString password_name;

	void fillAlladmins() {

		char tmp[256] = "";
		cout << "Введите имя администратора -> ";

		cin.getline(tmp, 256);
		name.setMyString(tmp);
		cout << "Введите пароль администратора -> ";
		cin.getline(tmp, 256);
		password_name.setMyString(tmp);

	}
	void printAlladmins() {
		cout << " Имя администратора - " << name.str << endl;
		cout << "Пароль администратора - " << password_name.str << endl;
	}
	void toFileadmins(FILE*fp) {
		fwrite(&name.length, sizeof(int), 1, fp);
		fwrite(name.str, sizeof(char), name.length, fp);
		fwrite(&password_name.length, sizeof(int), 1, fp);
		fwrite(password_name.str, sizeof(char), password_name.length, fp);
	}

	void fromFileadmins(FILE *fp) {
		fread(&name.length, sizeof(int), 1, fp);
		name.str = new char[name.length + 1];
		fread(name.str, sizeof(char), name.length, fp);
		name.str[name.length] = '\0';

		fread(&password_name.length, sizeof(int), 1, fp);
		password_name.str = new char[password_name.length + 1];
		fread(password_name.str, sizeof(char), password_name.length, fp);
		password_name.str[password_name.length] = '\0';
	}
};
void arrToFileadmins(Admins *a, int N);
Admins * arrFromFileadmins(int& N);
void filladmins(Admins *a, int N);
void printadmins(Admins *a, int N);
bool checkPassword(Admins *a, int N, char *username, char *password);



