#include "header.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void searchId(Info *node, char * idktp){
    while(node!=NULL){
        if(strcmp(idktp, node->id)== 0){
            printf("ID KTP              | %s\n",node->id);
            printf("Nama                | %s\n", node->nama);
            printf("Estimasi awal       | %s\n", node->rute);
            printf("Maskapai            | %s\n", node->maskapai);
            printf("Dosis Vaksin        | %d\n",node->vaksin);
            printf("Nomor Kursi         | %d \n\n", node->kursi);
     }
       node=node->next;
   }
}
void printInfo(Info *node, int als){
    while(node!=NULL){
       if(node->nomaskapai==als){
            printf("    ID KTP              | %s\n",node->id);
            printf("    Nama                | %s\n", node->nama);
            printf("    Estimasi awal       | %s\n", node->rute);
            printf("    Maskapai            | %s\n", node->maskapai);
            printf("    Dosis Vaksin        | %d\n",node->vaksin);
            printf("    Nomor Kursi         | %d \n\n", node->kursi);
        }
        else if (node->route==als){
            printf("    ID KTP              | %s\n",node->id);
            printf("    Nama                | %s\n", node->nama);
            printf("    Estimasi awal       | %s\n", node->rute);
            printf("    Rute Penerbangan    | %s\n", node->nroute);
            printf("    Maskapai            | %s\n", node->maskapai);
            printf("    Dosis Vaksin        | %d\n",node->vaksin);
            printf("    Nomor Kursi         | %d \n\n", node->kursi);
        }   
       node=node->next;
        }
}
void printAll(Info *node){
	while (node != NULL){
            printf("    ID KTP              | %s\n",node->id);
            printf("    Nama                | %s\n", node->nama);
            printf("    Estimasi awal       | %s\n", node->rute);
            printf("    Rute Penerbangan    | %s\n", node->nroute);
            printf("    Maskapai            | %s\n", node->maskapai);
            printf("    Dosis Vaksin        | %d\n",node->vaksin);
            printf("    Nomor Kursi         | %d \n\n", node->kursi);
        node=node->next;
	}
}

