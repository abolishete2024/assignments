#include<stdio.h>
void ageperson();
void main(){
  ageperson();  
}
void ageperson(){

int age;
    printf("Enter the age of a person:\n");
    scanf("%d", &age);

    if(age < 12){
        printf("Person is a child");
    }
    else if(age >= 12 && age <= 19){
        printf("Person is a teenager");
    }
    else if(age >= 20 && age <= 59){
        printf("Person is an adult");
    }
    else if(age >= 60){
        printf("Person is a senior");
    }
    else{
        printf("Invalid age");
    }

}