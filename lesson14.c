// include <stdio.h>
// #include <stdlib.h>
// 14-dars
// void jamoalarKorsat(){
//     printf("A\n");
//     printf("S\n");
// }

// int qosh(int s1,int s2){
//     return s1 + s2;
// }

// void qosh1(int s1,int s2){
//     printf("Natija: %d\n",s1+s2);
// }
// int faktorial(int son){
//     int natija = 1;
//     for(int s = 1;s <= son;s +=1){
//         natija *= s;
//         }
//         return natija;
// }
// char boshHarfKorsat(char name[]){
//     return name[0];
// }
// int engKattaniTop(int s[],int u){
//     int kattaQiymat = 0;
//     for(int i = 0;i < u;i += 1){
//         if(s[i] > kattaQiymat){
//             kattaQiymat = s[i];
//             }
//         }
//         return kattaQiymat;
// }
// int juftlarniToplam(int s[],int u){
//     int juftToplam = 0;
//     for(int i = 0;i < u;i += 1){
//         if(s[i] % 2 == 0){
//             juftToplam += s[i];
//             }
//         }
//         return juftToplam;
// }
// //*

// int main(){
/*
     int seriya[2][3] = {{2,3,55},{54,6,7}};
     int seriya2[2][3] = {};
     //JUFT SONLAR UCHUN
     for(int satr = 0;satr < 2;satr += 1){
        for(int ustun = 0;ustun < 3;ustun += 1){
     //printf("%d ",seriya[satr][ustun]);
     if(seriya[satr][ustun] % 2 == 0){
        seriya2[satr][ustun] = seriya[satr][ustun];
        }else{
            seriya2[satr][ustun = 0];
            }
     }
     printf("\n");printf("%f\n",pi);
  }
  for(int satr = 0;satr < 2;satr += 1){
    for(int ustun =0; ustun < 3;ustun += 1){
        printf("%d ",seriya2[satr][ustun]);
        }
        printf("\n");
    }*/

    // FUNCTION , FUNKSIYA
//     jamoalarKorsat();
//     printf("Natija: %d\n",qosh(7,2));
//     qosh1(4,1);
//     printf("Faktorial: %d\n",faktorial(3));
//     printf("Faktorial: %d\n",faktorial(6));
//     printf("Faktorial: %d\n",faktorial(7));

//     char name[100];
//     do{
//         printf("Ismni Kiriting: ");
//         scanf("%s",&name);
//         printf("Bosh Harf: %c\n",boshHarfKorsat(name));
//     }while(name[0] != '0');

//     const int son = 23;
//     //son = 24;
//     printf("%d\n",son);
//     //pi = 3.14;

//     int s;
//     int seriya[3] = {2,3,4};
//     int uzunlik = sizeof(seriya) / 4;
//     printf("Eng Katta Qiymat: %d\n",engKattaniTop(seriya,uzunlik));

//     int seriyaJuft[7] = {2,3,4,5,6,78,7};
//     int uzunlik1 = sizeof(seriyaJuft) / 4;
//     printf("Juft Toplam: %d\n",juftlarniToplam(seriyaJuft,uzunlik1));

//     return 0;
// }