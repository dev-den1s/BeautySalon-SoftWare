#include "Services.h"

//cout << "==================================================================BArberShop=========================================================================================" << endl;
void fillarrbarber(BarberShop * b, int N)
{
	for (int i = 0; i < N; i++) {
		cin.get();
		b[i].fillbarber();
	}
}
void printarrbarberRus(BarberShop * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {
		b[i].printbarberRus();
		cout << "=====================================" << endl;
	}
}
void printarrbarberEngl(BarberShop * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printbarberEngl();
		cout << "=====================================" << endl;
	}

}

void ArrToFilebarber(BarberShop * b, int N)
{
	FILE *fp = fopen("barbershop.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N; i++) {
			b[i].toFilebarber(fp);
		}
	}
	fclose(fp);
}

BarberShop * ArrFromFilebarber(int & N)
{
	FILE*fp = fopen("barbershop.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		BarberShop *b = new BarberShop[N];
		for (int i = 0; i < N; i++) {
			b[i].fromFilebarber(fp);
		}
		fclose(fp);
		return b;
	}
}
void sumTotalBarberRus(BarberShop *b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tНеправильно указаны имя мастера или тип услуги :(\n\tПопробуйте позже");
}

void sumTotalBarberEngl(BarberShop * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tIncorrect name of the master or type of the service :(\n\tPlease, try again ");
}

void sortBarberPrice(BarberShop * b, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (b[j].price>b[j + 1].price)
				swap(b[j], b[j + 1]);
		}
	}
}

void changePriceBarber(BarberShop * b, int N, char *type, char *name_of_master)
{
	int c = 0;
	float newprice = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(b[i].type.str, type) == NULL&&strcmp(b[i].name_master.str, name_of_master) == NULL) {
			c++;
			cout << "New Price(Новая цена) -> ";
			cin >> newprice;
			b[i].price = newprice;
		}
	}
	if (c == 0)
		perror("\t\t\tFail//Ошибка");
}

BarberShop * deleteBarber(BarberShop * b, int & N, char * type, float price)
{
	int c = 0;
	N--;
	BarberShop*tmp = new BarberShop[N];
	int j = 0;
	for (int i = 0; i < N+1; i++) {
		if (strcmp(b[i].type.str, type) == NULL && price==b[i].price) {
			c++;
		}
		if (!(strcmp(b[i].type.str, type) == NULL && price == b[i].price))
		{
				tmp[j] = b[i];
				j++;
		}
	}
	if (c == 0) {
		perror("\t\tFail//Ошибка");
		N++;
		return b;
	}
	else {
		delete[]b;
		return tmp;
	}
	
}

BarberShop * addBarber(BarberShop * b, int & N)
{
	BarberShop *tmp = new BarberShop[N+1];
	int j = 0;
	for (int i = 0; i < N ; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillbarber2();
	//delete[]b;
	N++;
	return tmp;
}

//cout << "==================================================================Massage=========================================================================================" << endl;
void fillarrmassage(Massage * b, int N)
{
	for (int i = 0; i < N; i++) {
		cin.get();
		b[i].fillmassage();
	}
}

void printarrmassageRus(Massage * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printmassageRus();
		cout << "=====================================" << endl;
	}

}

void printarrmassageEngl(Massage * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printmassageEngl();
		cout << "=====================================" << endl;
	}

}

void ArrToFilemassage(Massage * b, int N)
{
	FILE *fp = fopen("massage.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N; i++) {
			b[i].toFilemassage(fp);
		}
	}
	fclose(fp);
}

Massage * ArrFromFilemassage(int & N)
{
	FILE*fp = fopen("massage.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		Massage *b = new Massage[N];
		for (int i = 0; i < N; i++) {
			b[i].fromFilemassage(fp);
		}
		fclose(fp);
		return b;
	}
}
void sumTotalMassageRus(Massage * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tНеправильно указаны имя мастера или тип услуги :(\n\tПопробуйте позже");
}

void sumTotalMassageEngl(Massage * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tIncorrect name of the master or type of the service :(\n\tPlease, try again ");
}

void sortMassagePrice(Massage * b, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (b[j].price>b[j + 1].price)
				swap(b[j], b[j + 1]);
		}
	}
}
void changePriceMassage(Massage * b, int N, char * type, char * name_of_master)
{
	int c = 0;
	float newprice = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(b[i].type.str, type) == NULL&&strcmp(b[i].name_master.str, name_of_master) == NULL) {
			c++;
			cout << "New Price(Новая цена) -> ";
			cin >> newprice;
			b[i].price = newprice;
		}
	}
	if (c == 0)
		perror("\t\t\tFail//Ошибка");
}
Massage * deleteMassage(Massage * b, int & N, char * type, float price)
{
	int c = 0;
	N--;
	Massage*tmp = new Massage[N];
	int j = 0;
	for (int i = 0; i < N + 1; i++) {
		if (strcmp(b[i].type.str, type) == NULL && price == b[i].price) {
			c++;
		}
		if (!(strcmp(b[i].type.str, type) == NULL && price == b[i].price))
		{
			tmp[j] = b[i];
			j++;
		}
	}
	if (c == 0) {
		perror("\t\tFail//Ошибка");
		N++;
		return b;
	}
	else {
		delete[]b;
		return tmp;
	}
}
Massage * addMassage(Massage * b, int & N)
{
	Massage *tmp = new Massage[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillmassage2();
	//delete[]b;
	N++;
	return tmp;
}
//cout << "=====================================================================================Маникюр====================================================================================" << end;
void fillarrnails(NailsService * b, int N)
{
	for (int i = 0; i < N; i++) {
		cin.get();
		b[i].fillnails();
	}
}

void printarrnailsRus(NailsService * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printnailsRus();
		cout << "=====================================" << endl;
	}

}

void printarrnailsEngl(NailsService * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printnailsEngl();
		cout << "=====================================" << endl;
	}
}


void ArrToFilenails(NailsService * b, int N)
{
	FILE *fp = fopen("nailsservice.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N; i++) {
			b[i].toFilenails(fp);
		}
	}
	fclose(fp);
}

NailsService * ArrFromFilenails(int & N)
{
	FILE*fp = fopen("nailsservice.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		NailsService *b = new NailsService[N];
		for (int i = 0; i < N; i++) {
			b[i].fromFilenails(fp);
		}
		fclose(fp);
		return b;
	}
}
void sumTotalNailsServiceRus(NailsService * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tНеправильно указаны имя мастера или тип услуги :(\n\tПопробуйте позже");
}
void sumTotalNailsServiceEngl(NailsService * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tIncorrect name of the master or type of the service :(\n\tPlease, try again ");
}
void sortNailsServicePrice(NailsService * b, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (b[j].price>b[j + 1].price)
				swap(b[j], b[j + 1]);
		}
	}
}
void changePriceNails(NailsService * b, int N, char * type, char * name_of_master)
{
	int c = 0;
	float newprice = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(b[i].type.str, type) == NULL&&strcmp(b[i].name_master.str, name_of_master) == NULL) {
			cout << "New Price(Новая цена) -> ";
			cin >> newprice;
			b[i].price = newprice;
			c++;
		}
	}
	if (c == 0)
		perror("\t\t\tFail//Ошибка");
}
NailsService * deleteNails(NailsService * b, int & N, char * type, float price)
{
	int c = 0;
	N--;
	NailsService*tmp = new NailsService[N];
	int j = 0;
	for (int i = 0; i < N + 1; i++) {
		if (strcmp(b[i].type.str, type) == NULL && price == b[i].price) {
			c++;
		}
		if (!(strcmp(b[i].type.str, type) == NULL && price == b[i].price))
		{
			tmp[j] = b[i];
			j++;
		}
	}
	if (c == 0) {
		perror("\t\tFail//Ошибка");
		N++;
		return b;
	}
	else {
		delete[]b;
		return tmp;
	}
}
NailsService * addNails(NailsService * b, int & N)
{
	NailsService *tmp = new NailsService[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillnails2();
	//delete[]b;
	N++;
	return tmp;
}
//cout << "=====================================================================================Cosmetology====================================================================================" << end;
void fillarrcosmet(Cosmetology * b, int N)
{
	for (int i = 0; i < N; i++) {
		cin.get();
		b[i].fillcosmet();
	}
}

void printarrcosmetRus(Cosmetology * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printcosmetRus();
		cout << "=====================================" << endl;
	}

}

void printarrcosmetEngl(Cosmetology * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printcosmetEngl();
		cout << "=====================================" << endl;
	}

}

void ArrToFilecosmet(Cosmetology * b, int N)
{
	FILE *fp = fopen("cosmetology.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N; i++) {
			b[i].toFilecosmet(fp);
		}
	}
	fclose(fp);
}

Cosmetology * ArrFromFilecosmet(int & N)
{
	FILE*fp = fopen("cosmetology.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		Cosmetology *b = new Cosmetology[N];
		for (int i = 0; i < N; i++) {
			b[i].fromFilecosmet(fp);
		}
		fclose(fp);
		return b;
	}
}
void sumTotalCosmetologyRus(Cosmetology * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tНеправильно указаны имя мастера или тип услуги :(\n\tПопробуйте позже");
}
void sumTotalCosmetologyEngl(Cosmetology * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tIncorrect name of the master or type of the service :(\n\tPlease, try again ");
}
void sortCosmetologyPrice(Cosmetology * b, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (b[j].price>b[j + 1].price)
				swap(b[j], b[j + 1]);
		}
	}
}
void changePriceCosm(Cosmetology * b, int N, char * type, char * name_of_master)
{
	int c = 0;
	float newprice = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(b[i].type.str, type) == NULL&&strcmp(b[i].name_master.str, name_of_master) == NULL) {
			c++;
			cout << "New Price(Новая цена) -> ";
			cin >> newprice;
			b[i].price = newprice;
		}
	}
	if (c == 0)
		perror("\t\t\tFail//Ошибка");
}
Cosmetology * deleteCosm(Cosmetology * b, int & N, char * type, float price)
{
	int c = 0;
	N--;
	Cosmetology*tmp = new Cosmetology[N];
	int j = 0;
	for (int i = 0; i < N + 1; i++) {
		if (strcmp(b[i].type.str, type) == NULL && price == b[i].price) {
			c++;
		}
		if (!(strcmp(b[i].type.str, type) == NULL && price == b[i].price))
		{
			tmp[j] = b[i];
			j++;
		}
	}
	if (c == 0) {
		perror("\t\tFail//Ошибка");
		N++;
		return b;
	}
	else {
		delete[]b;
		return tmp;
	}
}
Cosmetology * addCosm(Cosmetology * b, int & N)
{
	Cosmetology *tmp = new Cosmetology[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillcosmet2();
	//delete[]b;
	N++;
	return tmp;
}
//cout << "=====================================================================================MAkeUp====================================================================================" << end;
void fillarrmakeup(MakeUp * b, int N)
{
	for (int i = 0; i < N; i++) {
		cin.get();
		b[i].fillmakeup();
	}
}

void printarrmakeupRus(MakeUp * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printmakeupRus();
		cout << "=====================================" << endl;
	}

}

void printarrmakeupEngl(MakeUp * b, int N)
{
	cout << "=====================================" << endl;
	for (int i = 0; i < N; i++) {

		b[i].printmakeupEngl();
		cout << "=====================================" << endl;
	}

}

void ArrToFilemakeup(MakeUp * b, int N)
{
	FILE *fp = fopen("makeupology.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N; i++) {
			b[i].toFilemakeup(fp);
		}
	}
	fclose(fp);
}

MakeUp * ArrFromFilemakeup(int & N)
{
	FILE*fp = fopen("makeupology.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		MakeUp *b = new MakeUp[N];
		for (int i = 0; i < N; i++) {
			b[i].fromFilemakeup(fp);
		}
		fclose(fp);
		return b;
	}
}

void sumTotalMakeUpRus(MakeUp * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tНеправильно указаны имя мастера или тип услуги :(\n\tПопробуйте позже");
}

void sumTotalMakeUpEngl(MakeUp * b, int N, char * name, char * type, float & total_price)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(name, b[i].name_master.str) == NULL && strcmp(type, b[i].type.str) == NULL) {
			total_price += b[i].price;
			c++;
		}
	}
	if (c == 0)
		perror("\tIncorrect name of the master or type of the service :(\n\tPlease, try again ");
}

void sortMakeUpPrice(MakeUp * b, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (b[j].price>b[j + 1].price)
				swap(b[j], b[j + 1]);
		}
	}
}

void changePriceMake(MakeUp * b, int N, char * type, char * name_of_master)
{
	int c = 0;
	float newprice = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(b[i].type.str, type) == NULL&&strcmp(b[i].name_master.str, name_of_master) == NULL) {
			c++;
			cout << "New Price(Новая цена) -> ";
			cin >> newprice;
			b[i].price = newprice;
		}
	}
	if (c == 0)
		perror("\t\t\tFail//Ошибка");
}

MakeUp * deleteMake(MakeUp * b, int & N, char * type, float price)
{
	int c = 0;
	N--;
	MakeUp*tmp = new MakeUp[N];
	int j = 0;
	for (int i = 0; i < N + 1; i++) {
		if (strcmp(b[i].type.str, type) == NULL && price == b[i].price) {
			c++;
		}
		if (!(strcmp(b[i].type.str, type) == NULL && price == b[i].price))
		{
			tmp[j] = b[i];
			j++;
		}
	}
	if (c == 0) {
		perror("\t\tFail//Ошибка");
		N++;
		return b;
	}
	else {
		delete[]b;
		return tmp;
	}
}

MakeUp * addMake(MakeUp * b, int & N)
{
	MakeUp *tmp = new MakeUp[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillmakeup2();
	//delete[]b;
	N++;
	return tmp;
}

void cinget()
{
	
		cin.get();

}

//cout << "=============================================================Работа над чеком================================================================" << endl;

void fillarrcheckEngl(Check * b, int N)
{
	for (int i = 0; i < N; i++) {
		b[i].fillcheckEngl();
	}
}

void fillarrcheckRus(Check * b, int N)
{
	for (int i = 0; i < N; i++) {
		b[i].fillcheckRus();
	}
}

void AddToFileCheck(Check*c, int &N)
{
	FILE *fp = fopen("barbershopcheck.bin", "wb");
	if (fp == NULL)
		perror("Error//Ошибка");
	else {
		fwrite(&N, sizeof(int), 1, fp);
		for (int i = 0; i < N ; i++) {
			c[i].toFilecheck(fp);
		}
	}
	fclose(fp);
}

Check *AddFromFileCheck(int&N)
{
	FILE*fp = fopen("barbershopcheck.bin", "rb");
	if (fp == NULL) {
		perror("Ошибка открытия файла");
		N = 0;
		return nullptr;
	}
	else {
		fread(&N, sizeof(int), 1, fp);
		Check *c = new Check[N];
		for (int i = 0; i < N; i++) {
			c[i].fromFilecheck(fp);
		}
		fclose(fp);
		return c;
	}
}

void printCheckEngl(Check * c, int N)
{
	for (int i = 0; i < N; i++) {
		c[i].printcheckEngl();

	}
}

void printCheckRus(Check * c, int N)
{
	for (int i = 0; i < N; i++) {
		c[i].printcheckRus();

	}
}

Check * addCheck(Check * b, int & N)
{
	Check *tmp = new Check[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillcheckEngl();
	//delete[]b;
	N++;
	return tmp;
}

Check * addCheckRus(Check * b, int & N)
{
	Check *tmp = new Check[N + 1];
	int j = 0;
	for (int i = 0; i < N; i++) {
		tmp[j] = b[i];
		j++;
	}
	tmp[j].fillcheckRus();
	//delete[]b;
	N++;
	return tmp;
}

void totalPrice(Check * c, int N,float &totalprice)
{
	for (int i = 0; i < N; i++) {
		totalprice += c[i].price;
	}
}

void nullCheck()
{
	FILE *fp = fopen("barbershopcheck.bin", "wb");
}
