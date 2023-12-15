#ifndef HEADER
#define HEADER

typedef struct SInfo Info;

struct SInfo{
    char nama[200];
    char maskapai[200];
    char rute[200];
    char nroute[200];
    char * id;
    int vaksin;
    int route;
    int nomaskapai;
    int kursi;
    Info * next;
};

    void searchId(Info *node, char idktp[50]);
    void printAll(Info *node);
    void printInfo(Info *node, int als);

#endif