
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int a,b;
    char science[9][30] = {"CV Raman","Vikram Sarabhai","APJ Abdul Kalam","Jagadish Chandra Bose","Srinivasa Ramanujan","Einstein","Salim Ali","Charles Darwin","Isaac Newton"};
    char politics[9][30] ={"Narendra Modi","Arun Jeitley","EPS","Harsh Varthan","Advani","Mamata Banerjee","Manmohan Singh","Nirmala Sitaraman","Nithish Kumar"};
    char it[9][30]={"Steve Jobs","Bill gates","Sundar Pichai","Jack Dorsey","Larry Page","Ratan Tata","N.R.Narayana Muthi","Sridhar Vembu","Shiv Nadar"};
    char arr1[27][30] ;
    printf("Group1\n");
    for(int i=0;i<9;i++){
        printf("%s\n",science[i]);
    }
    printf("\n\n");
    printf("Group2\n");
    for(int i=0;i<9;i++){
        printf("%s\n",politics[i]);
    }
    printf("\n\n");
    printf("Group3\n");
    for(int i=0;i<9;i++){
        printf("%s\n",it[i]);
    }
    
    
    for(int i=0;i<2;i++)
    {
        printf("\nWhat stream your personality belongs to");
        scanf("%d",&a);
        if(a == 1){
            for(int j=0,k=0;j<9;j++,k++)
                strcpy(arr1[k],politics[j]);
                
            for(int j=0,k=9;j<9;j++,k++)
                strcpy(arr1[k],science[j]);
                
            for(int j=0,k=18;j<9;k++,j++)
                strcpy(arr1[k],it[j]);
            }
        
        if(a == 2){
            for(int j=0;j<9;j++){
                strcpy(arr1[j],science[j]);
                strcpy(arr1[j+9],politics[j]);
                strcpy(arr1[j+18],it[j]);
            }
        }
        if(a == 3){
            for(int j=0;j<9;j++){
                strcpy(arr1[j],politics[j]);
                strcpy(arr1[j+9],it[j]);
                strcpy(arr1[j+18],science[j]);
            }
        }
        
        
        for(int k=0;k<9;k++){
            strcpy(science[k],arr1[(3*k)]);
            strcpy(politics[k],arr1[(3*k)+1]);
            strcpy(it[k],arr1[(3*k)+2]);
        }
        
        printf("\nGroup1\n");
        for(int a=0;a<9;a++){
            printf("%s\n",science[a]);
        }
        printf("\nGroup2\n");
        for(int a=0;a<9;a++){
           printf("%s\n",politics[a]);
        }
        printf("\nGroup3\n");
        for(int a=0;a<9;a++){
            printf("%s\n",it[a]);
        }
    }
    printf("\nNow your personality belongs to  ");
    scanf("%d",&b);
    printf("\nYour choice is ");
    if(b==1){
        printf("%s",science[4]);
    }
    if(b==2){
        printf("%s",politics[4]);
    }
    if(b==3){
        printf("%s",it[4]);
    }
    return 0;
}
