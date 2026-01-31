#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
    int i,j,x,y,a,b,t,z,m,r,sayi;
    int f=0;
    int score=0;
    int maxscore=0;
    srand(time(NULL));

int matris[100][100];
for(;;){
   printf("                 TETRIS\n1-Basla\n2-Skorunu gor\n3-Oyundan cik\n");


   scanf("%d",&sayi);
   switch(sayi){
   case 1:
    printf("Oyun tahtasi  boyutlarini giriniz:");
    scanf("%d %d",&y,&x);
  for(i=0;i<y;i++){
        for(j=0;j<x;j++){
           matris[i][j]=0;
 }
       }
      for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   for(i=0;i<y;i++){
        printf("|");
        for(j=0;j<x;j++){
           if(matris[i][j]==0){
            printf("  ");
        }
        else{
                printf("* ");
              }
        }
    printf("|\n");
   }
   for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   f=0;
   score=0;
   char p;
   p='r';
   while(f==0&&p!='c'){
        p='r';
        if(p=='c'){
        break;
    }
int r = rand()%8;
int k=0;

switch(r){
/*1
  1
  */
case 0:
    printf("|sekil-1|\n\t*\n\t*\n");
    for(;p=='r';){
    printf("secmek : a cevirmek : r cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p=='r'){
        k=(k+1)%2;
        if(k==0){
            printf("|sekil-1|\n\t*\n\t*\n");

        }
        else{
            printf("|sekil-2|\n* *\n");
        }
    }}
    if(p!='c'){
    if(k==0){

    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1){
matris[b][a]++;
matris[b-1][a]--;
matris[b-1][a]++;
matris[b-2][a]--;
 b++;
 if(b==y){
    break;
 }
 }
 }
        if(k==1){
    printf("|sekil-2|\n* *\n");
    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;

while(matris[b][a]!=1&&matris[b][a+1]!=1){
matris[b][a]++;
matris[b][a+1]++;

b++;
matris[b-2][a]--;
matris[b-2][a+1]--;

 if(b==y){
    break;
 }
 }
 }}
        break;
   //111
 case 1:
     printf("|sekil-1| * * *\n");
    for(;p=='r';){
    printf("secmek : a cevirmek : r cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p=='r'){
        k=(k+1)%2;
        if(k==0){
            printf("|sekil-1| * * *\n");

        }
        else{
            printf("|sekil-1|\n*\n*\n*\n");
        }
    }}
    if(p!='c'){
    if(k==1){
    printf("|sekil-1|\n*\n*\n*\n");
    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1){

 matris[b][a]++;
 matris[b-1][a]--;
matris[b-1][a]++;
 matris[b-2][a]--;
 matris[b-2][a]++;
 matris[b-3][a]--;


 b++;
 if(b==y){
    break;
 }
 }

}
    if(k==0){
    printf("\t* * *\n");
    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;

while(matris[b][a]!=1&&matris[b][a+1]!=1&&matris[b][a+2]!=1){
matris[b][a]++;
matris[b][a+1]++;
matris[b][a+2]++;
b++;
matris[b-2][a]--;
matris[b-2][a+1]--;
matris[b-2][a+2]--;
 if(b==y){
    break;
 }
 }
}}
        break;
   /*1
     1
     1
     */
case 3:
    printf("|sekil-1|\n*\n*\n*\n");
    for(;p=='r';){
    printf("secmek : a cevirmek : r cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p=='r'){
        k=(k+1)%2;
        if(k==0){
            printf("|sekil-1|\n*\n*\n*\n");

        }
        else{
            printf("\t* * *\n");
        }
    }}
    if(p!='c'){
    if(k==0){

    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1){

 matris[b][a]++;
 matris[b-1][a]--;
matris[b-1][a]++;
 matris[b-2][a]--;
 matris[b-2][a]++;
 matris[b-3][a]--;


 b++;
 if(b==y){
    break;
 }
 }

}
    if(k==1){

    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;

while(matris[b][a]!=1&&matris[b][a+1]!=1&&matris[b][a+2]!=1){
matris[b][a]++;
matris[b][a+1]++;
matris[b][a+2]++;
b++;
matris[b-2][a]--;
matris[b-2][a+1]--;
matris[b-2][a+2]--;
 if(b==y){
    break;
 }
 }
}}
        break;

   /*1
     1
     1 1*/

   case 4:
    printf("sekiliniz:*\n\t  *\n\t  * *\n\n");
    for(;p=='r';){
    printf("secmek : a cevirmek : r cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p=='r'){
        k=(k+1)%2;
        if(k==0){
            printf("sekiliniz:*\n\t  *\n\t  * *\n\n");

        }
        else{
            printf("sekil2:\n* * *\n*\n");
        }
    }}
if(p!='c'){

    if(k==0){


    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1&&matris[b][a+1]!=1){

 matris[b][a]++;
 matris[b-1][a]--;
matris[b-1][a]++;
 matris[b-2][a]--;
 matris[b-2][a]++;
 matris[b-3][a]--;
matris[b][a+1]++;
matris[b-1][a+1]--;
 b++;

 if(b==y){
    break;
 }
 }
 }

if(k==1){
     printf("sekil2:\n* * *\n*\n");
    printf("Sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
while(matris[b][a]!=1&&matris[b-1][a+1]!=1&&matris[b-1][a+2]!=1){
matris[b][a]++;
matris[b-1][a]--;
matris[b-1][a]++;
matris[b-2][a]--;
matris[b-1][a+1]++;
matris[b-2][a+1]--;
matris[b-1][a+2]++;
matris[b-2][a+2]--;
b++;
 if(b==y){
    break;
 }
}
}

    }
        break;
   /*1 1
     1 1*/
   case 5:
    printf("\t* *\n\t* *\n");
    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1&&matris[b][a+1]!=1){
matris[b][a]++;
matris[b-1][a]--;
matris[b-1][a]++;
matris[b-2][a]--;
matris[b][a+1]++;
matris[b-1][a+1]--;
matris[b-1][a+1]++;
matris[b-2][a+1]--;
 b++;
 if(b==y){
    break;
 }
 }
 break;
   //1
case 6:
    printf("\t*\n");
    printf("secmek : a cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p!='c'){

    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 a--;
 b=0 ;
        while(matris[b][a]!=1){
 matris[b][a]++;
 matris[b-1][a]--;
 b++;
 if(b==y){
    break;
 }
 }
 }
break;
case 7:
    printf("sekliniz :* *\n\t    * *\n");
    for(;p=='r';){
    printf("secmek : a cevirmek : r cikmak : c\n ");
    scanf("%c",&p);
    scanf("%c",&p);
    if(p=='r'){
        k=(k+1)%2;
        if(k==0){
            printf("sekliniz :* *\n\t    * *\n");

        }
        else{
            printf("sekliniz:*\n         * *\n           *\n");
        }
    }}
    if(p!='c'){
    if(k==0){

    printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 b=0 ;
        while(matris[b][a]!=1&&matris[b][a+1]!=1&&matris[b-1][a-1]!=1){
 matris[b][a]++;
 matris[b][a+1]++;
 matris[b-1][a]++;
 matris[b-1][a-1]++;

 matris[b-1][a]--;
 matris[b-1][a+1]--;
 matris[b-2][a]--;
 matris[b-2][a-1]--;
 b++;
 if(b==y){
    break;
 }
 }
    }
 if(k==1){

     printf("sol kosesinin dusecegi yeri yaziniz:");
   scanf("%d",&a);
 b=0 ;
     while(matris[b][a]!=1&&matris[b-1][a-1]!=1){
 matris[b][a]++;
 matris[b-1][a]++;
 matris[b-1][a-1]++;
 matris[b-2][a-1]++;

 matris[b-1][a]--;
 matris[b-2][a]--;
 matris[b-2][a-1]--;
 matris[b-3][a-1]--;
 b++;
 if(b==y){
    break;
 }
 }
 }
    }
break;
   }
if(p!='c'){
for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   for(i=0;i<y;i++){
        printf("|");
        for(j=0;j<x;j++){
           if(matris[i][j]==0){
            printf("  ");
        }
        else{
                printf("* ");
              }
        }
    printf("|\n");
   }
   for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
for(t=0;t<x;t++){
        if(matris[0][t]==1){
            f=1;
    printf("oyunu kaybettiniz\n");
            break;
        }
        }
    if(f==1){
        if(maxscore<=score){
            maxscore=score+18;
        }
    }
   for(i=0;i<y;i++){
        z=0;
        for(j=0;j<x&&z==0;j++){
              if(matris[i][j]==0){
                z=1;
              }
        }
   if(z==0){
        printf("satir silindi.\n");
        score=score+48;
        for(m=0;m<x;m++){
            matris[i][m]=0;
        }
    for(r=i;r>0;r--){
        for(m=0;m<x;m++){
            matris[r][m]=matris[r-1][m];
        }
    }
    for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   for(i=0;i<y;i++){
        printf("|");
        for(j=0;j<x;j++){
           if(matris[i][j]==0){
            printf("  ");
        }
        else{
                printf("* ");
              }
        }
    printf("|\n");
   }
   for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   }
   }
   for(i=0;i<y;i++){
        z=0;
        for(j=0;j<x&&z==0;j++){
              if(matris[i][j]==0){
                z=1;
              }
        }
   if(z==0){
        printf("satir silindi.\n");
        score = score+48;
        for(m=0;m<x;m++){
            matris[i][m]=0;
        }
    for(r=i;r>0;r--){
        for(m=0;m<x;m++){
            matris[r][m]=matris[r-1][m];
        }
    }
    for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   for(i=0;i<y;i++){
        printf("|");
        for(j=0;j<x;j++){
           if(matris[i][j]==0){
            printf("  ");
        }
        else{
                printf("* ");
              }
        }
    printf("|\n");
   }
   for(i=0;i<x;i++){
    printf(" -");
   }
   printf("\n");
   }
   }
   score=score+18;
   printf("score:%d\n",score);


   }}

break;
   case 2:
       printf("maxscore:%d\n",maxscore);
break;
   case 3:
       y=0;
break;

   default:
    printf("lutfen gecerli bir sayi giriniz.\n");
    break;
   }

   if(y==0){
    break;
   }
}
   return 0;
}

