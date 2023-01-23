#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack*ptr , int val){
    if(isFull(ptr)){
        printf("stack is overflow ! can't push %d for the stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}


int pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("stack is underflow ! can't pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main(){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack is created for successfull\n");

   printf("Before pushing, Full: %d\n", isFull(sp));
   printf("Before pushing, Empty: %d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10); //---->pushed 10 values
   printf("After pushing, Full: %d\n", isFull(sp));
   printf("After pushing, Empty: %d\n", isEmpty(sp));
    

    printf("popped %d from the stack\n", pop(sp)); //------>LIFO
    printf("popped %d from the stack\n", pop(sp)); // ------>LIFO 
    printf("popped %d from the stack\n", pop(sp)); // ------>LIFO


    return 0;


}
