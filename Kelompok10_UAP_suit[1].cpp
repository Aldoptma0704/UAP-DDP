#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>
using namespace std;


	void delay(void){
		int delay;
		delay = 1;
		while(delay<10000000){
			delay++;
		}
	}
	

	void gotoxy(int x, int y){
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	}


int main(){
	int i, j;
	char ulang;
	string username, password;
	bool login_success = false;
	
	
	for(i=40; i<=75; i++){
		gotoxy(i,12);
		printf("-");
		gotoxy(i,14);
		printf("-");
		system("color 5A");
		delay();
	}
	
	for(i=1; i<=100; i++){
		gotoxy(40,13);
		cout<<"L O A D I N G . . . "<<i<<" %";
		delay();
	}
	system("cls");

int skor_Anda = 0;
int skor_Komp = 0;

int play_counter = 0;
	
	int acak,pilih;
	string pilihan[4] = {"1. GAJAH","2. SEMUT","3. ORANG","SILAHKAN PILIH (angka): "};
	char again = 'Y';
	
	
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"Nama\t	: Aldo Pratama					2217051144"<<endl;
				cout<<"Nama\t	: Zainab Aqilah					2217051149"<<endl;
				cout<<"Nama\t	: Jefri	Raihan Akbar		\t	2217051133"<<endl;
				cout<<"Kelas\t	: D									 	  "<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	
	
   for (int t = 0; t < 3 && !login_success; t++) {
      cout << "username: ";
      getline(cin, username);
      cout << "password: ";
      getline(cin, password);
      
    	if (username == "suit" && password == "akucintaindonesia") {
         login_success = true;
      	} else {
         cout << "\n\t[WARNING] Access denied!\n";
         cout << t + 1 << "/3 chance reached Please enter valid credential!\n\n";
      	}
   }
	if (login_success){
		system("cls");
		for(i=1; i<=100; i++){
		gotoxy(40,13);
		cout<<"L O A D I N G . . . "<<i<<" %";
		delay();
	}
		
		system("cls");
		while (again == 'y' || again == 'Y'){
		play_counter++;
		if(play_counter == 4) {
			break;
		}	
		acak = rand() % 3+1; //untuk mengacak fungsi ketiga pilihan
		for(int i=0;i<4;i++){
			gotoxy(29,7+i);
			cout << pilihan[i] << endl;
			system("color 5A");
		}
			gotoxy(52,10);
			cin >> pilih;
			
				system("cls");
		
				if(pilih == 1){
				cout << "\nPilihan Kamu\t\t : GAJAH\n";
				if(acak == 1){
				cout << "Pilihan Komputer\t : GAJAH\n\n";
				cout << "\t- DRAW -"<<endl;
				skor_Anda++;
				skor_Komp++;
				}
				else if(acak == 2){
				cout << "Pilihan Komputer\t : SEMUT\n\n";
				cout << "\t- Kamu Kalah -"<<endl;
				skor_Komp++;
				}		
				else if(acak == 3){
				cout << "Pilihan Komputer\t : ORANG\n\n";
				cout << "\t- Kamu Menang -"<<endl;
				skor_Anda++;
				}
			}
					if(pilih == 2){
				cout << "\nPilihan Kamu\t\t : SEMUT\n";
				if(acak == 1){
				cout << "Pilihan Komputer\t : GAJAH\n\n";
				cout << "\t- Kamu Menang -"<<endl;
				skor_Anda++;
				}
			else if(acak == 2){
				cout << "Pilihan Komputer\t : SEMUT\n\n";
				cout << "\t- DRAW -"<<endl;
				skor_Anda++;
				skor_Komp++;
				}		
			else if(acak == 3){
			cout << "Pilihan Komputer\t : ORANG\n\n";
			cout << "\t- Kamu Menang -"<<endl;
				skor_Anda++;
				}
			}
					
					if(pilih == 3){
				cout << "\nPilihan Kamu\t\t : ORANG\n";
				if(acak == 1){
				cout << "Pilihan Komputer\t : GAJAH\n\n";
				cout << "\t- Kamu Kalah -"<<endl;
				skor_Komp++;
				}
			else if(acak == 2){
				cout << "Pilihan Komputer\t : SEMUT\n\n";
				cout << "\t- Kamu Menang -"<<endl;
				skor_Anda++;
				}		
			else if(acak == 3){
			cout << "Pilihan Komputer\t : ORANG\n\n";
			cout << "\t- DRAW -"<<endl;
				skor_Anda++;
				skor_Komp++;
				}
				
			}
			cout<< "Skor Anda\t: "<<skor_Anda<<endl;
			cout << "Skor Komputer\t: "<<skor_Komp<<endl;
			cout << "Main Lagi <y/n> : "; 
			cin >> again;
		}
		cout <<"THE END"<<endl;
	}else {
      cout << "\n\t>>> [you have been banned!] <<<\n";
   }
	
   cout << "\n\n**********************************************************************\n";
   cout << "\t\t\tCLOSING GAME!\n";
   cout << "**********************************************************************\n";
	
}	 
