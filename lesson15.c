// include <stdio.h>
// include <stdlib.h>
// include <time.h>


// imtixon
// int main()
// {
/*//////////////////////////////________________1-misol____________________________________________
*
    int i,j,row;
    printf("Iltimos son kiriting: ");              // *****
    scanf("%d",&row);                               //****
                                                    //***
    for(i = row;i >= 1;i--){                        //
        for(j = 1;j <= i;j++){                      //*
            printf("* ");
        }
        printf("\n");
   }
/*

//____________________________________5-misol_______________________________________________

    int a,b;
    printf("a va b qiymat kiriting: ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    b = a+b;
    a = b-a;
    a = b-a;
    b = b-a;
    printf("%d  %d",a,b);






//__*///_____________________________6-misol______________________________________________________________


  /*  int matrix[7] [7];
    int rendem;

    for(int i = 1;i <= 7;i += 1){
        for(int j = 1;j <= 7;j += 1){
            matrix[7][7] = 1 + rand() % 7;
            rendem = matrix[7][7];
            printf("%d  ",rendem);
            }
            printf("\n");
        }










//__________________________________________4-misol____________________________________________________________________
/*
    int n;
    int narx;
    float pul;
    int qarz;
    printf("Bir dona banan narxi 2$\n");
    printf("Necha dollar pulingiz bor :");
    scanf("%f",&pul);
    printf("Nechta banan olmoqchisiz: ");
    scanf("%d",&n);
    narx=2*n;
    qarz=narx-pul;
    if(narx<=pul){
        printf("Pulingiz yetarli !!!");
    }else if(narx>pul){
        printf("Siz Ortogingizdan %d $ qarz olishingiz kerak",qarz);
    }

//___________________________________2-misol____________________________________________________________________
*/
//
/*

    int matritsa[2][3] = {11,6,4,789,5426,89};
        for(int i = 0;i<2;i+=1){
            for(int j = 0;j<3;j+=1){
                printf("%d   ",matritsa [i][j]);
            if(matritsa[i][j]%2==0){
                printf("juft sonlar\n");
            }else if(matritsa[i][j]%2==1){
                printf("toq sonlar\n");
                }
            }
        }


//___________________________________________3-misol_________________________________________________________________________

///*
    int matrix[4][4] = {{1,2,3,4,},{5,6,7,8},{9,11,22,13},{5,7,9,10}};
    int jami=0,toqjami=0;
    for(int i=0; i<4; i+=1){
        for(int j=0; j<4; j+=1){
            printf("%d",matrix[i][j]);
            if(matrix[i][j]%2==0){
                printf("Juft son: %d\n ",matrix[i][j]);
                jami+=matrix[i][j];
            }else if(matrix[i][j]%2!=0){
                printf("Toq son: %d\n",matrix[i][j]);
                toqjami+=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Juft sonlar yig'indisi-> %d\n",jami);
    printf("Toq sonlar yig'indisi-> %d\n",toqjami);
    printf("Ma")
*/
//________________________________________yuduz_______________________________________________________________
/*
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
        printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=i;j<n;j++){
            printf("*");
        }
        for(int j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

// */

//     return 0;
// }