#include <iosream>

/*
    在C++的基类中，析构函数为什么声明为虚函数？
    class Base{}
    class Derive :public Base{}
    Base* p = new Derive();

    派生类中的析构函数没有进行调用。如果在派生类中申请了资源，在释放的时候(假设派生类的资源在析构函数中回收)，可能会造成内存和资源的泄漏。
        这就是在基类中为什么析构函数一般为虚函数的原因。具体原因，当删除基类指针指向的派生类时，如果基类的析构函数不为虚函数的时候，不会触发动态绑定，所以不会调用派生类的析构函数。

    多态：
       是对于不同对象接收相同消息时产生不同的动作。
       C++的多态性具体体现在运行和编译两个方面：
            1、在程序运行时的多态性通过继承和虚函数来体现；
            2、在程序编译时多态性体现在函数和运算符的重载上；
            


*/


int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}