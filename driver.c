#include "header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    Info * nodeA =(Info *)malloc(sizeof(Info));
    Info * nodeB =(Info *)malloc(sizeof(Info));
    Info * nodeC =(Info *)malloc(sizeof(Info));
    Info * nodeD =(Info *)malloc(sizeof(Info));
    Info * nodeE =(Info *)malloc(sizeof(Info));
    Info * nodeF =(Info *)malloc(sizeof(Info));
    
        nodeA->id ="11321020";
            strcpy(nodeA->nama,"Mega Kristina Marbun");
            strcpy(nodeA->maskapai,"Garuda");
            strcpy(nodeA->rute,"Silangit");
            strcpy(nodeA->nroute,"Jakarta");
        nodeA->nomaskapai= 1;
        nodeA->route= 4;
        nodeA->vaksin= 1;
        nodeA->kursi= 25;
        nodeA->next = nodeB;

        nodeB->id ="11321024";
            strcpy(nodeB->nama,"Refina Marpaung");
            strcpy(nodeB->maskapai,"Lion Air");
            strcpy(nodeB->rute,"Silangit");
            strcpy(nodeB->nroute,"Kalimantan");
        nodeB->nomaskapai= 2;
        nodeB->route= 5;
        nodeB->vaksin= 3;
        nodeB->kursi= 7;
        nodeB->next = nodeC;

        nodeC->id ="11321027";
            strcpy(nodeC->nama,"Sio Alexandra Siahaan");
            strcpy(nodeC->maskapai,"Citilink");
            strcpy(nodeC->rute,"Silangit");
            strcpy(nodeC->nroute,"Jakarta");
        nodeC->nomaskapai= 3;
        nodeC->route= 4;
        nodeC->vaksin=2;
        nodeC->kursi= 26;
        nodeC->next = nodeD;

        nodeD->id ="11321053";
            strcpy(nodeD->nama,"Yohana Tambunan");
            strcpy(nodeD->maskapai,"Garuda");
            strcpy(nodeD->rute,"Silangit");
            strcpy(nodeD->nroute,"Singapore");
        nodeD->nomaskapai= 1;
        nodeD->route= 6;
        nodeD->vaksin= 2;
        nodeD->kursi= 13;
        nodeD->next = nodeE;

        nodeE->id ="11321063";
            strcpy(nodeE->nama,"Marianne Wensesla Solang");
            strcpy(nodeE->maskapai,"Lion Air");
            strcpy(nodeE->rute,"Silangit");
            strcpy(nodeE->nroute,"Singapore");
        nodeE->nomaskapai= 2;
        nodeE->route= 6;
        nodeE->vaksin= 3;
        nodeE->kursi= 12;
        nodeE->next = nodeF;

	    nodeF->id ="11321064";
            strcpy(nodeF->nama,"Rosalindabrmanik");
            strcpy(nodeF->maskapai,"Citilink");
            strcpy(nodeF->rute,"Silangit");
            strcpy(nodeF->nroute,"Jakarta");
        nodeF->nomaskapai= 3;
        nodeF->route= 4;
        nodeF->vaksin= 1;
        nodeF->kursi= 14;

        printf("                          _______                                                             \n");
        printf("       _____              \\     \\                                                           \n");
        printf("       \\    \\__            \\      \\                                                       \n");
        printf("      __\\       \\_____________ _________________________________                            \n");
        printf("      \\      K.4             _______ _________       __      ____\\                          \n");
        printf("       \\                     |_______|____|____|    |  |    |_____\\___                      \n");
        printf("         |__\\_____\\______________\\__   \\_________|__|_________________\\                  \n");
        printf("             \\     \\              \\_    \\                                                 \n");
        printf("              \\    /               \\_    \\                                                 \n");
        printf("               \\__/                 |______/                                                 \n");
        printf("                                    /_____/                                                   \n");
        printf("                                   /_____/                                                    \n");
        printf("                                                                                              \n");
	        main:
        printf("|============================================================================================|\n");
        printf("|                            SELAMAT DATANG DI ANTRIAN BANDARA                               |\n");
        printf("|============================================================================================|\n");
        printf("|    (1) Mencari seseorang berdasarkan ID KTP, kemudian mencetak informasi berupa            |\n");
        printf("|        ID KTP, Nama, rute penerbangan, Maskapai Penerbangan, dosis vaksin, dan nomor kursi |\n");
        printf("|    (2) Mencetak informasi penumpang sesuai rute pesawat dan maskapai penerbangan.          |\n");
        printf("|    (3) Mencetak seluruh informasi penumpang                                                |\n");
        printf("|    (4) Keluar dari Program                                                                 |\n");
        printf("|============================================================================================|\n");
    int ch;
        printf("        > Pilih Opsi : ");
        scanf("%d",&ch);
    
        if(ch==1){
            printf("\n      > Masukkan ID KTP penumpang yang ingin dicari : ");
            char idktp[50];
            scanf(" %[^\t\n]s", &idktp);
            searchId(nodeA, idktp);
                goto main;
        }
        else if(ch==2){
            printf("      =====================================================\n");
            printf("      ||       MASKAPAI     ||      RUTE PENERBANGAN     ||\n");
            printf("      ===================================================||\n");
            printf("      ||    (1) Garuda      ||    (4) Jakarta            ||\n");
            printf("      ||    (2) Lion Air    ||    (5) Kalimantan         ||\n");
            printf("      ||    (3) Citilink    ||    (6) Singapore          ||\n");
            printf("      =====================================================\n");
            printf("        > Pilih : ");
            int als;
            scanf("%d", &als);
            printInfo(nodeA, als);
                goto main;
        }
        else if(ch==3){
            printAll(nodeA);
                goto main;
        }
        else if(ch==4){
            exit(0);
        }
        else{
            printf("\n   Opsi yang Anda masukkan salah!\n");
            goto main;
        }
    
    return 0;

}
