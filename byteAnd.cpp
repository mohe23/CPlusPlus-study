// 位与（&） 位或（|）  位非（~） 异或（^） 左移(<<)
// 把1个整数的最低4位（二进制表示）设置为“0110”
// 三目运算符
#include<iostream>

using namespace std;


int main(){
    int x;
    cout<<"请输入1个整数x：";
    cin>>x;
//当x>50：输出“hello!”，否则，输出“luck”
    cout<<(x>50?"hello!":"luck");

    /*
// 逗号","的优先级最低
    x = 3+5,3*5,12/2;

    //x = 5++;//对1个常量做自增或自减，是错误的。
    cout<<"x = "<<x<<endl;//x=8

    x = (3+5,3*5,12/2);
    cout<<"x = "<<x<<endl<<endl;//x=6

    cout<<"请输入1个整数x（65）：";
    cin>>x;//输入65

    // 将整数x的最低4位“清0”
    x = x &(~15);// ~15 (1111 0000) 1&其他 = 其他    0&其他 = 0
    // 将整数的最低4位设置为“0110”
    x = x | 6;//(0110)  ，0 | 其他 = 其他
//  65 (100 0001)    70(100 0110)
    cout<<"65的二进制最低4位设置为0110： "<<x<<endl<<endl;

    // 位与（&）运算，2个二进制位全是1，位与结果=1
    cout<<"(位与运算) 8 & 3 = "<<(8&3)<<endl;// 00001000 & 00000011 = 00000000（十进制0）

    // 位或（|）运算，2个二进制位，1个为1，位或结果=1
    cout<<"(位或运算) 8 | 3 = "<<(8|3)<<endl;// 00001000 | 00000011 = 00001011(十进制11)

    // 位非（~）运算，单目运算符，取反
    unsigned char ch = ~8;// 00001000 => 11110111(十进制247)
    cout<<"(位非运算) ~8 = "<<(int)ch<<endl;//(int)ch - 强制类型转换

    // 异或（^）运算，进行运算的2个二进制位不同，异或结果=1
    cout<<"(异或运算) 8 ^ 3 = "<<(8^3)<<endl;// 00001000 ^ 00000011 = 00001011(十进制11)

    // 左移运算（<<），0000 1000（十进制8）左移1位，低位空出来的自动补0，高位移除的，丢弃。=> 0001 0000(十进制16)
    // 只适用于 int char long short 定点类型
    // 左移n位，相当于* 2^n   增加后的数据不会溢出，才会计算出正确结果。
    cout<<"(8左移2位) 8<<2 = "<<(8<<2)<<endl;// 等价于 8*4 = 32,

    // 右移运算（>>）：右移n位，相当于 操作数 / (2^n)
    // 正数右移时，高位空出来位，补“0”；负数右移时，高位空出来的位，补“1”。
    // 只适用于 int char long short 定点类型
    cout<<"(8右移2位) 8>>2 = "<<(8>>2)<<endl;// 等价于 8/4 = 2, (0000 1000) => (0000 0010)
    cout<<"(-8右移2位) -8>>2 = "<<(-8>>2)<<endl;// 等价于 -8/4 = -2, (1111 1100) => (1111 1100) 前面二进制数是负数补码形式存储的
    */

return 0;
}
