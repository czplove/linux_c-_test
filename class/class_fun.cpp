#include "class_dec.cpp"

/*
定义成员函数的一般形式是：

返回值类型 类名::成员函数名 (参数表){
    //函数体
    //其中“::”是作用域运算符
}
*/
void Array_max::set_value(){//::是成员限定符，限定函数属于哪一个类
    int i;  
    cout<<"请输入10个整数"<<endl;  
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
