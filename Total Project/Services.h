#pragma once
#include"MyString.h"
#pragma once
#include"Administrators.h"

struct BarberShop {
	MyString name_master;
	MyString type;
	float price;
	void fillbarber() {
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void fillbarber2() {
		char tmp[256] = "";
		cin.get();
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	
	void printbarberRus() {
		cout << "Имя мастера -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Название услуги -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Цена за данную услугу -> " << price << " ." << endl;
	}
	void printbarberEngl() {
		cout << "Specialist name -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Name of the service -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Price for this service -> " << price << " ." << endl;
	}
	void toFilebarber(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&price, sizeof(float), 1, fp);

	}
	void fromFilebarber(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&price, sizeof(float), 1, fp);
	}
	void fromFilebarbercheck(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
	}
};
void fillarrbarber(BarberShop*b, int N);
void printarrbarberRus(BarberShop*b, int N);
void printarrbarberEngl(BarberShop*b, int N);
void ArrToFilebarber(BarberShop*b, int N);

BarberShop *ArrFromFilebarber(int&N);
void sumTotalBarberRus(BarberShop *b, int N, char *name, char *type, float &total_price);
void sumTotalBarberEngl(BarberShop *b, int N, char *name, char *type, float &total_price);
void sortBarberPrice(BarberShop *b, int N);
void changePriceBarber(BarberShop *b, int N,char *type,char *name_of_master);
BarberShop *deleteBarber(BarberShop *b, int &N, char *type, float price);
BarberShop*addBarber(BarberShop *b, int &N);

struct Massage {
	MyString name_master;
	MyString type;
	int time = 0;
	float price = 0;
	void fillmassage() {
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите время данной услуги -> ";
		cin >> time;
		cout << "Введите цену данной услуги -> ";
		cin >> price;
	}
	void fillmassage2() {
		char tmp[256] = "";
		cin.get();
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите время данной услуги -> ";
		cin >> time;
		cout << "Введите цену данной услуги -> ";
		cin >> price;
	}
	void printmassageRus() {
		cout << "Имя мастера -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Название услуги -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Время данной услуги -> " << time << " ." << endl;
		cout << "-------------------------------------" << endl;
		cout << "Цена за данную услугу -> " << price << " ." << endl;
	}
	void printmassageEngl() {
		cout << "Specialist name -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Name of the service -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Time of this service -> " << time << " ." << endl;
		cout << "-------------------------------------" << endl;
		cout << "Price for this service -> " << price << " ." << endl;
	}
	void toFilemassage(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&time, sizeof(int), 1, fp);
		fwrite(&price, sizeof(float), 1, fp);

	}
	void fromFilemassage(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&time, sizeof(int), 1, fp);
		fread(&price, sizeof(float), 1, fp);
	}
};
void fillarrmassage(Massage*b, int N);
void printarrmassageRus(Massage*b, int N);
void printarrmassageEngl(Massage*b, int N);
void ArrToFilemassage(Massage*b, int N);
Massage *ArrFromFilemassage(int&N);
void sumTotalMassageRus(Massage *b, int N, char *name, char *type, float &total_price);
void sumTotalMassageEngl(Massage *b, int N, char *name, char *type, float &total_price);
void sortMassagePrice(Massage *b, int N);
void changePriceMassage(Massage *b, int N, char *type, char *name_of_master);
Massage *deleteMassage(Massage *b, int &N, char *type, float price);
Massage*addMassage(Massage *b, int &N);


struct NailsService {
	MyString name_master;
	MyString type;
	float price;

	void fillnails() {
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void fillnails2() {
		char tmp[256] = "";
		cin.get();
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void printnailsRus() {
		cout << "Имя мастера -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Название услуги -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Цена за данную услугу -> " << price << " ." << endl;
	}
	void printnailsEngl() {
		cout << "Specialist name -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Name of the service -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Price for this service -> " << price << " ." << endl;
	}
	void toFilenails(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&price, sizeof(float), 1, fp);

	}
	void fromFilenails(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&price, sizeof(float), 1, fp);
	}
};
void fillarrnails(NailsService*b, int N);
void printarrnailsRus(NailsService*b, int N);
void printarrnailsEngl(NailsService*b, int N);
void ArrToFilenails(NailsService*b, int N);
NailsService *ArrFromFilenails(int&N);
void sumTotalNailsServiceRus(NailsService *b, int N, char *name, char *type, float &total_price);
void sumTotalNailsServiceEngl(NailsService *b, int N, char *name, char *type, float &total_price);
void sortNailsServicePrice(NailsService *b, int N);
void changePriceNails(NailsService *b, int N, char *type, char *name_of_master);
NailsService *deleteNails(NailsService *b, int &N, char *type, float price);
NailsService*addNails(NailsService *b, int &N);

struct Cosmetology {
	MyString name_master;
	MyString type;
	float price;

	void fillcosmet() {
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void fillcosmet2() {
		char tmp[256] = "";
		cin.get();
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void printcosmetRus() {
		cout << "Имя мастера -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Название услуги -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Цена за данную услугу -> " << price << " ." << endl;
	}
	void printcosmetEngl() {
		cout << "Specialist name -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Name of the service -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Price for this service -> " << price << " ." << endl;
	}
	void toFilecosmet(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&price, sizeof(float), 1, fp);

	}
	void fromFilecosmet(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&price, sizeof(float), 1, fp);
	}
};
void fillarrcosmet(Cosmetology*b, int N);
void printarrcosmetRus(Cosmetology*b, int N);
void printarrcosmetEngl(Cosmetology*b, int N);
void ArrToFilecosmet(Cosmetology*b, int N);
Cosmetology *ArrFromFilecosmet(int&N);
void sumTotalCosmetologyRus(Cosmetology *b, int N, char *name, char *type, float &total_price);
void sumTotalCosmetologyEngl(Cosmetology *b, int N, char *name, char *type, float &total_price);
void sortCosmetologyPrice(Cosmetology *b, int N);
void changePriceCosm(Cosmetology *b, int N, char *type, char *name_of_master);
Cosmetology *deleteCosm(Cosmetology *b, int &N, char *type, float price);
Cosmetology*addCosm(Cosmetology *b, int &N);

struct MakeUp {
	MyString name_master;
	MyString type;
	float price;

	void fillmakeup() {
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}

	void fillmakeup2() {
		char tmp[256] = "";
		cin.get();
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void printmakeupRus() {
		cout << "Имя мастера -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Название услуги -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Цена за данную услугу -> " << price << " ." << endl;
	}
	void printmakeupEngl() {
		cout << "Specialist name -> " << name_master.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Name of the service -> " << type.str << " ;" << endl;
		cout << "-------------------------------------" << endl;
		cout << "Price for this service -> " << price << " ." << endl;
	}
	void toFilemakeup(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&price, sizeof(float), 1, fp);

	}
	void fromFilemakeup(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&price, sizeof(float), 1, fp);
	}
};
void fillarrmakeup(MakeUp*b, int N);
void printarrmakeupRus(MakeUp*b, int N);
void printarrmakeupEngl(MakeUp*b, int N);
void ArrToFilemakeup(MakeUp*b, int N);
MakeUp *ArrFromFilemakeup(int&N);
void sumTotalMakeUpRus(MakeUp *b, int N, char *name, char *type, float &total_price);
void sumTotalMakeUpEngl(MakeUp *b, int N, char *name, char *type, float &total_price);
void sortMakeUpPrice(MakeUp *b, int N);
void changePriceMake(MakeUp *b, int N, char *type, char *name_of_master);
MakeUp *deleteMake(MakeUp *b, int &N, char *type, float price);
MakeUp*addMake(MakeUp *b, int &N);

void cinget();
//cout << "==========================================================================Чеккккккк===============================================================================================" << endl;

struct Check {
	MyString name_master;
	MyString type;
	float price;
	void fillcheckRus() {
		cin.get();
		char tmp[256] = "";
		cout << "Введите имя мастера -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Введите название услуги -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Введите цену за данную услугу -> ";
		cin >> price;
	}
	void fillcheckEngl() {
		cin.get();
		char tmp[256] = "";
		cout << "Enter Specialist`s name -> ";
		cin.getline(tmp, 256);
		name_master.setMyString(tmp);
		cout << "Enter Name of the service -> ";
		cin.getline(tmp, 256);
		type.setMyString(tmp);
		cout << "Enter the price of this service -> ";
		cin >> price;
	}
	void printcheckRus() {
		cout << "# Имя мастера -> " << name_master.str << " ;                        " << endl;
		cout << "# Название услуги -> " << type.str << " ;                          " << endl;
		cout << "# Цена услуги -> " << price << " грн. ;                          " << endl;
		cout << "#---------------------------------------------------------------#" << endl;
	}
	void printcheckEngl() {
		cout << "# Specialist`s name -> " << name_master.str << " ;                   " << endl;
		cout << "# Name of the service -> " << type.str << " ;                        " << endl;
		cout << "# Price of this service -> " << price << " ua. ;                   " << endl;
		cout << "#---------------------------------------------------------------#" << endl;
	}
	void toFilecheck(FILE *fp) {
		fwrite(&name_master.length, sizeof(int), 1, fp);
		fwrite(name_master.str, sizeof(char), name_master.length, fp);
		fwrite(&type.length, sizeof(int), 1, fp);
		fwrite(type.str, sizeof(char), type.length, fp);
		fwrite(&price, sizeof(float), 1, fp);
	}
	void fromFilecheck(FILE*fp) {
		fread(&name_master.length, sizeof(int), 1, fp);
		name_master.str = new char[name_master.length + 1];
		fread(name_master.str, sizeof(char), name_master.length, fp);
		name_master.str[name_master.length] = '\0';
		fread(&type.length, sizeof(int), 1, fp);
		type.str = new char[type.length + 1];
		fread(type.str, sizeof(char), type.length, fp);
		type.str[type.length] = '\0';
		fread(&price, sizeof(float), 1, fp);
	}
};
void fillarrcheckEngl(Check*b, int N);
void fillarrcheckRus(Check*b, int N);
void AddToFileCheck(Check*c, int &N);
Check *AddFromFileCheck(int&N);
void printCheckEngl(Check *c, int N);
void printCheckRus(Check*c, int N);
Check*addCheck(Check *b, int &N);
Check*addCheckRus(Check *b, int &N);
void totalPrice(Check *c, int N, float &totalprice);
void nullCheck();





