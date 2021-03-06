## cpp-笔记 - 高级特性
- **概述：**
>
>

- **__attribute__属性：**
>       __atrribute__ 是一个编译器指令，它指定声明的特征，允许更多的错误检查和高级优化
>           关键字__attribute__后跟两组括号（双括号使“宏输出”变得容易，尤其是多个属性）
>           括号内是逗号分隔的属性列表。__attribute__指令放在函数，变量和类型声明之后
>       例子：
>           GUARDED_BY(mutex_) THREAD_ANNOTATION_ATTRIBUTE__(guarded_by(mutex_)) __attribute__((guarded_by(mutex_))
>           guarded_by属性是为了保证线程安全，使用该属性后，线程要使用相应变量，必须先锁定mutex_，使得变量是原子操作
>
>

- **Volatile：**
>       第一个特性：
>           易变性。所谓的易变性，在汇编层面反映出来，就是两条语句，下一条语句不会直接使用上一条语句对应的volatile变量的寄存器内容，而是重新从内存中读取。
>           volatile的这个特性，相信也是大部分朋友所了解的特性
>       第二个特性：
>           “不可优化”特性。volatile告诉编译器，不要对我这个变量进行各种激进的优化，甚至将变量直接消除，保证程序员写在代码中的指令，一定会被执行。
>       第三个特性：
>           ”顺序性”，能够保证Volatile变量间的顺序性，编译器不会进行乱序优化
>

- **happens-before语义：**
>       happens-before语义，就是保证Thread1代码块中的所有代码，一定在Thread2代码块的第一条代码之前完成。
>           构建这样的语义有很多方法，我们常用的Mutex、Spinlock、RWLock，都能保证这个语义
>       C/C++ Volatile关键词不能保证这个语义，也就意味着C/C++ Volatile关键词，在多线程环境下，如果使用的不够细心，就会产生如同我这里提到的错误。
>       Happen-before 指的是程序指令间的一种关系，且是一种运行时的关系，是动态的
>
>
>
>

- **待续：**
>       参考：
>
>
>
>
>
>
>
>
>
>
>
>
>
>
