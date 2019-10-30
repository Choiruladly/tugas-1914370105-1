#include <stdio.h>
int main(){
    char Npm[15], Nama[20];
    int nilai;
    printf("Masukan Npm : ");
    scanf("%s",Npm);
    printf("Masukan Nama :");
    scanf("%s",Nama);
    printf("Masukan nilai :");
    scanf("%d",&nilai);
    if(nilai>=60){
            printf("status : lulus");
    }else{
    if(nilai<70){
        printf("status : tidak lulus");
    }
    }

return 0;
}
