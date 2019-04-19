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

int main()

{
    
    system("cls");
    
    void build();
    
    void list();
    
    void insert();
    
    void deletes();
    
    void edit();
    
    void search();
    
    void sort();
    
    char option;
    
    void menu();
    
    menu();
    
    while((option=cin.get())!='q')
        
    {
        
        switch(option)
        
        {
                
            case 'b':
                
                build();
                
                break;
                
            case 'l':
                
                list();
                
                break;
                
            case 'i':
                
                insert();
                
                break;
                
            case 'd':
                
                deletes();
                
                break;
                
            case 'e':
                
                edit();
                
                break;
                
            case 's':
                
                search();
                
                break;
                
            case 'n':
                
                sort();
                
                break;
                
        }
        
        menu();
        
    }
    
    return 0;
    
}

