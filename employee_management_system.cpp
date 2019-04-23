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

void menu()

{
    
    system("cls");
    
    // highvideo();
    
    cout<<"          ";
    
    printf("\n*****  Employees Management System 1.0 ***** ");
    
    
    
    //normvideo();
    
    cout<<endl;
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  b---->Built The Employee Table ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  l---->List The Employee Table  ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  i---->Insert New Entry        ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  d---->Delete An Entry         ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  e---->Edit An Entry           ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  s---->Search Arecord          ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  n---->Sort The Table          ";
    
    cout<<"             ";
    
    cout<<"\n\t\t Press  q---------->Quit Program              ";
    
    cout<<"             ";
    
    cout<<"\n\n \t\t Select Your Option Please ====> ";
    
}

void build()

{
    
    
    system("cls");
    
    // highvideo();
    
    printf("Build The Table");
    
    cout<<endl;
    
    //normvideo();
    
    cout<<"maximum number of entries  -----  >  20"<<endl;
    
    cout<<"how many do you want    ----->";
    
    cin>>num;
    
    cout<<"Enter The Following Items"<<endl;
    
    for(int i=0;i<=num-1;i++)
        
    {
        
        cout<<" Name  ";
        
        cin>>emp[i].name;
        
        cout<<"Code  ";
        
        cin>>emp[i].code;
        
        cout<<"Designation  ";
        
        cin>>emp[i].designation;
        
        cout<<"Years of Experience  ";
        
        cin>>emp[i].exp;
        
        cout<<"Age  ";
        
        cin>>emp[i].age;
        
    }
    
    cout<<"going to main menu";
    
    Sleep(500);
    
}

void  list()

{
    
    system("cls");
    
    // highvideo();
    
    printf("       ********List The Table********");
    
    cout<<endl;
    
    //normvideo();
    
    cout<<"     Name     Code     Designation     Years(EXP)     Age "<<endl;
    
    cout<<"    ------------------------------------------------------"<<endl;
    
    for(int i=0;i<=num-1;i++)
        
    {
        
        cout<<setw(13)<<emp[i].name;
        
        cout<<setw(6)<<emp[i].code;
        
        cout<<setw(15)<<emp[i].designation;
        
        cout<<setw(10)<<emp[i].exp;
        
        cout<<setw(15)<<emp[i].age;
        
        cout<<endl;
        
    }
    
    cout<<"going to main menu";
    
    getch();
    
}
void insert()

{
    
    system("cls");
    
    int i=num;
    
    num+=1;
    
    // highvideo();
    
    printf("Insert New Record");
    
    cout<<endl;
    
    //normvideo();
    
    cout<<"Enter The Following Items"<<endl;
    
    cout<<"Name  ";
    
    cin>>emp[i].name;
    
    cout<<"Code  ";
    
    cin>>emp[i].code;
    
    cout<<"Designation  ";
    
    cin>>emp[i].designation;
    
    cout<<"Years of Experience  ";
    
    cin>>emp[i].exp;
    
    cout<<"Age  ";
    
    cin>>emp[i].age;
    
    cout<<endl<<endl;
    
    cout<<"going to main menu";
    
    Sleep(500);
    
    
}

void editname(int i)

{
    
    cout<<"Enter New Name----->  ";
    
    cin>>emp[i].name;
    
}

void editcode(int i)

{
    
    cout<<"Enter New Job Code----->  ";
    
    cin>>emp[i].code;
    
}


