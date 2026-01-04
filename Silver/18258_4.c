#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)
#define MAX 2000000

int queue[MAX];
int result[MAX];
int cnt = 0;
int begin = 0;
int end = 0;

void push(int val){
    queue[end] = val;
    end++;
}
void pop(){
    if(end == begin) {
        result[cnt] = -1; 
        cnt++;
    }
    else{
        result[cnt] = queue[begin];
        begin++; cnt++;
    }
}
void size(){
    result[cnt] = end - begin; cnt++;
}

void empty(){
    if(end == begin) {
        result[cnt] = 1; 
        cnt++;
    }
    else {
        result[cnt] = 0; 
        cnt++;
    }
}

void front(){
    if(end == begin){
        result[cnt] = -1;
        cnt++;
    }
    else{
        result[cnt] = queue[begin];
        cnt++;
    }
}

void back(){
        if(end == begin){
        result[cnt] = -1;
        cnt++;
    }
    else{
        result[cnt] = queue[end - 1];
        cnt++;
    }
}

int main(void){
    int input;
    int num;
    char command[10];

    scanf("%d", &input);
    int arr[input];

    for(int i = 0; i < input; i++){
        scanf("%s", command);
        if(strcmp(command, "push") == 0){
            scanf("%d", &num);
            push(num);
        }
        else if(strcmp(command, "pop") == 0) pop();
        else if(strcmp(command, "size") == 0) size();
        else if(strcmp(command, "empty") == 0) empty();
        else if(strcmp(command, "front") == 0) front();
        else if(strcmp(command, "back") == 0) back();
    }
    // printf("---------------------------------------------\n");
    for(int i = 0; i < cnt; i++) printf("%d\n", result[i]);
}