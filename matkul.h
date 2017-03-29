#ifndef MATKUL_H_INCLUDED
#define MATKUL_H_INCLUDED

#include <iostream>
using namespace std;

#define nill NULL;
#define First(LC) LC.First
#define next(P) P->next
#define Last(LC) LC.Last
#define Prev(P) P->Prev
#define info(P) P->info

//Joel Andrew MKG
struct matakuliah
{
    int kodematkul;
    string namapengajar;
    string sks;
    string namamatkul;
    string ruangan;
    string jam;
};

//Joel Andrew MKG
typedef struct elmlist_mtkl *address_mtkl;

//Joel Andrew MKG
struct elmlist_mtkl
{
    matakuliah info;
    address_mtkl next;
    address_mtkl Prev;
};

//Joel Andrew MKG
struct List_mtkl
{
    address_mtkl First;
    address_mtkl Last;
};

//Joel Andrew MKG
void createList(List_mtkl &LC);
address_mtkl alokasi(matakuliah x);
void dealokasi_mtkl(address_mtkl &P);
void insertFirst(List_mtkl &LC, address_mtkl P);
void insertLast(List_mtkl &LC, address_mtkl P);
void insertAfter(List_mtkl &LC, address_mtkl Prec_C, address_mtkl P);
void deleteFirst(List_mtkl &LC, address_mtkl &P);
void deleteLast(List_mtkl &LC, address_mtkl &P);
void deleteAfter(List_mtkl &LC, address_mtkl Perc_C, address_mtkl &P);
void printInfo(List_mtkl LC);
address_mtkl findElm(List_mtkl &LC, int x);


#endif // MATKUL_H_INCLUDED
