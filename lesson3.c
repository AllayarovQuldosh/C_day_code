


// void ismlarniEkrangaChiqar(char s[][20],int u){
//     for(int i = 0;i< u;i+=1){
//         printf("%s\n",s[i]);
//     }
// // }
// // int perfectMi(int son){
//    int  toplam = 1;
//     if(son == 1){
//         return -1;
//     }
//     for(int bolinma = 2;bolinma <= son / 2;bolinma += 1){
//        if(son % bolinma == 0){
//             toplam += bolinma;
//         }
//     }
//     if(son == toplam)
//         return 1;
//     else
        // return -1;
// }
// int  teskariSon(int a,int b){
//      int c;
//      c = a + b;
//      a = c - a;
//      b = c - b;
//      if(a == a && b == b){
//      return 1;
//     }
//     }

//     int ekubniTop(int s1,int s2){
//     int katta = 0,kichik = 0,qoldiq;
//     if(s1 > s2){
//         katta = s1;
//         kichik = s2;
//     }else{
//         katta = s2;
//         kichik = s1;
//     }
//     qoldiq = katta % kichik;
//     while(qoldiq != 0){
//         katta = kichik;
//         kichik = qoldiq;
//         qoldiq = katta % kichik;
//         }
//         return kichik;
//     }

/*

    char sozniTeskarisiniTop(char seriya){
        int i = 0;
        for(i = 0;seriya[i] != '\0';i += 1){}
            for(;i >= 0;i -= 1){
        }
        return sozniTeskarisiniTop(seriya);
    }

// */
//     int kattaniSonniTop(int s1,int s2,int s3){
//        int   katta = 0;
//         katta = s1;
//         if(s2 > katta){
//             katta = s2;
// //         }

//         if(s3 > katta){
//             katta = s3;
//     }
//     return katta;
// }
//     int kabisaYilniTop(int yil){
//         if(yil % 4 == 0 && yil % 100 != 0)
//             return 1;
//         else
//             return -1;

//     }
//     int tubSonniTop(int s1,int s2){
//         for(s1;s1 <= s2;s1 += 1){
//             if(s1 % 2 == 0){
//             return 1;
//             }
//         }
//             return -1;
// }


// int main(){
// // /*
//   char seriya[5][20] = {"John","Qaxi","Baxtiyor","Tolib","Ashraf"};
//   ismlarniEkrangaChiqar(seriya,5);
// //              2-misol
//     int son;
//     printf("Son Kiriting: ");
//     scanf("%d",&son);
//     if(perfectMi(son) == 1){
//         printf("%d\a Perfect Son !!!",son);
//     }else{
//         printf("%d Perfect Son emas !!!",son);
//     }
// */
// //              3-misol

//     int s1,s2;
//     printf("S1,S2 qiymat kiriting: ");
//     scanf("%d%d",&s1,&s2);
//     if(teskariSon(s1,s2)==1)
//     printf("Teskari Son%d%d",teskariSon(s1,s2));

// //              4-misol
// /*
//     int s1 = 0,s2 = 0;
//     printf("EKUBINI Bilmoqchi Bo`lgan Sonlaringizni Kiriting: ");
//   /
//     char seriya[100] = "";
//     printf("So`z Kiriting: ");
//     scanf("%s",&seriya);
//     printf("%c",sozniTeskarisiniTop(seriya));
// */
//
/*            6-misol

    int a,b,c;
    printf("a,b,c ga qiymat kiriting: ");
    scanf("%d%d%d",&a,&b,&c);
        printf("Katta Son: %d",kattaniSonniTop(a,b,c));

 //               8-misol
 /*
    int yil;
    printf("Yilni Kiriting: ");
    scanf("%d",&yil);
    if(kabisaYilniTop(yil) == 1){
        printf("Kabisa Yili !!!");
    }else{
        printf("Oddiy Yil !!!");
}
*/
//  /*
/*          9-misol
    int s1,s2;
    printf("S1 va S2 qiymat kiriting: ");
    scanf("%d%d",&s1,&s2);
    for(int s1 = 2;s1 <= s2;s1+=1){
        if(tubSonniTop(s1,s2) == 1){
            printf("Tub Son: %d\n",tubSonniTop(s1,s2));
//         }
//     }
//     */
//     return 0;

// }