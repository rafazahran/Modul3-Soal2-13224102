#include <stdio.h>

int main (){
int gelas1 = 0;
int gelas2 = 0;
int ukuran1;
int ukuran2;
int takaran;
int langkahminimum = 0;


int input;
   //[1]
    int count = 0;
    int a[3];
    do {
        scanf("%d", &a[count++]);
    } while (getchar() != '\n' && count < 100);
    a[count];

    ukuran1 = a[0];
    ukuran2 = a[1];
    takaran = a[2];


    if(a[0] == a[2]|| a[1] == a[2] ){
    langkahminimum = 1;
    printf("%d", langkahminimum);
    return 0;
    }

    if (a[0] < a[2] && a[1] < a[2]){
    langkahminimum = -1;
    printf("%d", langkahminimum);
    return 0;
    }



    printf("%d", langkahminimum);
}
