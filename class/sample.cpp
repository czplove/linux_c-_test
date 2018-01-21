/*
#include<iostream>
using namespace std;

class Array_max{
    private://声明在类的外部不可访问的隐私成员   
        int array[10];
        int max;
    public://声明在类的外部可以访问的开放的成员函数   
    void set_value(){
        int i;
        cout<<"please input 10 int date"<<endl;
        for(i=0;i<10;i++){
            cin>>array[i];
        }
    };
    void max_value(){
        int i;
        max=array[0];
        for(i=1;i<10;i++){
            if(array[i]>max)
                max=array[i];
        }
    };
    void show_value(){
        cout<<"max is :"<<max<<endl;
    };
};

int main(){
    Array_max array1;  
    array1.set_value();//初始化操作  
    array1.max_value();//求最大数的操作  
    array1.show_value();//输出最大的数   
    return 0;  
}
*/

#include<iostream>
using namespace std;

class Array_max{
    private://声明在类的外部不可访问的隐私成员   
        int array[10];  
        int max;  
    public://声明在类的外部可以访问的开放的成员函数   
    void set_value();//声明函数的原型  
    void max_value();  
    void show_value();  
};
void Array_max::set_value(){//::是成员限定符，限定函数属于哪一个类  
    int i;  
    cout<<"please input 10 int date"<<endl;  
    for(i=0;i<10;i++){  
        cin>>array[i];          
    }  
}
void Array_max::max_value(){
    int i;  
        max=array[0];  
        for(i=1;i<10;i++){  
            if(array[i]>max)  
                max=array[i];  
        }     
}
void Array_max::show_value(){
    cout<<"max is :"<<max<<endl;    
}

int main(){
    Array_max array1;  
    array1.set_value();//初始化操作  
    array1.max_value();//求最大数的操作  
    array1.show_value();//输出最大的数   
    return 0;  
}
