#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"#######################################"<<endl;
    cout<<"      Welcome to Geometry App!!! "<<endl;
    cout<<"#######################################"<<endl;
    cout<<endl<<"Please enter a choice from below: "<<endl;
    cout<<"What Are The Dimensions Of Your Shape?"<<endl;
    cout<<"1. 2-D"<<endl;
    cout<<"2. 3-D"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Please enter choice: ";
    cin>>n;
    if(n==1){
            char n1;
        cout<<"You picked 2-D shapes."<<endl;
        cout<<"What shape would you pick?"<<endl;
        cout<<"a)Circle"<<endl;
        cout<<"b)Square"<<endl;
        cout<<"c)Rectangle"<<endl;
        cout<<"d)Trapezium"<<endl;
        cout<<"e)Parallelogram"<<endl;
        cout<<"f)Rhombus"<<endl;
        cout<<"g)Triangle"<<endl;
        cout<<endl<<"Please enter choice: ";
        cin>>n1;
        if(n1=='a'){
                float radius;
            cout<<"Please enter the radius of your circle: ";
            cin>>radius;
            cout<<"Perimeter: :"<<2*3.1416*radius<<endl;
            cout<<"Area: "<<3.1416*radius*radius;
        }
        else if(n1=='b'){
                float length;
            cout<<"Please enter the length of a side of the square: ";
            cin>>length;
            cout<<"Area: "<<length*length;
        }
        else if(n1=='c'){
            float wide,height;
            cout<<"Please enter wide: ";
            cin>>wide;
            cout<<"Please enter height: ";
            cin>>height;
            cout<<"Area: "<<wide*height;
        }
        else if(n1=='d'){
            float h,b1,b2;
            cout<<"Enter base1: ";
            cin>>b1;
            cout<<"Enter base2: ";
            cin>>b2;
            cout<<"Enter height: ";
            cin>>h;
            cout<<"Area: "<<(b1+b2)/2*h;
        }
        else if(n1=='e'){
            float b,h;
            cout<<"Enter base: ";
            cin>>b;
            cout<<"Enter height: ";
            cin>>h;
            cout<<"Area: "<<b*h;
        }
        else if(n1=='f'){
            float len1,len2;
            cout<<"Enter length1: ";
            cin>>len1;
            cout<<"Enter length2: ";
            cin>>len2;
            cout<<"Area: "<<(len1*len2)/2;
        }
        else if(n1=='g'){
            float b,h;
            cout<<"Enter base: ";
            cin>>b;
            cout<<"Enter height: ";
            cin>>h;
            cout<<"Area: "<<0.5*b*h;
        }
        else{
            cout<<"Wrong entered!!!";
        }
    }
    else if(n==2){
            char n2;
        cout<<"You picked 3-D shapes";
        cout<<"What shape would you pick?"<<endl;
        cout<<"a)Sphere"<<endl;
        cout<<"b)Cube"<<endl;
        cout<<"c)Cuboid"<<endl;
        cout<<"d)Cylinder"<<endl;
        cout<<"e)Pyramid"<<endl;
        cout<<"Enter choice: ";
        cin>>n2;
        if(n2=='a'){
            float rad;
            cout<<"Enter radius: ";
            cin>>rad;
            cout<<"Volume: "<<(4*3.1416*rad*rad*rad)/3;
        }
        else if(n2=='b'){
            float len;
            cout<<"Enter length: ";
            cin>>len;
            cout<<"Volume: "<<len*len*len;
        }
        else if(n2=='c'){
            float l,b,h;
            cout<<"Enter length: ";
            cin>>l;
            cout<<"Enter breadth: ";
            cin>>b;
            cout<<"Enter height: ";
            cin>>h;
            cout<<"Volume: "<<l*b*h;
        }
        else if(n2=='d'){
            float r,h;
            cout<<"Enter radius: ";
            cin>>r;
            cout<<"Enter height: ";
            cin>>h;
            cout<<"Volume: "<<3.1416*r*r*h;
        }
        else if(n2=='e'){
            float l,w,h;
            cout<<"Enter base length: ";
            cin>>l;
            cout<<"Enter base width: ";
            cin>>w;
            cout<<"Enter Pyramid height: ";
            cin>>h;
            cout<<"Volume: "<<(l*w*h)/3;
        }
        else{
            cout<<"Wrong entered!!!";
        }
    }
    else if(n==3){
        cout<<"Exited!!!";
    }
    else{
        cout<<"Wrong entered!!!";
    }
}

