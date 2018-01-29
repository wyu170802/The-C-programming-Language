## 寒假
### C语言课程设计
最近有几个同学问下学期的C语言学习内容。其实到目前为止，大家C语言的课程算是学完了，下学期还剩下一个**C语言课程设计**，这算是一个大作业，要求用C语言实现一个较为完整的“系统”，这个课程设计并不难，而且如果肯花心思的话，会非常有趣，所以大家在寒假就可以开始撸了。

#### 循序渐进
考虑到大家现在写的程序大多在100行作用，大家可以先循序渐进地写这一个系统。
- 什么叫循序渐进呢？

先写一些大概一两百行的小程序，比如一个小游戏，或者一个简易的计算器，这些在网上都是可以找到源代码的，在`demo`文件夹下，也给大家提供了一个咱们班某个同学写的“井字棋”程序，大家也可以在它的基础上进行改进，加各种各样的功能，比如将井字棋写成五子棋，做一个井字棋AI，保存胜利记录，保存当前的游戏状态以方便下次打开，等等。

然后再构思一个更加庞大的系统，再实现它。

#### 课程设计实例
为了方便大家进一步学习，在`C语言课程设计`文件夹里面，有一个16届软工师兄师姐的课程设计代码和实验报告，大家可以好好阅读里面的代码，然后写出一个属于自己的完整的系统。

注意：由于代码使用了vs去写，所以想要快捷地运行代码，最好装一个vs2017。

##### 下载方法
1. 使用`git`命令下载（这个不详细说，自己百度）
2. 使用github官网自带的`Download ZIP`的方式
    1. 点击`Clone or download`
    2. 点击`Download ZIP`

![github下载zip](http://opptp2jx7.bkt.clouddn.com/github%E4%B8%8B%E8%BD%BDZIP.png)

##### 建议使用的IDE
- Visual Studio Community 2017

推荐理由：当初建议大家使用`devC++`是希望大家不被一些细枝末节的东西打扰，可以快速轻便的打代码，将注意力放在代码身上，如今，大家C语言基础已经学完了，是适合换更强大的编译器了。

## 题目
### 不懂怎么办？
1. 找课本，查知识点
2. 问问舍友
3. 问问3个助教（梁志坚、刘清菊、涂世林）
4. 百度

### 提交代码要求
1. 标明姓名
2. 放在所在周的文件夹，比如`week8`
### week12
经过前面几周的尝试发现，大家的作业可能已经足够多了，经过再三的考虑，可能没有再给大家出题的必要了，所以从这周开始将暂停这个项目，之后可能会更新一些比较好玩有趣的内容，如果大家有什么想法或者有什么好的建议欢迎提出来。
### week10
昨天是双11，不知道大家有没有剁手呢？看看花呗，是不是离梦想又更加遥远了呢？好了，言归正题，最近跟部分同学聊了一下，可能前面两周的内容难度稍微大了点，所以这周就不布置任何题目了，同时，发个视频讲一下如何进行代码调试，以及具体的代码调试方法。（第一次录，说话可能有点含糊不清，请大家见谅）

点击这里看视频：[C语言：代码调试的具体方法](https://www.bilibili.com/video/av16228416/)


总结一下，代码调试的方法有3种
1. 断点调试
2. 关键语句的输出
3. 测试程序

补充：

1. [DEV C++ "把着手教" 单步调试(debug)](http://blog.csdn.net/qq_32209643/article/details/50981181bilibili)

2. 测试程序一般是对某个模块进行测试，比如大家要学到的函数，以及以后做得更大的一些模块，以后大家就会知道，写测试程序也是一个很重要的工作，在很多公司，有很多人员就是负责软件测试，叫软件测试工程师。就目前而言，测试程序大家暂时用不上，知道一下就可以了。

### week9
1. 输入n，计算S＝1！＋2！＋3！＋…＋n！的末6位（不含前导0）。n≤`10^6`，n！表示前n个正整数之积。

样例输入：
```
10
```
样例输出：
```
37913
```

2. 近似计算，计算 π 的近似值，直到最后一项的绝对值小于`10^-6`为止。（提示：运用格里高利公式）

样例

```
pi = 3.141595
```
3. 使用冒泡排序算法，实现排序。（提示：[动画描述实现过程](https://visualgo.net/zh/sorting))

样例

```
Please input ten numbers:
1 4 5 2 34 346 23 45 22 18
1 2 4 5 18 22 23 34 45 346
```
---
### week8
1. 输入正整数n（n＜360），输出n度的正弦、余弦函数值。（提示：使用数学函数。）

样例
```bash
Input angle(0 to 360):30
sin30 = 0.500000
cos30 = 0.866025
```

2. 一件衣服95元，若消费满300元，可打八五折。输入购买衣服件数，输出需要支付的金额（单位：元），保留两位小数。（提示：使用格式控制符）

样例
```bash
Please the number of closes:11
cost: 888.25
```
3. 输入年份，判断是否为闰年。如果是，则输出yes，否则输出no。
（提示：简单地判断除以4的余数是不够的。）

样例
```bash
Please enter a year:2000
yes
```