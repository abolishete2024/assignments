#include <stdio.h>
typedef struct Product{
    int id;
    char name[30];
    int quantity;
    int price;
    
} Product;

void  main() {
 Product arr[1];
 int i=0;
       
        printf("Enter the id: ");
        scanf("%d", &arr[i].id);

        printf("Enter the name: ");
        scanf("%s",arr[i].name); 
         
		printf("Enter the quantity: ");
        scanf("%d", &arr[i].quantity); 
        
		printf("Enter the price: ");
        scanf("%d", &arr[i].price); 


        printf("Product details are given below:");
        printf("id=%d\n", arr[i].id);
        printf("name=%s\n", arr[i].name);
        printf("quantity=%d\n", arr[i].quantity); 
        printf("price=%d\n", arr[i].price); 
    }
