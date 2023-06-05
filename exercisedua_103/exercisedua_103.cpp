#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class buku;

class penerbit{
public:
	string nama;
	vector<pengarang*> Daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "Pengarang" << nama << ":" << endl;
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<buku*> Daftar_buku;

	pengarang(string pNama) :nama(pNama) {
		cout << "Buku" << nama << ":" << endl;
	}
	void tambahBuku(buku*);
	void cetakBuku();
};

class buku {
public:
	string nama;
	vector<penerbit*> Daftar_penerbit;
	buku(string pNama) :nama(pNama) {
		cout << "Penerbit" << nama << ":" << endl;
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();

void penerbit::tambahPengarang(pengarang* pPengarang) {
	Daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << "Daftar Pengarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void pengarang::tambahBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
	pPenerbit->tambahBuku(this);
}
void pengarang::cetakBuku() {
	cout << "Daftar Buku\"" << this->nama << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void buku::tambahPenerbit(penerbit* pPenerbit) {
	daftar_buku.push_back(pPenerbit);
	pPenerbit->tambahBuku(this);
}
void pengarang::cetakBuku() {
	cout << "Daftar Penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}


int main() {
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	pengarang* varPengarang1 = new pengarang("Giga");
	pengarang* varPengarang2 = new pengarang("Joko");
	pengarang* varPengarang3 = new pengarang("Lia");
	pengarang* varPengarang4 = new pengarang("Asroni");
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku1 = new buku("Algoritma");
	buku* varBuku1 = new buku("BasisData");
	buku* varBuku1 = new buku("Dasar Pemerograman");
	buku* varBuku1 = new buku("Matematika");
	buku* varBuku1 = new buku("Multimedia 1");

	varPenerbit1->tambahPengarang(varPengarang1);

	return 0;

}

