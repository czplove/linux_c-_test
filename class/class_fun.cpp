#include "class_dec.cpp"

/*
�����Ա������һ����ʽ�ǣ�

����ֵ���� ����::��Ա������ (������){
    //������
    //���С�::���������������
}
*/
void Array_max::set_value(){//::�ǳ�Ա�޶������޶�����������һ����
    int i;  
    cout<<"������10������"<<endl;  
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
