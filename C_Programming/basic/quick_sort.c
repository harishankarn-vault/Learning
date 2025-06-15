#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Defining node struct string_node
typedef struct string_node{
    char *car_data;
    struct string_node *next_node;
}string_node;

// Defining car_details struct
typedef struct car_details{
    char *car_name; // car name
	/*char *car_type; // car type
	char *car_manufacture; // car manufacture
	char *car_price; // car price
	char *car_range; // car range
    */

}car_details;

// Defining car_node struct
typedef struct car_node{
	car_details *car_data; 
	struct car_node *next_car;

}car_node;

// Defining global variables
car_node *head = NULL; // head of the linked list
car_node *tail = NULL; // tail of the linked list

void swap(car_details **a, car_details **b) {
    car_details *temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int *a, int *b) {
    printf("address of a=%p\n",a);
    printf("address of b=%p\n",b);
    
    int *temp = a;
    a = b;
    *b = *temp;

    printf("\nafter swap\n");
    printf("address of a=%p\n",a);
    printf("address of b=%p\n",b);

}

car_node *get_tail(car_node *head){
    while(head->next_car != NULL){
        head = head->next_car;
    }
    return head;
}

car_node* partition(car_node* head,car_node* tail) {

    car_node *pivot=tail;
    car_node *prev=head; // represents i
    car_node *current=head->next_car; // represents j

    while(current!=tail->next_car){
        if(pivot->car_data->car_name > current->car_data->car_name){

            //swap();
        }
    }

    return pivot;
}

void quicksort_algo(car_node *head, car_node*tail){
    if (head==NULL || head==tail || head==tail)
        return;


}
//     if(head==tail)
//         return;

//     car_node *pivot=partition(head,tail);
//     quicksort_algo(head,pivot);
//     quicksort_algo(pivot->next_car,tail);
// }

// car_node *quick_sort(car_node* head) {

//     car_node *pivot=partition(head,tail);
    
//     return head;

// }
// }
// }
// }
// }

car_node *create_car_node(car_details *carDetails){
    car_node *newNode= (car_node *)malloc(sizeof(car_node)); 

    newNode->car_data = carDetails;
    newNode->next_car  = NULL;

    return newNode;
}

void print_list(car_node *head) {
    car_node *current = head;
    while (current != NULL) {
        printf("%s\n", current->car_data->car_name);
        current = current->next_car;
    }
}

/*int main(){

    head = create_car_node(&(car_details){"Ford"});
    tail = get_tail(head);

    head->next_car = create_car_node(&(car_details){"Toyota"});
    head->next_car->next_car = create_car_node(&(car_details){"Honda"});
    head->next_car->next_car->next_car = create_car_node(&(car_details){"BMW"});
    head->next_car->next_car->next_car->next_car = create_car_node(&(car_details){"Audi"});

    head = quick_sort(head);
    print_list(head);
    return 0;

}*/

int main(){
    int a=3, b=6;
    printf("before swap\n");
    printf("a=%d \nb=%d\n",a,b);
    swap(&a,&b);
    printf("\nafter swap\n");
    printf("a=%d \nb=%d\n",a,b);
}