//Define 2 functions producer() and consumer() which will operate on a common variable item. Producer () will increment the variable item & consumer () will decrement the value of item. Producer cannot increment if item reaches at 10. Consumer () cannot decrement when item reaches 0. 
#include <stdio.h>
int item = 0;
void producer() {
    if(item < 10) {
        item++;
        printf("Produced: %d\n", item);
    } else {
        printf("Item is full (10)\n");
    }
}
void consumer() {
    if(item > 0) {
        item--;
        printf("Consumed: %d\n", item);
    } else {
        printf("Item is empty (0)\n");
    }
}
int main() {
    int choice;
    while(1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\n");
        scanf("%d", &choice);

        if(choice == 1)
            producer();
        else if(choice == 2)
            consumer();
        else
            break;
    }
    return 0;
}
