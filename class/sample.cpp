/*
#include<iostream>
using namespace std;

class Array_max{
    private://����������ⲿ���ɷ��ʵ���˽��Ա   
        int array[10];
        int max;
    public://����������ⲿ���Է��ʵĿ��ŵĳ�Ա����   
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
    array1.set_value();//��ʼ������  
    array1.max_value();//��������Ĳ���  
    array1.show_value();//���������   
    return 0;  
}
*/

#include<iostream>
using namespace std;

class Array_max{
    private://����������ⲿ���ɷ��ʵ���˽��Ա   
        int array[10];  
        int max;  
    public://����������ⲿ���Է��ʵĿ��ŵĳ�Ա����   
    void set_value();//����������ԭ��  
    void max_value();  
    void show_value();  
};
void Array_max::set_value(){//::�ǳ�Ա�޶������޶�����������һ����  
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
    array1.set_value();//��ʼ������  
    array1.max_value();//��������Ĳ���  
    array1.show_value();//���������   
    return 0;  
}
