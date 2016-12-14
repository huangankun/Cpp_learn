/*
2017网易有道内推笔试题(C++)

请将下列构造函数补充完整，使得程序的运行结果是5
*/
#include<iostream>
using namespace std;
class Sample{
    public:
        Sample(int x){
            ________
        }
        ~Sample(){
            if(p) delete p;
        }
        int show(){
            return *p;
        }
    private:
        int*p;
};
int main(){
    Sample S(5);
    cout<<S.show()<<endl;
    return 0;
}

/*
A.  *p=x;
B.  p=new int(x);
C.  *p=new int(x);
D.  p=&x;



A.指针p是空指针，在调用构造函数Sample时，中断，提示0xCCCCCC。

B.是正确的，诀窍，看到delete就想到有new，他们最好成对出现。

C.编译不过，这个表达式，左边的类型是int * ，右边的是int，所以编译不过

D.编译通过，但结果不对，结果是使用过的栈地址，而且不被释放，导致程序终止异常
*/