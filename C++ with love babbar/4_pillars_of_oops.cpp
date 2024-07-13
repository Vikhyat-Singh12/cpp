#include<iostream>
using namespace std;

/*
class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this-> age;
        }
};


int main(){
    Student first;
    cout<<"Sab sahi chll raha hai"<<endl;
}
*/




// Inheritance --------->  1st Pillar.

/*
                        ********** Mode of Inheritance **********


        Base class member             Public                  Protected                  Private

        Public                        Public                  Protected                  Private
        Protected                     Protected               protected                  Private
        Private                       Not Accesiable          Not Accessiable            Not Accessible


*/


/*
class Human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }
        int setWeight(int w){
           this-> weight = w;
        }
        
};

class Male:public Human{
    public:
        string colour;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};


int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.colour<<endl;

    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();

}
*/


// Single Inheritance

/*
class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog:public Animal{


};

int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

}
*/


// Multiple-level Inheritance
/*
class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog:public Animal{

};

class GermanShefard:public Dog{

};

int main(){
    GermanShefard d;
    d.speak();
    cout<<d.age<<endl;

}
*/



// Multiple Inheritance

/*
class Animal{
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout<<"Barking"<<endl;
        }
};

class Human{
    public:
    string color;

    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

// Now making multiple Inheritance

class Hybrid: public Animal,public Human{

};

int main(){
    Hybrid obj;
    obj.bark();
    obj.speak();
    cout<<obj.age<<endl;

}
*/



// Hierarchical Inheritance

/*
class A{
    public:
        void func1(){
            cout<<"Inside Function 1"<<endl;
        }
};

class B: public A{
    public:
        void func2(){
            cout<<"Inside Function 2"<<endl;
        }
};

class C: public A{
    public:
        void func3(){
            cout<<"Inside Function 3"<<endl;
        }
};

int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.func2();

    C object3;
    object3.func1();
    object3.func3();
}
*/



// Inheritance Ambiguity

/*
class A{
    public:
        void func(){
            cout<<"I am A"<<endl;
        }
};

class B{
    public:
        void func(){
            cout<<"I am B"<<endl;
        }
};

class C: public A,public B{

};

int main(){
    C obj;
    obj.A::func();                                  // Call func() from class A
    obj.B::func();                                  // Call func() from class B
    return 0;
}

*/




// Polymorphism

/*
class A{
    public:
        void sayHello(){
            cout<<"Love Vikhyat"<<endl;
        }
        void sayHello(string name){
            cout<<"Hello Vikhyat"<<name<<endl;
        }
        void sayHello(char name){
            cout<<"Hello"<<endl;
        }
};

int main(){
    A obj;
    
    obj.sayHello();

}
*/

/*
class B{
    public:

        int a;
        int b;

        void operator+ (B &obj){
            int value1  = this -> a;
            int value2 = obj.a;
            cout<<"Output "<<value2 - value1<<endl;
        }

        void operator() (){
            cout<<"Mai Bracket hu "<<this->a<<endl;
        }
};

int main(){
    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; 
    obj2();
    
}
*/




/*
class Animal{
    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Barking"<<endl;
        }
};

int main(){
    Dog d;
    d.speak();
}
*/






// Abstraction

class Student{
    public:
        int age;
        string first_name;
        string last_name;
        int standard;
    
    // public:
    //     int getAge(){
    //         return this->age;
    //     } 
    //     string getFirst(){
    //         return this->first_name;
    //     } 
    //     string getLast(){
    //         return this->last_name;
    //     } 
    //     int getStandard(){
    //         return this->standard;
    //     } 
        
    //     int setAge(int age){
    //         this->age = age;
    //     } 
    //     string setFirst(string first){
    //         this->first_name = first ;
    //     } 
    //     string setLast(string last){
    //         this->last_name = last;
    //     } 
    //     int setStandard(int standard){
    //         this->standard = standard;
    //     }
};

int main(){

    Student S;
    int age , standard;
    string first,last;

    cin>>age>>first>>last>>standard;

    // S.setAge(age);
    // S.setFirst(first);
    // S.setLast(last);
    // S.setStandard(standard);

    

    S.age  = age;
    S.first_name = first;
    S.last_name = last;
    S.standard = standard;

    cout<<S.age<<endl;
    cout<<S.last_name<<", "<<S.first_name<<endl;
    cout<<S.standard<<endl<<endl;

    cout<<S.age<<","<<S.first_name<<","<<S.last_name<<","<<S.standard<<endl;

}