#include <iostream>
#include <string>

using namespace std;
string namber;
string namberv;
string namamember[10];
string namamemberv[10];
int passber, passberv;
int passmember[10];
int passmemberv[10];

int billing, billingv;
int billingm[10];
int billingmv[10];
string cmember;

void cekwaktu() {
  cout << "pilih jenis member:";
  int pilihjenis;
  int l;
  cin >> pilihjenis;
  if (pilihjenis == 1) {
    cout << "masukkan nama member:";
    cin >> cmember;
    if (cmember == namamember[l]) {

      cout << "sisa waktu anda sebanyak" << billingm[l];
    } else
      cout << "member tidak ada";
    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 2;
    } else
      cout << "masukan input yang sesuai";

  } else if (pilihjenis == 2) {
    cout << "masukkan nama member:";
    cin >> cmember;
    cin >> billing;
    if (cmember == namamemberv[l]) {

      cout << "sisa waktu anda sebanyak" << billingmv[l];
    } else
      cout << "member tidak ada";
    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 2;
    } else
      cout << "masukan input yang sesuai";
  }
}

void tambahbillinga() {
  int pilihjenis;
  int l;
  cin >> pilihjenis;
  if (pilihjenis == 1) {
    cout<<"\nmasukan nama member:";
  	cin >> cmember;
    if (cmember == namamember[l]) {
	cin >> billing;
    billingm[l] = billing;
    cout << "\n bayar : Rp" << billing * 4000;}
    else 
    cout<<"member tidak ada";
    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 2;
    } else
      cout << "masukan input yang sesuai";
  } else if (pilihjenis == 2) {
  	cout<<"\nmasukan nama member:";
  	 cin >> cmember;
    if (cmember == namamemberv[l]) {
  	
    cin >> billing;
    billingmv[l] = billingv;
    cout << "\n bayar : Rp" << billing * 5000;}
    else
    cout<<"\nmember tidak tersedia";
    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 3;
    } else
      cout << "masukan input yang sesuai";
  }
}

void tambahbilling() {
  cout << "\n\tOo_________________________________________________oO" <<
    "\n\t|                 [Pilihan Member]                  |" <<
    "\n\t|---------------------------------------------------|" <<
    "\n\t|  No | Jenis |               Harga                 |" <<
    "\n\t|---------------------------------------------------|" <<
    "\n\t|  1  |  VIP  |          Rp.4000 per jam            |" <<
    "\n\t|  2  |  VvIP |          Rp.5000 per jam            |" <<
    "\n\to---------------------------------------------------o";
  cout << "\n\tpilih member biasa atau vip ";
  tambahbillinga();
  cout << "\n\tInput jumlah jam yang ingin anda tambah: ";
  //	cin>>billing;
  //	billingm[l]=billing;
}

void daftarmember() {
  int pilihjenis;
  int l;

  cin >> pilihjenis;
  if (pilihjenis == 1) {
    cout << "\n\n\t [MEMBER VIP]" <<
      "\n\t Masukkan nama member: ";
    cin >> namber;
    namamember[l] = namber;
    cout << "\n nama member:" << namamember[l];
    cout << "\n\t (Pin Harus berupa 4 angka!)" <<
      "\n\t Masukkan pin: ";
    cin >> passber;
    passmember[l] = passber;

    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 2;
    } else
      cout << "masukan input yang sesuai";

  } else if (pilihjenis == 2) {
    cout << "\n\n\t [MEMBER VvIP]" <<
      "\n\t Masukkan nama member: ";
    cin >> namberv;
    namamemberv[l] = namberv;
    cout << "\n\t (Pin Harus berupa 4 angka!)" <<
      "\n\t Masukkan pin: ";
    cin >> passberv;
    passmemberv[l] = passberv;

    cout << "\n\t apakah anda ingin kembali ke menu? (y/n)\n";
    char men;
    cin >> men;
    if (men == 'y') {
      l--;
    } else if (men == 'n') {
      l = 2;
    } else
      cout << "masukan input yang sesuai";

  }
}

void daftar() {
  cout << "\n\tOo_________________________________________________oO" <<
    "\n\t|                 [Pilihan Member]                  |" <<
    "\n\t|---------------------------------------------------|" <<
    "\n\t|  No | Jenis |               Harga                 |" <<
    "\n\t|---------------------------------------------------|" <<
    "\n\t|  1  |  VIP  |          Rp.4000 per jam            |" <<
    "\n\t|  2  |  VvIP |          Rp.5000 per jam            |" <<
    "\n\to---------------------------------------------------o" <<
    "\n\tPilih Jenis Member: ";

		
		
}


