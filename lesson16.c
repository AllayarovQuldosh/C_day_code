
// include <string.h>
// 18-dars
/*
void qosh(int *s1,int *s2){
    *s1 += 1;
    *s2 += 10;
    printf("%d",*s1+*s2);

}
int uzunlikTop(char name[]){
    int uzunlik = 0;
    for(int i = 0;name[i] != '\0';i+=1){
        uzunlik += 1;
    }
    return uzunlik;
}
int ortalama(int s[])

// */
// struct Oquvchi{
//     char ism[111];
//     int id;
//     double boy;
//     char jins;
// }S1,S2;

// int main(){
//    // int son1,son2;
 //   printf("Sonlarni kirting: ");
  //  scanf("%d%d",&son1,&son2);
  //  qosh(&son1,&son2);
 //   printf("Son1: %d.Son2: %d\n",son1,son2);
  //  char ism[100] = "JonhWick";
  //  printf("%d\n",uzunlikTop(ism));
  //  printf("%d\n",sizeof(ism));
   // printf("%d\n",strlen(ism));
/*

   int kiritilganSonlarSoni;
   printf("Iltimos necha dona son kerak yozing: ");
   scanf("%d",&kiritilganSonlarSoni);
   while(kiritilganSonlarSoni <= 0||kiritilganSonlarSoni >= 100){
    printf("Boshaqatdan qiymat kirting [1-100]:\n");
    printf("Iltimos necha dona son kerak yozing: ");
    scanf("%d",&kiritilganSonlarSoni);
   }
    float seriya[kiritilganSonlarSoni],toplam = 0,ortalama = 0;
    for(int i=0;i<kiritilganSonalrsoni;i+=1){
        printf("Iltimos %d - sonni kiriting: ");
        scanf("%f",&seriya[i]);
        toplam += seriya[i];
    }
    ortalama = toplam / kiritilganSonlarSoni;
    printf("Ortalama: %.2f",ortalama);
/*

    int ismlarSoni;
    printf("Ismlar sonni kirting: ");
    scanf("%d",&ismlarSoni);
    char ismlar[ismlarSoni][20];
    for(int i= 0;i < ismlarSoni;++i){
        printf("%d - Ismni Kiriting: ",i);
        scanf("%s",&ismlar[i]);
    }
    for(int i = 0;i < ismlarSoni;i++){
        printf("%d - Ism --> %s\n",i+1,ismlar[i]);
    }
*
    //PALINDROM
    char soz[30]="KIYIK";
    char *togiriA,*teskariA;
    for(teskariA = soz;*teskariA != '\0';teskariA += 1);
    for(togiriA = soz,teskariA-=1;teskariA>=togiriA;){
        if(*teskariA == *togiriA){
            teskariA-=1;
            togiriA+=1;
        }else{
            break;
        }
    }
    if(togiriA>teskariA){
        printf("SOZ PALINDROM !!!");
    }else{
        printf("SOZ PALINDROM EMAS !!!");
    }
// */
//     strcpy(S1.ism,"Jonh");
//     S1.id = 22;
//     S1.boy = 89.8;
//     S1.jins = 'A';
//     printf("%s %d %.2f %c",S1.ism,S1.id,S1.boy,S1.jins);