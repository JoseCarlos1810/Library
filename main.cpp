#include <iostream>
using namespace std;
#include "library.cpp"
#include "item.cpp"
//this function displays a menu of the options that the user can select
void menu(){
    cout<<"1. See users info\n2. See books info"<<endl;
    cout<<"3. See magazines info\n4. Add user\n5. Add book"<<endl;
    cout<<"6. Add magazine\n7. Exit"<<endl;
}
//this is the main function, it define the variables and add some books, magazines and users to the system
int main(){
    bool continuar=true;
    string info;
    string j;
    int cont1=3;
    int cont2=3;
    int cont3=3;
    int op;
    string id;
    bool borrow;
    bool returns;
    int userNumber=3;
    string title;
    string gender;
    string author;
    string type;
    int volume;
    Library books;
    books.addBook(Book(true,"Odyssey","c1","Homero","Epic"),0);
    books.addBook(Book(true,"Ready_player one","c1","Ernest","Sci-fi"),1);
    books.addBook(Book(true,"Don_Quixote","c1","Miguel","psychological"),2);
    Library magazines;
    magazines.addMagazine(Magazine(true,"People","c2","Human-interest",3),0);
    magazines.addMagazine(Magazine(true,"National_Geographic","c2","Science",10),1);
    magazines.addMagazine(Magazine(true,"Cosmopolitan","c2","Fashion",1),2);
    Library users;
    users.addUser(User("0000001",false,true),0);
    users.addUser(User("0000002",true,false),1);
    users.addUser(User("0000003",false,true),2);
    while (continuar){
        menu();
        cout<<"Choose an option: ";
        cin>>op;
        if (op==1){
            info=users.getUsersInfo(cont1);
            cout<<info;
        }
        else if (op==2){
            info=books.getBooksInfo(cont2);
            cout<<info;
        }
        else if (op==3){
            info=magazines.getMagazinesInfo(cont3);
            cout<<info;
        }
        else if (op==4){
            if (cont1<5){
                cout<<"The last user was: "<<"000000"+to_string(userNumber)<<endl;
                cout<<"Put the id of the user: ";
                cin>>id;
                cout<<"Put if the user borrowed something T/F: ";
                cin>>j;
                if (j=="T"){
                    borrow=true;
                }
                else{
                    borrow=false;
                }
                cout<<"Put if the user returned something T/F: ";
                cin>>j;
                if (j=="T"){
                    returns=true;
                }
                else{
                    returns=false;
                }
                users.addUser(User(id,borrow,returns),cont1);
                userNumber+=1;
                cont1+=1;
            }
            else {
                cout<<"There can't be more users"<<endl;
            }
        }
        else if (op==5){
            if (cont2<5){
                cout<<"Put the title of the book (if there is any space in the title put '_'): ";
                cin>>title;
                cout<<"Put the genre of the book: ";
                cin>>gender;
                cout<<"Put the author of the book: ";
                cin>>author;
                books.addBook(Book(true,title,"c1",author,gender),cont2);
                cont2+=1;
            }
            else {
                cout<<"There can't be more books"<<endl;
            }
        }
        else if (op==6){
            if (cont3<5){
                cout<<"Put the title of the magazine (if there is any space in the title put '_'): ";
                cin>>title;
                cout<<"Put the type of the magazine: ";
                cin>>type;
                cout<<"Put the volume of the magazine: ";
                cin>>volume;
                magazines.addMagazine(Magazine(true,title,"c1",type,volume),cont3);
                cont3+=1;
            }
            else {
                cout<<"There can't be more magazines"<<endl;
            }
        }
        else {
            continuar=false;
        }
    }
    return 0;
}
