#include <iostream>

#include <string>
 //#include "menu2.h"
#include "menu1.h"
 //#include "menu3.h"
using namespace std;
void menu() {
  cout << "\n\t  +o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o+" <<
    "\n\t  |Selamat Datang di Warnet Joko Tinker!|" <<
    "\n\t  +o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o+" <<
    "\n\t  | Pilihan Menu:                       |" <<
    "\n\t  | [1]. Register Member                |" <<
    "\n\t  | [2]. Tambah Billing                 |" <<
    "\n\t  | [3]. Cek Waktu                      |" <<
    "\n\t  | [4]. Exit                           |" <<
    "\n\t  |_____________________________________|" <<
    "\n\t  Pilih Menu: ";

}
void ui() {
  int pilih;
  for (int l = 1; l < 3; l++) {
    system("cls");
    menu();
    cin >> pilih;
    switch (pilih) {
    case 1:
      daftar();
      daftarmember();
      break;
    case 2:
      tambahbilling();
      break;
    case 3:
      cekwaktu();
      break;
    case 4:
      l = 3;
      break;
    default:
      cout << "\tmohonn masukan pilihan menu yang tepat.\n";
    }
  }
}
