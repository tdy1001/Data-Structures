# 链栈的基本操作 
## 作者：TDeu
### 实现语言：C++
#### 头文件依赖：iostream
***
##### 变量描述
cnt：栈元素
next：下一个元素地址
value：元素的值

##### 函数描述
pop: 取出栈顶元素，返回下一个栈元素指针
push：元素入栈，返回该元素指针
clearStack：清空该栈
init：初始化栈
get&save：操作私有成员变量
stackEmpty：判断栈是否栈空
stackFull：判断是否栈满

##### 特殊描述
T：宏定义，样例为int
MAXSIZE：最大容纳元素数