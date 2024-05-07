#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//makro untuk warna
#define putih "\033[1;37m"
#define birumuda "\033[1;34m"
#define kuning "\033[1;33m"
#define merah "\033[0;31m"
//fungsi untuk daftar operasi
char title(){
	system("clear");
	puts(" ");
	puts(birumuda " ++++++++++++++++++++++++++++++++++++++++++++++++++++++ ");
	puts(birumuda " |                   COBA RETAS AKU                   | ");
	puts(birumuda " ++++++++++++++++++++++++++++++++++++++++++++++++++++++ ");
	puts(kuning   " tidak ada kata diam dan santai bagi orang yang berakal ");
	puts(kuning   "  dan beradab. maka tinggalkanlah kampung halaman dan   ");
	puts(kuning   "                  DAN MERANTAULAH                       ");
	puts(putih    " _____________________________________________________  ");
	puts(putih    "                __________________                      ");
	puts(" ");
	return 0;
}

char retas_aku(){
        system("clear");
        puts(" ");
        puts(birumuda " ++++++++++++++++++++++++++++++++++++++++++++++++++++++ ");
        puts(merah    " |                      CATCH ME                      | ");
        puts(birumuda " ++++++++++++++++++++++++++++++++++++++++++++++++++++++ ");
        puts(kuning   "      manusia pada dasarnya mudah percaya dan dia       ");
        puts(kuning   "   dan suka menghindari konflik, maka social engineer   ");
        puts(kuning   "                 memanfaatkan kedua itu                 ");
        puts(putih    " _____________________________________________________  ");
        puts(putih    "                __________________                      ");
        puts(" ");
        return 0;
}

char list_kategori(){
	puts(birumuda " [+] Sistem ");
	return 0;
}

