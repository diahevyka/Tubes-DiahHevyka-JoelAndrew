#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
using namespace std;

//Diah Hevyka Maylawati
typedef struct elmlist_mhs *address_mhs;

//Diah Hevyka Maylawati
struct mahasiswa
{
    int nim;
    string nama;
    string alamat;
    string JK;
    string jurusan;
    string kelas_mhs;
};

//Diah Hevyka Maylawati
struct elmlist_mhs
{
    mahasiswa info;
    address_mhs next;
};

//Diah Hevyka Maylawati
struct List_mhs
{
    address_mhs First;
};

//Diah Hevyka Maylawati
void createList_mhs(List_mhs &L);
address_mhs alokasi_mhs(mahasiswa x);
void dealokasi_mhs(address_mhs &P);
void insertFirst_mhs(List_mhs &L, address_mhs P);
void insertLast_mhs(List_mhs &L, address_mhs P);
address_mhs findElm_mhs(List_mhs L, int x);
void deleteFirst_mhs(List_mhs &L, address_mhs &P);
void deleteLast_mhs(List_mhs &L, address_mhs &P);
void printInfo_mhs(List_mhs L);
void insertAfter_mhs(List_mhs &L, address_mhs Q, address_mhs P);
void deleteAfter_mhs(address_mhs Prec, address_mhs &P);

#endif // MAHASISWA_H_INCLUDED

