#include<stdio.h>
void main(){
    int price,discount;
    char student;
    printf("enter the price:\n");
    scanf("%d",&price);
   printf("are u a student:\n");
   scanf(" %c",&student);
   if(student=='y')
   {
    if(price>500){
        discount=20/100*price;
        price=price-discount;
    }
    else{
        discount=10/100*price;
        price=price-discount;
    }
printf("the price is=%d",price);
   }
   else if(student=='n'){
    if(price>600){
        discount=15/100*price;
        price=price-discount;

    }
    else{
        price=price;
        
    }
    printf("the price is=%d",price);
}
    else{
        printf("invalid price");
    }

   getch();
    }
    
        
    

