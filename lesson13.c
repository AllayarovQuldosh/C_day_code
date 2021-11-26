// include <stdio.h>
// #include <stdlib.h>
// 13-dars
// int main()
// {
/*

    int seriya[5]={11,22,33,44,55};
    int matritsa[2][4]={11,22,33,44,55,66,77,88};
    printf("%d\n",matritsa[1][1]);

    int matrax[2][4]={
                        11,22,33,44,
                        55,66,77,88
                        };
    int matrax1[2][4]={
                        {11,22,33,44},
                        {55,66,77,88}
                        };
    int matrax2[6][2]={{32,54},{55,76},{12,33},{88,98},{41,23},{111,543}};
    printf("%d\n",matrax2[2][0]);

    int matrix3[2][6]={{123,22,542,111,765,77},{111,222,432,888,654,678}};
    printf("%d\n",matrix3[1][1]);
    int matritsa2[3][2]={{55,333},{232,764},{123,543}};
    for(int son = 0;son < 3;son += 1){
        for(int num = 0;num < 2;num += 1){
            printf("%d ",matritsa[son][num]);
        }
        printf("\n");
    }

        */
/*
    int closed[10]={};

    for(int i=0;i<10;i+=1){
        printf("%d ",closed[i]);
    }

    int step,door;
    for(step=0;step<10;step+=1){
        for(door=step;door<10;door=door+step+1){
            closed[door]=!closed[door];
        }
    }

    printf("\n");
    for(int i=0;i<10;i+=1){
        printf("%d ",closed[i]);
    }
    printf("\n");
    for(int i=0;i<10;i+=1){
        if(closed[i]){
            printf("%d ",i);
        }
    }

/*
    int row,column;
    printf("Satirlar Soni: ");
    scanf("%d",&row);
    printf("Ustunlar Soni: ");
    scanf("%d",&column);
    int matrix[row] [column];

    for(int i=0;i<row;i+=1){
        for(int j=0;j<column;j+=1){
            printf("%d - satr. %d - ustun: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n");

    for(int i=0;i<row;i+=1){
        for(int j=0;j<column;j+=1){
            printf("%d\n",matrix[i]  [j]);

        }
    }
//     printf("\n");
// */
//     return 0;
// }