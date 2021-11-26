
// ++++++++++++++++++++++++++++++++++++++++++++POINTERLAR__________________________________________________________________
/*
void orinAlishtir(int *s1,int *s2){

    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
void xatJonat(int *xatSoni){
    *xatSoni -= 3;
}
char *nameReturn(){
    return "Wick";
}
char *modelReturn(){
    char *model = "Tesla";
    return model;
}
void ekrangaChiqar(int *s,int *u){
    for(int i = 0;i < *u; ++i);
        printf("%d ",*(s+i));
    }
// }
// */
// void alfabet(int *ser,int *bet){
//     for(int i = *ser;i < *bet;i += 1){
//         printf("%p\n",*(ser+i));
//     }
// }

// int main()
// {
// // /*
//     int son = 12;
//     int *sonA = &son;
//     printf("%X\n",sonA);
//     printf("%d\n",*sonA);

//     int i = 1,*iA = &i;
//     float f = 1.1,*fA = &f;
//     double d = 1.3,*dA = &d;
//     char c = 's',*cA = &c;

//     printf("Son: %d.Adess: %X\n",*iA,iA);
//     printf("Float: %.2f.Adess: %X\n",*fA,fA);
//     printf("Double: %.2lf.Adess: %X\n",*dA,dA);
//     printf("Char: %c.Adess: %X\n",*cA,cA);

//     printf("Son: %d.Adess: %X\n",i,&i);
//     printf("Float: %.2f.Adess: %X\n",f,&f);
//     printf("Double: %.2lf.Adess: %X\n",d,&d);
//     printf("Char: %c.Adess: %X\n",c,&c);


//     int sonlar[3] = {11,22,33};
//     int *sonlarA = &sonlar;
//     printf("0 -%lu\n",&sonlar[0]);
//     printf("1 -%lu\n",&sonlar[1]);
//     printf("2 -%lu\n",&sonlar[2]);

//     printf(" %lu\n",sonlarA);
//     printf(" %lu\n",sonlarA+1);
//     printf(" %lu\n",sonlarA+2);

//     printf("%d\n",*sonlarA);
//     printf("%d\n",*(sonlarA+1));
//     printf("%d\n",*(sonlarA+2));

//     int son1 = 11, son2 = 22;
//     orinAlishtir(&son1,&son2);
//     printf("Son1: %d. Son2: %d\n",son1,son2);

//     int xS = 5;
//     xatJonat(&xS);
//     printf("%d",xS);

//     printf("%s\n",nameReturn());
//     printf("%s\n",modelReturn());
// *
//     int seriya[] = {11,22,33,44,55,66,77,88,99};
//     uzunlik = sizeof(seriya) / 4;
//     ekrangaChiqar(&seriya,&uzunlik);
// // */
// //     int s = 65,d = 90;
// //     alfabet(&s,&d);

// //     return 0;
// // }