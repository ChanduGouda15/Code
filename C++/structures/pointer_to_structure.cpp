#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main(){
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length=10;
    p->breadth=15;
    cout<<"area is :"<<p->length*p->breadth<<endl;
}