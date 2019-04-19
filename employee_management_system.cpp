#include<iostream>

#include<cstring>

#include<cstdlib>

#include<iomanip>

#include<windows,h>

//#include <ctime>

//#include <dos.h>

#include<dos.h>

#include<conio.h>

#include<cstdio>

#define max 20

using namespace std;

struct employee

{
    
    char name[20];
    
    long int code;
    
    char designation[20];
    
    int exp;
    
    int age;
    
};

int num;

employee emp[max],tempemp[max],sortemp[max],sortemp1[max];


