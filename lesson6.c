
// include <stdlib.h>
// #define kattaSonniTop(s1,s2)(s1>s2) ? s1 : s2
// #define qosh(n1,n2)(n1+n2)
// #define vaqtniKorsat(b)(b =='h' || b == 'H') ? TIME : " Vaqtni korishni xoxlamadingiz "

//     int juftMi(int son){
//         if(son % 2 ==0){
//             return 22;
//         }else{
//             return 11;
//         }
// //     }
// float celcius(float fahrenheit){
//     return (fahrenheit-32)/1.8;
// }
// float fahrenheit(float celcius){
//     return  celcius *1.8 + 32;
// }
// int tubMi (int s){
//     if(s==1){
//         return -1;
//         }
//         for(int bolinma = 2;bolinma <= s/2;bolinma += 1){
//             if(s%bolinma==0){
//             return -1;
//             }
//         }
//         return 1;
//     }
// int perfectMi(int son){
//     int toplam = 1;
//     if(son == 1){
//         return -1;
//     }
//     for(int bolinma = 2;bolinma <= son/2;bolinma += 1){
//         if(son % bolinma == 0){
//             toplam += bolinma;
//         }
//     }
//     if(son == toplam){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// float baho(float b){
//     if(b >= 80 && b < 100){
//         return 5;
//     }else if(b >= 60 && b < 80){
//         return 4;
//     }else if(b >= 40 && b < 60){
//         return 3;
//     }else if(b<40){
//         return 2;
//     }else{
//         return 1;
//     }
// }

// int xonalarSoniniTop(int son){
//     int xonalarSoni = 0;
//     if(son >= 0){
//         do{
//             xonalarSoni += 1;
//             son = son /10;
//         }while(son > 0);
//     }
//     return xonalarSoni;
// }



// int main()
// {
/*
    for(int i = 1;i < 111;i += 1){
        if(juftMi(i) == 22){
            printf("Son Juft: %d\n",i);
        }else if(juftMi(i) == 11){
            printf("Son Toq: %d\n",i);
        }
    }


    printf("%.2f\n",celcius(100));
    printf("%.2f\n",fahrenheit(100));

    int tubsonlarSoni = 0;
    for(int son = 1; son <= 200;son += 1){
        if(tubMi(son) == 1){
            printf("%d TUB SON !!!\n",son);
            tubsonlarSoni += 1;
        }
    }
    printf("\t\t%d ta Tub Son bor",tubsonlarSoni);

    for(int son = 1;son <= 10000;son += 1){
        if(perfectMi(son) == 1){
            printf("%d -> Perfect Number \n",son);
        }
    }

    int b;
    printf("Balingizni kiriting: ");
    scanf("%d",&b);
    printf("Sizning Bahoingiz: %d",baho(b));


    int yangiSon;
    printf("Sonni Kiriting: ");
    scanf("%d",&yangiSon);
    printf("Xonalar Soni: %d",xonalarSoniniTop(yangiSon));
*/
    // printf("Katta Son: %d\n",kattaSonniTop(12,32));
    // printf("Qoshilganda: %d\n",qosh(123,2));
    // printf("%s ",vaqtniKorsat ('H'));


//     return 0;
// }