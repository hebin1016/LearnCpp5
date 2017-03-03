//
//  main.cpp
//  LearnCpp5
//
//  Created by hebin on 2017/3/2.
//  Copyright © 2017年 hebin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
//string初始化
int main(){
    
    string str1="12345";
    string str2("c++ string");
    string str3=str2;
    string str4(10,'2');

    
    cout<<str4<<endl;
    
    return 0;
}
 */

//string遍历

//int main(){
//    
//    string s1="my name is hank";
//    1.数组方式
//    for (int i=0; i<s1.length(); i++) {
//        cout<<s1[i]<<endl;
//    }
    
//    2.迭代器指针
//    for (string::iterator si=s1.begin(); si!=s1.end(); si++) {
//        cout<<*si;
//    }
//    cout<<endl;
    
//   3.at函数（charAt）
//   可能会抛出异常
//    try {
//        for (int i=0; i<s1.length(); i++) {
//            cout<<s1.at(i);
//        }
//        cout<<endl;
//    } catch (...) {
//        cout<<"异常"<<endl;
//    }
//
//    return 0;
//}


/*
//string字符串转c字符串
int main(){
    
    //string->char*
    string str="android developer";
    const char *c_str=str.c_str();
    cout<<c_str<<endl;
    
    //string->char[]
    //从string字符串复制到array中
    char array[50]={0};
    str.copy(array, 20,0);
    cout<<array<<endl;

    
    return 0;
}
*/

/*
//字符串拼接
int main(){
    string str1="awesome";
    string str2=" hank";
    cout<<str1+str2<<endl;
    cout<<str1.append(str2)<<endl;

    return 0;
}
 */

/*
//字符串查找
int main(){
    string str="android open source project";
    //从0开始查找open的索引
    int index=str.find("open",0);
    cout<<index<<endl;
    
    //统计某个字符串出现的次数
    int dex=str.find("source",0);
    
    int num=0;
    //npos大于任何有效下标的值,查找失败返回npos
    while (dex!=string::npos) {
        num++;
        cout<<"找到索引"<<dex<<endl;
        dex+=6;
        dex=str.find("source",dex);
    }
    return 0;
}
*/

/*
//字符串替换
int main(){
    string str="native development kit";
    //0-5替换成fuck
    str.replace(0, 5, "fuck");
    cout<<str<<endl;
    
    //所有的kit换成fuck
    int index=str.find("kit",0);
    while (index!=string::npos) {
        str.replace(index, 3, "fuck");
        index+=3;
        index=str.find("kit",0);
    }
    cout<<str<<endl;

    
    return 0;
}
 */

/*
//字符串删除和插入
int main(){
    string str="realtime message package";
    //找到e所在的指针
    string::iterator iterator=find(str.begin(), str.end(), 'e');
    //删除（只能删除一个字符）
    str.erase(iterator);
    
    str.insert(0, "the fuck ");
    str.insert(str.length(), " sb");
    
    cout<<str<<endl;
 
    return 0;
}
*/

/*
//大小写转换
int main(){
    
    string str="HANK";
    //原始字符串的起始地址，原始字符串的结束地址，目标字符串的起始地址，函数名称
    transform(str.begin(), str.end()-1,str.begin(),tolower);
   
    cout<<str<<endl;
    
    return 0;
}
 */

//容器
//Vector
#include <vector>
void printVector(vector<int> &v){
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }
    
}

/*
int main(){
    
    //1
    vector<int> v1;
    v1.push_back(20);
    v1.push_back(50);
    v1.push_back(80);
    
    //2
    vector<int> v2=v1;
    
    //3.部分复制
    vector<int> v3(v1.begin(),v1.begin()+3);
    
    printVector(v3);
    
    return 0;
}
*/

/*
//添加 删除
int main(){
    //添加到尾部
    vector<int> v1;
    v1.push_back(108);
    v1.push_back(252);
    v1.push_back(360);
    v1.push_back(762);
    
    //访问头部
    v1.front()=32;
    
    //访问尾部
    v1.back()=87;
    
    //删除结尾的元素
     //v1.pop_back();
    
    while (v1.size()>0) {
        cout<<"末尾的元素:"<<v1.back()<<endl;
        v1.pop_back();
    }
    
    printVector(v1);
    
    return 0;
}
*/

/*
//数组的方式
int main(){
    
    vector<int> v1;
    v1.push_back(34);
    v1.push_back(47);
    v1.push_back(36);
    v1.push_back(32);
    
    v1[2]=v1[2]+10;
    
    //容器等价于动态数组
    vector<int> v2(10);
    for (int i=0; i<v2.size(); i++) {
        v2[i]=i+10;
    }
    
    printVector(v1);
    
    
    return 0;
}
 */

/*
//迭代器遍历
//迭代器的种类（正向，反向迭代器）
int main(){
    vector<int> v1;
    v1.push_back(34);
    v1.push_back(47);
    v1.push_back(36);
    v1.push_back(32);
    
    //正向
    for (vector<int>::iterator it=v1.begin(); it<v1.end(); it++) {
        cout<<*it<<endl;
    }

    //反向迭代
    for (vector<int>::reverse_iterator rit=v1.rbegin(); rit<v1.rend(); rit++) {
        cout<<*rit<<endl;
    }
    return 0;
}
 */

/*
//删除插入
int main(){
    
    vector<int> v1(10);
    for (int i=0; i<v1.size(); i++) {
        v1[i]=i*10;
    }
    
    //删除指定位置
    vector<int>::iterator it=v1.begin();
    it+=3;
    v1.erase(it);
    
    //删除区间
    v1.erase(v1.begin(),v1.begin()+3);
    
    for (vector<int>::iterator it=v1.begin(); it<v1.end(); it++) {
        if(*it==90){
            printf("%p\n",it);
            vector<int>::iterator tmp=v1.erase(it);
            printf("%p,%p\n",it,tmp);
        }
    }
    
    //插入
    v1.insert(v1.begin()+2, 200);
    v1.insert(v1.end()-1, 100);
    
    printVector(v1);
    
    return 0;
}
*/

/*
//双向队列
#include <deque>
void printDeque(deque<int> &d){
    for (int i=0; i<d.size(); i++) {
        cout<<d[i]<<endl;
    }
}

int main(){
    deque<int> d;
    //添加到尾部
    d.push_back(2);
    d.push_back(20);
    //添加到头部
    d.push_front(-20);
    d.push_front(-34);
    
    //printDeque(d);
    //取头部
    //cout<<d.front()<<endl;
    //取尾部
    //cout<<d.back()<<endl;
    
    //两个方向弹出
    //弹出头部
    //d.pop_front();
    //弹出尾部
    //d.pop_back();
    
    //printDeque(d);
    
    //查找第一个-20元素的索引位置，无需遍历
    deque<int>::iterator it=find(d.begin(), d.end(), -20);
    if(it!=d.end()){
        int index=distance(d.begin(), it);
        cout<<"索引位置为:"<<index<<endl;
    }

    
    
    return 0;
}
*/

/*
//队列(没有迭代器）
#include <queue>
int main(){
    queue<int> q;
    q.push(123);
    q.push(23);
    q.push(33434);
    q.push(12);
    
//    cout<<q.front()<<endl;
//    cout<<q.back()<<endl;
    
    while (!q.empty()) {
        int tmp=q.front();
        cout<<tmp<<endl;
        q.pop();
    }
    
    
    return 0;
}
*/

/*
//优先级队列
#include <functional>
#include <queue>
int main(){
    
    //默认最大值优先级
    priority_queue<int> pq;
    pq.push(2232);
    pq.push(23);
    pq.push(444);
    
    while (!pq.empty()) {
        int tmp=pq.top();
        cout<<tmp<<endl;
        pq.pop();
    }
    
    cout<<"==============="<<endl;
    
    //最小值优先级队列
    
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(481);
    pq2.push(4843);
    pq2.push(4821);
    pq2.push(481);
    
    while (!pq2.empty()) {
        int tmp=pq2.top();
        cout<<tmp<<endl;
        pq2.pop();
    }

    
    return 0;
}
*/

/*
//栈
#include<stack>
#include <functional>
int main(){
    stack<int> s;
    for (int i=0; i<10; i++) {
        s.push(i+10);
    }
    
    while (!s.empty()) {
        int tmp=s.top();
        cout<<tmp<<endl;
        s.pop();
    }
    
    return 0;
}
*/

//list
#include <list>


void printList(list<int> &l){
    //迭代器
    //没有重载“<”运算符
    for (list<int>::iterator it=l.begin(); it!=l.end(); it++) {
        cout<<*it<<endl;
    }
}

/*
int main(){
    
    list<int> li;
    for (int i=0; i<10; i++) {
        //尾部插入元素
        li.push_back(i+10);
    }
    
    //头部插入元素
    li.push_front(0);
    li.push_back(100);
    
    list<int>::iterator it=li.begin();
    it++;
    //it+=3;注意：不支持随机访问
    cout<<*it<<endl;
    
    return 0;
}
*/

/*
//删除
int main(){
    list<int> l;
    for (int i=0; i<10; i++) {
        //尾部插入元素
        l.push_back(i+10);
    }

    list<int>::iterator it=l.begin();
    //it++;
    //删除第二个元素
    //l.erase(it);

    //删除区间
    list<int>::iterator it_end=l.end();
    it_end++;
    it_end++;
    it_end++;
    it_end++;
    l.erase(it,it_end);
    
    //根据内容删除元素
    l.remove(19);
    
    printList(l);
    
    return 0;
}
*/

/*
//list插入（应用：频繁的修改）
//vector (应用：随机访问[100])
int main(){
    
    list<int> lst;
    for (int i=0; i<10; i++) {
        //尾部插入元素
        lst.push_back(i+10);
    }
    
    list<int>::iterator it=lst.begin();
    it++;
    lst.insert(it, 100);
    
    printList(lst);

    
    return 0;
}
*/

//set 元素唯一默认从小到大
#include <set>

void printSet(set<int> &s){
    for (set<int>::iterator it=s.begin(); it!=s.end(); it++) {
        cout<<*it<<endl;
    }
}

/*
int main(){
    
    set<int> s;
    //添加元素
    for (int i=0; i<10; i++) {
        s.insert(1+i);
    }
    s.insert(2);
    s.insert(5);
    s.insert(50);
    
    //删除
    set<int>::iterator it=s.begin();
    s.erase(it);
    
    printSet(s);

    
    return 0;
}
*/

/*
//元素按照从大到小排列
int main(){
    
    set<int,greater<int>> s;
    s.insert(2);
    s.insert(5);
    s.insert(50);
    
    for (set<int,greater<int>>::iterator it=s.begin(); it!=s.end(); it++) {
        cout<<*it<<endl;
    }

    
    return 0;
}
*/

/*
//元素类型为Teacher对象，按照年龄排序
class Teacher{
public:
    Teacher(char* name,int age){
        this->name=name;
        this->age=age;
    }
    
    void print(){
        cout<<name<<","<<age<<endl;
    }
    
public:
    char *name;
    int age;
};

//自定义排序规则
//仿函数
struct MyAgeSorter{
    bool operator()(const Teacher &left,const Teacher &right){
        return left.age<right.age;
    }
};

int main(){
    set<Teacher,MyAgeSorter> s;
    s.insert(Teacher("hank", 26));
    s.insert(Teacher("hank1", 27));
    s.insert(Teacher("hank2", 23));
    
    for (set<Teacher,MyAgeSorter>::iterator it=s.begin(); it!=s.end(); it++) {
        cout<<(*it).name<<","<<(*it).age<<endl;
    }

}
*/

/*
//set查找
int main(){
    
    set<int> s;
    //添加元素
    for (int i=0; i<10; i++) {
        s.insert(1+i);
    }
   //等于4的元素指针
    set<int>::iterator it_4=s.lower_bound(4);
    //cout<<*it_4<<endl;
    
    //大于4的元素指针
    set<int>::iterator it_5=s.upper_bound(4);
    //cout<<*it_5<<endl;
    
    //一次性获取等于4的元素指针和大于4的元素指针
    pair<set<int>::iterator, set<int>::iterator> p=s.equal_range(4);
    cout<<*p.first<<endl;
    cout<<*p.second<<endl;

    
    return 0;
}
 */

/*
//multiset 允许重复的元素
int main(){
    multiset<int> s;
    s.insert(2);
    s.insert(8);
    s.insert(2);

    for (multiset<int>::iterator it=s.begin(); it!=s.end(); it++) {
        cout<<*it<<endl;
    }
    
    return 0;
}
 */

#include <map>

void printMap(map<int,string> &map1){
    for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++){
        cout<<it->first<<","<<it->second<<endl;
    }
}

/*
//map添加元素的方式
int main(){
    
    //key->value
    //1.
    map<int,string> map1;
    map1.insert(pair<int, string>(2,"android"));
    map1.insert(pair<int, string>(5,"java"));
    map1.insert(pair<int, string>(7,"c++"));

    //2
    map1.insert(make_pair(9, "python"));
    
    //3
    map1.insert(map<int,string>::value_type(11,"ffmpeg"));
    
    //4
    map1[5]="sty";
    
    //前三种方式，如果key已经存在，重复添加会报错
    //第四种方式，如果key已经存在，重复添加会覆盖
    
    //遍历输出
    printMap(map1);
    return 0;
}
*/

/*
//删除
int main(){
    map<int,string> map1;
    map1.insert(pair<int, string>(2,"android"));
    map1.insert(pair<int, string>(5,"java"));
    map1.insert(pair<int, string>(7,"c++"));
    
    map<int,string>::iterator it=map1.begin();
    it++;
    map1.erase(it);
    
    printMap(map1);

    
    return 0;
}
 */

/*
//添加的结果
int main(){
    map<int,string> map1;
    map1.insert(pair<int, string>(2,"android"));
    map1.insert(pair<int, string>(5,"java"));
    map1.insert(pair<int, string>(7,"c++"));
    
    //获取添加的结果（first元素指针，second是否成功）
    pair<map<int,string>::iterator,bool> res=map1.insert(pair<int, string>(2,"c++"));
    
    if(res.second){
        cout<<"添加成功"<<endl;
    }else{
        cout<<"添加失败"<<endl;
    }
    
    printMap(map1);
    
    return 0;
}
 */


/*
//查找
int main(){
    map<int,string> map1;
    map1.insert(pair<int, string>(2,"android"));
    map1.insert(pair<int, string>(5,"java"));
    map1.insert(pair<int, string>(7,"c++"));

    printMap(map1);
    
    cout<<"===================="<<endl;
    
    //获取key等于大于5的元素的值
    pair<map<int,string>::iterator, map<int,string>::iterator> p=map1.equal_range(2);
    if(p.first!=map1.end()){
        //等于2的元素key value
        cout<<p.first->first<<p.first->second<<endl;
        
        //大于2的元素key value
        cout<<p.second->first<<p.second->second<<endl;

    }
    return 0;
}
 */


//1个key对应多个value
//一个部门多个员工
//multimap
class Employee{
public:
    Employee(char* name,int age){
        this->name=name;
        this->age=age;
    }
    char* name;
    int age;
};

int main(){
    
    multimap<string,Employee> map1;
    
    //开发部
    map1.insert(make_pair("开发", Employee("sky",22)));
    map1.insert(make_pair("开发", Employee("eric",25)));

    //财务部
    map1.insert(make_pair("财务", Employee("zhangsan",27)));
    map1.insert(make_pair("财务", Employee("lisi",25)));
    
    //销售
    map1.insert(make_pair("销售", Employee("wangwu",22)));
    map1.insert(make_pair("销售", Employee("zhaoliu",25)));
    
    //遍历输出
    for (multimap<string,Employee>::iterator it=map1.begin(); it!=map1.end(); it++) {
        cout<<it->first<<","<<it->second.name<<","<<it->second.age<<endl;
    }
    
    cout<<"----------------------"<<endl;
    
    //只获取财务部的员工
    //获取财务部员工的个数，key对应value的个数
    int num=map1.count("财务");
    multimap<string,Employee>::iterator it=map1.find("财务");
    int c=0;//控制循环的次数
    while (it!=map1.end()&&c<num) {
        cout<<it->first<<","<<it->second.name<<","<<it->second.age<<endl;
        it++;
        c++;
    }
    return 0;
}

