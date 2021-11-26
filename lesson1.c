int main()
{
/*
    // looop ->
    int sanoq = 0;
    do{
        printf("Sanoq: %d\n",sanoq);
        sanoq += 1;

    }while(sanoq <= 10);

    int son = 11;
    while(son <= 10){
        printf("Son: %d\n",son);
        son += 1;
    }
    int number = 11;
    do{
        printf("Number: %d\n",number);
        number += 1;
    }while(number <= 10);

*
    int son = 0;
    int katta;
    char davomEtaymi = 'h';
    do{
        printf("Iltimos son kiriting: ");
        scanf("%d",&katta);
        if(son < katta){
            son = katta;
            printf("Yangi Katta: %d\n",son);
        }else{
            printf("Katta Son O'zgarmadi \n");
        }
    printf("davom etishni hohlaysizmi [h/y]: ");
    scanf(" %c",&davomEtaymi);
    }while(davomEtaymi == 'h' || davomEtaymi == 'H');


    char davomMi = 'h';
    while(davomMi == 'h' || davomMi == 'H'){
        int son = 0;
        int xonalarSoni = 0;
        int sonlarToplami = 0;
        printf("Sonni Kiriting: ");
        scanf("%d",&son);
        if(son > 0){
            do{
                sonlarToplami += son % 10;
                xonalarSoni+=1;
                son = son / 10;
            }while(son > 0);
        }else if(son == 0){
            printf("Faqat musbat son kiriting !!!\n\n");
        }else{
            do{
                sonlarToplami += son % 10;
                xonalarSoni+=1;
                son = son / 10;
            }while(son < 0);
        }
        printf("Sonlar Yigindisi: %d\n",sonlarToplami);
        printf("Son %d xonadan iborat\n",xonalarSoni);
        printf("Davom Etiasizmi: ");
        scanf(" %c",&davomMi);
        }
/*

    int login;
    int password;
    do{
        printf("Login va password kiriting: ");
        scanf("%d%d",&login,&password);
    if(login==1111&&password==2222){
        printf("Hush kelibsiz !!!");break;
    }else if(login != 1111 && password != 2222){
        printf("Login va password xato !!!\n");break;
    }else if(login != 1111){
        printf("login xato !!!\n");break;
    }else if(password != 2222){
        printf("password xato !!!\n");break;
    }else{
        printf("Tugadi !!!\n");break;
    }
    }while(1);


/*
    int login;
    int password;
  tepaga:  printf("Loginni kiriting: ");
    scanf("%d",&login);
    printf("passwordni kiriting: ");
    scanf("%d",&password);
    if(login == 1111 && password == 2222){
        do{
            printf("Xush kelibsiz !!!");break;
        }while(login > 0 && password > 0);
        }else{
            printf("Notogiri parol kiriting !!!");
            goto tepaga;
            }

*/


    return 0;
}