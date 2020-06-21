#pragma once
#include"Services.h"
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N_foradmins;                           char user_tatiana[] = "Tatiana";
	Admins *admins = nullptr;                  char user_eveline[] = "Eveline";
	admins = arrFromFileadmins(N_foradmins);   char user_maria[] = "Maria";
	int N_forbarber;
	BarberShop *barber = nullptr;
	barber = ArrFromFilebarber(N_forbarber);
	int N_formassage;
	Massage *massage = nullptr;
	massage = ArrFromFilemassage(N_formassage);
	int N_fornails;
	NailsService *nails = nullptr;
	nails = ArrFromFilenails(N_fornails);
	int N_forcosm;
	Cosmetology *cosmetology = nullptr;
	cosmetology = ArrFromFilecosmet(N_forcosm);
	int N_formakeup;
	MakeUp *makeup = nullptr;
	makeup = ArrFromFilemakeup(N_formakeup);
	int N = 0;
	Check *check = nullptr;
	Date nowdate;
	nowdate.getNowDate();
	FILE*file = nullptr;
	int menu1 = 0; int bar = 0;    int mak = 0;            char type_of_sevice[100] = "";
	int menu2 = 0; int mas = 0;    float totalprice = 0;   float someprice = 0;
	int menu3 = 0; int nail = 0;   char password[50] = "";
	int menu4 = 0; int cosm = 0;   char name_of_master[60] = "";
	do {
		system("cls");
		cout << " ________________________________________________________________________" << endl;
		cout << "|                                                                        |" << endl;
		cout << "|########################################################################|" << endl;
		cout << "|#\t\t\tPlease, select your language                    #|" << endl;
		cout << "|#\t\t\tПожалуйста, выберите язык                       #|" << endl;
		cout << "|########################################################################|" << endl;
		cout << "|#\t\t(1) - Английский (English)                              #|" << endl;
		cout << "|#----------------------------------------------------------------------#|" << endl;
		cout << "|#\t\t(2) - Русский    (Russian)                              #|" << endl;
		cout << "|#----------------------------------------------------------------------#|" << endl;
		cout << "|#\t\t(3) - Exit                                              #|" << endl;
		cout << "|########################################################################|" << endl;
		cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
		cout << "|########################################################################|" << endl;
		cout << "|________________________________________________________________________|" << endl;
		cin >> menu1;

		switch (menu1) {
		case 1://///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////1/
			do {
				system("cls");
				cout << " ________________________________________________________________________" << endl;
				cout << "|                                                                        |" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|#\t\t\tPlease select your account                      #|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|#\t\t(1) - Administrator Tatiana                             #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(2) - Administrator Eveline                             #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(3) - Manager Maria                                     #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(4) - Exit                                              #|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|________________________________________________________________________|" << endl;
				cin >> menu2;

				switch (menu2) {
				case 1:////////////////////////////////////////////////////////////////////////////////////////////////////////////////////2
					cout << "Please enter your password -> ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_tatiana, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tHello Tatiana                                   #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t(1) -  Accept the Order                                         #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(2) -  Print price-list of each services                        #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(3) -  Sort by price of each services                           #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(4) -  Exit                                                     #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							check = nullptr;
							totalprice = 0;
							N = 0;
							AddToFileCheck(check, N);
							cin >> menu3;

							switch (menu3) {
								
							case 1:///////////////////////////////////////////////////////////////////////3
								do {
									
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tAccept the Order                                #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Print Check                                      #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;
									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										bar++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										/*check = AddFromFileCheck(N);
										printCheckEngl(check, N);
										system("pause");*/
										break;
									case 2://///////////////////////////////////////////////////////4
										mas++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 3://///////////////////////////////////////////////////////4
										nail++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 4://///////////////////////////////////////////////////////4
										cosm++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 5://///////////////////////////////////////////////////////4
										mak++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 6://///////////////////////////////////////////////////////4
										system("cls");
										if (check == nullptr)
										{
											perror("\t\tNot enough information");
											system("pause");
											break;
										}
										if (bar != 0 || mas != 0 || nail != 0 || cosm != 0 || mak != 0) {
											
											totalPrice(check, N, totalprice);
											cout.width();
											cout << "#################################################################" << endl;
											cout << "#                      ! Check !                                #" << endl;
											cout << "#################################################################" << endl;
											printCheckEngl(check, N);
											cout << "#################################################################" << endl;
											cout.width(); cout << "# TOTAL PRICE : " << totalprice << " grn.                                        #" << endl;
											nowdate.printDateforChek();
											cout << "#################################################################" << endl;
											
										}
										else
											perror("\t\tNot enough information");
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); system("pause"); break;
									}

								} while (menu4 != 6);
								break;
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tPrint price-list of each services               #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tSort by price of each services                  #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										sortBarberPrice(barber, N_forbarber);
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										sortMassagePrice(massage, N_formassage);
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										sortNailsServicePrice(nails, N_fornails);
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										sortCosmetologyPrice(cosmetology, N_forcosm);
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										sortMakeUpPrice(makeup, N_formakeup);
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\t\t\t\BYE Tatiana :-)\n";
								system("pause");
								break;
							default:perror("\t\tError\n"); perror("\t\tTry again "); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Passwords don`t match\nTry Again :(");
						system("pause");
						break;
					}
					break;
				case 2:
					cout << "Please enter your password -> ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_eveline, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tHello Eveline                                   #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t(1) -  Accept the Order                                         #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(2) -  Print price-list of each services                        #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(3) -  Sort by price of each services                           #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(4) -  Exit                                                     #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							cin >> menu3;
							check = nullptr;
							totalprice = 0;
							N = 0;
							AddToFileCheck(check, N);

							switch (menu3) {
							case 1:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tAccept the Order                                #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Print Check                                      #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;
									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										bar++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										/*check = AddFromFileCheck(N);
										printCheckEngl(check, N);
										system("pause");*/
										break;
									case 2://///////////////////////////////////////////////////////4
										mas++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 3://///////////////////////////////////////////////////////4
										nail++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 4://///////////////////////////////////////////////////////4
										cosm++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 5://///////////////////////////////////////////////////////4
										mak++;
										check = addCheck(check, N);
										AddToFileCheck(check, N);
										break;
									case 6://///////////////////////////////////////////////////////4
										system("cls");
										if (check == nullptr)
										{
											perror("\t\tNot enough information");
											system("pause");
											break;
										}
										if (bar != 0 || mas != 0 || nail != 0 || cosm != 0 || mak != 0) {
											totalPrice(check, N, totalprice);
											cout.width();
											cout << "#################################################################" << endl;
											cout << "#                      ! Check !                                #" << endl;
											cout << "#################################################################" << endl;
											printCheckEngl(check, N);
											cout << "#################################################################" << endl;
											cout.width(); cout << "# TOTAL PRICE : " << totalprice << " grn.                                        #" << endl;
											nowdate.printDateforChek();
											cout << "#################################################################" << endl;
										}
										else
											perror("\t\tNot enough information");
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); system("pause"); break;
									}

								} while (menu4 != 6);
								break;
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tPrint price-list of each services               #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tSort by price of each services                  #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										sortBarberPrice(barber, N_forbarber);
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										sortMassagePrice(massage, N_formassage);
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										sortNailsServicePrice(nails, N_fornails);
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										sortCosmetologyPrice(cosmetology, N_forcosm);
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										sortMakeUpPrice(makeup, N_formakeup);
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\t\t\t\BYE Eveline :-)\n";
								system("pause");
								break;
							default:perror("\t\tError\n"); perror("\t\tTry again "); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Passwords don`t match\nTry Again :(");
						system("pause");
						break;
					}
					break;
				case 3:
					cout << "Please enter your password -> ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_maria, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tHello Maria                                     #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t(1) -  Delete service                                   #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(2) -  Add service                                      #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(3) -  Change price of selected service                 #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(4) -  Exit                                             #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							cin >> menu3;

							switch (menu3) {
							case 1:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tDelete Service                                  #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter price of its service -> " << endl;
										cin >> someprice;
										barber = deleteBarber(barber, N_forbarber, type_of_sevice, someprice);
										system("cls");
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter price of its service -> " << endl;
										cin >> someprice;
										massage = deleteMassage(massage, N_formassage, type_of_sevice, someprice);
										system("cls");
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter price of its service -> " << endl;
										cin >> someprice;
										nails = deleteNails(nails, N_fornails, type_of_sevice, someprice);

										system("cls");
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter price of its service -> " << endl;
										cin >> someprice;
										cosmetology = deleteCosm(cosmetology, N_forcosm, type_of_sevice, someprice);

										system("cls");
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										system("cls");
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter price of its service -> " << endl;
										cin >> someprice;
										makeup = deleteMake(makeup, N_formakeup, type_of_sevice, someprice);

										system("cls");
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tAdd   Service                                   #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										barber = addBarber(barber, N_forbarber);
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										system("cls");
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										massage = addMassage(massage, N_formassage);
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										system("cls");
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										nails = addNails(nails, N_fornails);
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										system("cls");
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										cosmetology = addCosm(cosmetology, N_forcosm);
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										system("cls");
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										system("cls");
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										makeup = addMake(makeup, N_formakeup);
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										system("cls");
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);

								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tChange price of selected service                #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  BarberShop                                       #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Massage                                          #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Nails Services                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Cosmetology                                      #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  MakeUp                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Exit                                             #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter name of the master -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceBarber(barber, N_forbarber, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										printarrbarberEngl(barber, N_forbarber);
										system("pause");
										//функция изменения
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter name of the master -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceMassage(massage, N_formassage, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										printarrmassageEngl(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter name of the master -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceNails(nails, N_fornails, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										printarrnailsEngl(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter name of the master -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceCosm(cosmetology, N_forcosm, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										printarrcosmetEngl(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										system("cls");
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										system("cls");
										cinget();
										cout << "Enter type of the service -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Enter name of the master -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceMake(makeup, N_formakeup, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										printarrmakeupEngl(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tError\n"); perror("\t\tTry again later"); break;
									}
								} while (menu4 != 6);
								break;
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\t\t\t\BYE Maria :-)";
								break;
							default:perror("\t\tError\n"); perror("\t\tTry again "); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Passwords don`t match\nTry Again :(");
						system("pause");
						break;
					}
					break;
					case 4:
						break;
				default:
					perror("\t\t\tFail//Ошибка");
					break;
				}
			} while (menu2 != 4);
			break;
		case 2://///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////1/
			do {
				system("cls");
				cout << " ________________________________________________________________________" << endl;
				cout << "|                                                                        |" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|#\t\t\tПожалуйста выберите ваш акканут                 #|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|#\t\t(1) - Администратор Татьяна                             #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(2) - Администратор Эвелин                              #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(3) - Менеджер Мария                                    #|" << endl;
				cout << "|#----------------------------------------------------------------------#|" << endl;
				cout << "|#\t\t(4) - Выход                                             #|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
				cout << "|########################################################################|" << endl;
				cout << "|________________________________________________________________________|" << endl;
				cin >> menu2;

				switch (menu2) {
				case 1:////////////////////////////////////////////////////////////////////////////////////////////////////////////////////2
					cout << "Пожалуйста введите пароль -> ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_tatiana, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tЗдравствуйте Татьяна                            #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t(1) -  Принять заказ                                            #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(2) -  Распечатать прайс-лист                                   #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(3) -  Сортировка по цене                                       #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(4) -  Выход                                                    #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							check = nullptr;
							totalprice = 0;
							N = 0;
							AddToFileCheck(check, N);
							cin >> menu3;

							switch (menu3) {
							case 1:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tПринять заказ                                   #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Рспечатать чек                                   #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;
									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										bar++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										/*check = AddFromFileCheck(N);
										printCheckEngl(check, N);
										system("pause");*/
										break;
									case 2://///////////////////////////////////////////////////////4
										mas++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 3://///////////////////////////////////////////////////////4
										nail++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 4://///////////////////////////////////////////////////////4
										cosm++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 5://///////////////////////////////////////////////////////4
										mak++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 6://///////////////////////////////////////////////////////4
										system("cls");
										if (check == nullptr)
										{
											perror("\t\tNot enough information");
											system("pause");
											break;
										}
										if (bar != 0 || mas != 0 || nail != 0 || cosm != 0 || mak != 0) {
											totalPrice(check, N, totalprice);
											cout.width();
											cout << "#################################################################" << endl;
											cout << "#                        ! ЧЕК !                                #" << endl;
											cout << "#################################################################" << endl;
											printCheckRus(check, N);
											cout << "#################################################################" << endl;                      //
											cout.width(); cout << "# ИТОГОВАЯ ЦЕНА : " << totalprice << " grn.                                      #" << endl;
											nowdate.printDateforChek();
											cout << "#################################################################" << endl;
										}
										else
											perror("\t\tНедостаточно информации");
										system("pause");
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); system("pause"); break;
									}
								} while (menu4 != 6);
								break;
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tРаспечатать прайс-лист                          #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tСортировка по цене                              #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										sortBarberPrice(barber, N_forbarber);
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										sortMassagePrice(massage, N_formassage);
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										sortNailsServicePrice(nails, N_fornails);
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										sortCosmetologyPrice(cosmetology, N_forcosm);
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										sortMakeUpPrice(makeup, N_formakeup);
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\tДо свидания,  Татьяна:-)\n";
								system("pause");
								break;
							default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова "); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Пароли не совпадают\nПопробуйте снова:(");
						system("pause");
						break;
					}
					break;
				case 2:
					cout << "Пожалуйста введите пароль ->  ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_eveline, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tЗдравствуйте Эвелин                             #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t(1) -  Принять заказ                                            #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(2) -  Распечатать прайс-лист                                   #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(3) -  Сортировка по цене                                       #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t(4) -  Выход                                                    #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							check = nullptr;
							totalprice = 0;
							N = 0;
							AddToFileCheck(check, N);
							cin >> menu3;

							switch (menu3) {
							case 1:///////////////////////////////////////////////////////////////////////3                   //
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tПринять заказ                                   #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Рспечатать чек                                   #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;
									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										bar++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										/*check = AddFromFileCheck(N);
										printCheckEngl(check, N);
										system("pause");*/
										break;
									case 2://///////////////////////////////////////////////////////4
										mas++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 3://///////////////////////////////////////////////////////4
										nail++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 4://///////////////////////////////////////////////////////4
										cosm++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 5://///////////////////////////////////////////////////////4
										mak++;
										check = addCheckRus(check, N);
										AddToFileCheck(check, N);
										break;
									case 6://///////////////////////////////////////////////////////4
										system("cls");

										if (check == nullptr)
										{
											perror("\t\tNot enough information");
											system("pause");
											break;
										}
										if (bar != 0 || mas != 0 || nail != 0 || cosm != 0 || mak != 0) {
											totalPrice(check, N, totalprice);
											cout.width();
											cout << "#################################################################" << endl;
											cout << "#                        ! ЧЕК !                                #" << endl;
											cout << "#################################################################" << endl;
											printCheckRus(check, N);
											cout << "#################################################################" << endl;                      //
											cout.width(); cout << "# ИТОГОВАЯ ЦЕНА : " << totalprice << " grn.                                      #" << endl;
											nowdate.printDateforChek();
											cout << "#################################################################" << endl;
										}
										else
											perror("\t\tНедостаточно информации");
										system("pause");
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); system("pause"); break;
									}
								} while (menu4 != 6);
								break;
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tРаспечатать прайс-лист                          #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tСортировка по цене                              #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										sortBarberPrice(barber, N_forbarber);
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										sortMassagePrice(massage, N_formassage);
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										sortNailsServicePrice(nails, N_fornails);
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										sortCosmetologyPrice(cosmetology, N_forcosm);
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										sortMakeUpPrice(makeup, N_formakeup);
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									case 6:
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\tДо свидания,  Эвелин:-)\n";
								system("pause");
								break;
							default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова "); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Пароли не совпадают\nПопробуйте снова :(");
						system("pause");
						break;
					}
					break;
				case 3:
					cout << "Пожалуйста введите пароль -> ";
					cin.get();
					cin.getline(password, 50);
					if (checkPassword(admins, N_foradmins, user_maria, password) == true) { // -  функция проверяющая пароли
						do {
							system("cls");
							cout << " ________________________________________________________________________" << endl;
							cout << "|                                                                        |" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t\tЗдравствуйте Мария                              #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|#\t\t(1) -  Удалить услугу                                    #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(2) -  Добавить услугу                                   #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(3) -  Изменить цену за услугу                           #|" << endl;
							cout << "|#----------------------------------------------------------------------#|" << endl;
							cout << "|#\t\t(4) -  Выход                                             #|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
							cout << "|########################################################################|" << endl;
							cout << "|________________________________________________________________________|" << endl;
							cin >> menu3;

							switch (menu3) {
							case 1:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tУдалить услугу                                  #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите цену за данную услугу -> " << endl;
										cin >> someprice;
										barber = deleteBarber(barber, N_forbarber, type_of_sevice, someprice);
										system("cls");
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageRus(massage, N_formassage);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите цену за данную услугу -> " << endl;
										cin >> someprice;
										massage = deleteMassage(massage, N_formassage, type_of_sevice, someprice);
										system("cls");
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsRus(nails, N_fornails);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите цену за данную услугу -> " << endl;
										cin >> someprice;
										nails = deleteNails(nails, N_fornails, type_of_sevice, someprice);

										system("cls");
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите цену за данную услугу -> " << endl;
										cin >> someprice;
										cosmetology = deleteCosm(cosmetology, N_forcosm, type_of_sevice, someprice);

										system("cls");
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										system("cls");
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите цену за данную услугу -> " << endl;
										cin >> someprice;
										makeup = deleteMake(makeup, N_formakeup, type_of_sevice, someprice);

										system("cls");
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
							case 2:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tДобавить услугу                                 #|" << endl;
									cout << "|########################################################################|" << endl;/////////////////////////////////////////////////////////////////////////
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										barber = addBarber(barber, N_forbarber);
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										system("cls");
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageRus(massage, N_formassage);
										system("pause");
										massage = addMassage(massage, N_formassage);
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										system("cls");
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsRus(nails, N_fornails);
										system("pause");
										nails = addNails(nails, N_fornails);
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										system("cls");
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										cosmetology = addCosm(cosmetology, N_forcosm);
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										system("cls");
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5:
										system("cls");
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										makeup = addMake(makeup, N_formakeup);
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										system("cls");
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);

								break;
							case 3:///////////////////////////////////////////////////////////////////////3
								do {
									system("cls");
									cout << " ________________________________________________________________________" << endl;
									cout << "|                                                                        |" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t\tИзменить цену за услугу                         #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|#\t\t(1) -  Парикмахерская                                   #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(2) -  Массаж                                           #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(3) -  Маникюр-Педикюр                                  #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(4) -  Косметология                                     #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(5) -  Визаж                                            #|" << endl;
									cout << "|#----------------------------------------------------------------------#|" << endl;
									cout << "|#\t\t(6) -  Выход                                            #|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|# "; nowdate.printDate(); cout << "\t\t#|" << endl;
									cout << "|########################################################################|" << endl;
									cout << "|________________________________________________________________________|" << endl;
									cin >> menu4;

									switch (menu4) {
									case 1:////////////////////////////////////////////////////////4
										system("cls");
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите им мастера -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceBarber(barber, N_forbarber, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilebarber(barber, N_forbarber);
										barber = ArrFromFilebarber(N_forbarber);
										printarrbarberRus(barber, N_forbarber);
										system("pause");
										//функция изменения
										break;
									case 2://///////////////////////////////////////////////////////4
										system("cls");
										printarrmassageRus(massage, N_formassage);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите им мастера -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceMassage(massage, N_formassage, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilemassage(massage, N_formassage);
										massage = ArrFromFilemassage(N_formassage);
										printarrmassageRus(massage, N_formassage);
										system("pause");
										break;
									case 3://///////////////////////////////////////////////////////4
										system("cls");
										printarrnailsRus(nails, N_fornails);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите им мастера -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceNails(nails, N_fornails, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilenails(nails, N_fornails);
										nails = ArrFromFilenails(N_fornails);
										printarrnailsRus(nails, N_fornails);
										system("pause");
										break;
									case 4://///////////////////////////////////////////////////////4
										system("cls");
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите им мастера -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceCosm(cosmetology, N_forcosm, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilecosmet(cosmetology, N_forcosm);
										cosmetology = ArrFromFilecosmet(N_forcosm);
										printarrcosmetRus(cosmetology, N_forcosm);
										system("pause");
										break;
									case 5://///////////////////////////////////////////////////////4
										system("cls");
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										system("cls");
										cinget();
										cout << "Введите тип услуги -> " << endl;
										cin.getline(type_of_sevice, 256);
										cout << "Введите им мастера -> " << endl;
										cin.getline(name_of_master, 256);
										changePriceMake(makeup, N_formakeup, type_of_sevice, name_of_master);
										system("pause");
										system("cls");
										ArrToFilemakeup(makeup, N_formakeup);
										makeup = ArrFromFilemakeup(N_formakeup);
										printarrmakeupRus(makeup, N_formakeup);
										system("pause");
										break;
									default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
									}
								} while (menu4 != 6);
								break;
								break;
							case 4:///////////////////////////////////////////////////////////////////////3
								cout << "\t\t\tДо свидания, Мария :-)";
								break;
							default:perror("\t\tОшибка\n"); perror("\t\tПопробуйте снова"); break;
							}
						} while (menu3 != 4);
						break;
					}
					else {
						perror("Пароли не совпадают\nПопробуйте снова :(");
						system("pause");
						break;
					}
					break;
				default:
					perror("\t\t\tFail//Ошибка");
					break;
				}
			} while (menu2 != 4);
			break;
		case 3:
			system("cls");
			cout << "\n\n\n\n\t\t\tВсего доброго/Good luck\n\n\n" << endl;
			break;
		default:
			perror("\t\t\tFail//Ошибка");
			break;
		}
	} while (menu1 != 3);

	system("pause");
	return 0;
}