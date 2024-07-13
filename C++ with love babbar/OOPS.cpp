#include<iostream>
#include<cstring>                   // For strlen and strcpy
#include "class.cpp"                //this is used to include another class from other file 
using namespace std;

/*
// User defined datatypes
class Hero {

    // properties


    //by default this is private and used only in local but after setting to public it can be accessed anywhere 
    public:                                  
    int name[100];
    int health = 10;
    char level = 'a';


};

int main(){
    Hero Vikhyat;
    Book code;
    cout<<"Size: "<<sizeof(Vikhyat)<<endl;
    cout<<"Size: "<<sizeof(code)<<endl;

    Vikhyat.health = 20;
    Vikhyat.level = 'A';

    cout<<"Health is: "<<Vikhyat.health<<endl;
    cout<<"Level is: "<<Vikhyat.level<<endl;
}
*/




/*
class Hero {

    // properties


    private:                                  
    int name[100];
    int health = 10;
    char level = 'a';

    // this is private so only asscesable inside it but to acces outside we use this.

    public:
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};


int main(){

    Hero Vikhyat;
    cout<<"Vikhyat Health is: "<< Vikhyat.getHealth()<<endl;
    cout<<"Vikhyat Level is: "<< Vikhyat.getLevel()<<endl;

    Vikhyat.setHealth(30);
    Vikhyat.setLevel('B');
    cout<<"Vikhyat Health is: "<< Vikhyat.getHealth()<<endl;
    cout<<"Vikhyat Level is: "<< Vikhyat.getLevel()<<endl;
}
*/



// Dynamic And Static memory allocation 

/*
class Hero {

    // properties

    public:                                  
    int name[100];
    int health = 10;
    char level = 'a';


};

int main(){
    // Static memory
    Hero a;
    a.health = 70;
    a.level = 'A';
    cout<<"Health is: "<<a.health<<endl;
    cout<<"Level is: "<<a.level<<endl;

    // Dynamic memory
    Hero *b  = new Hero;
    b->health = 20;
    b->level = 'C';
    cout<<"Health is: "<<(*b).health<<endl;
    cout<<"Level is: "<<(*b).level<<endl;
}
*/


// constructor with and without parameter

/*
class Hero {

    // properties

    public:                                  
    int name[100];
    int health = 10;
    char level = 'a';

    // without parameter Constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
    }

    // Parameterised Constructor
    Hero(int health){
        cout<<"Address of this -> "<<this<<endl;
        this -> health = health;
    }


};

int main(){

    // object created statically
    Hero Vikhyat(10);
    cout<<"Address of Vikhyat: "<<&Vikhyat<<endl;
    
}
*/


// Copy Constructor

 /*
class Hero {

    // properties

    public: 
    char *name;                                 
    int health;
    char level;

    Hero(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100];
    };

    // Copy Constructor
    Hero(Hero& temp){

        cout<<"Copy Constructor called: "<<endl;
        char * ch = new char[strlen(temp.name) +1];
        strcpy(ch,temp.name);
        this ->name = ch;
        this ->health = temp.health;
        this ->level = temp.level;

    }

    void print(){

        cout<<"{ Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: "<<this->level<<" }";
        cout<<endl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }


};

int main(){
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8] = "Vikhyat";
    hero1.setName(name);

    // hero1.print();

    // using default Copy Constructor
    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

}
 */




// Destructor calling for static and dynamic memory alloaction;

/*
class Hero{

    public:
    int health;
    char level;

    // destructor
    ~Hero(){
        cout<<"Destructor is called."<<endl;
    }
};

int main(){

    // Static allocation ---> In this destroctor is  called automatically.
    Hero a;

    // Dynamic allocation ---> In this we have to call the destructor maually.
    Hero *b = new Hero;
    delete b;                   //This is how its manually called.
}
*/




// Static data type.

class Hero{
    public:
    static int timeToComplete;

    static int random(){                            //static function take only static inputs.
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main(){
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
}