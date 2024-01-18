#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
//class Time
//{
//public:
//	void set_time();
//	void show_time();
//private:
//	int hour;
//	int min;
//	int sec;
//};
//int main()
//{
//	Time t1, t2;
//	t1.set_time();
//	t1.show_time();
//	t2.set_time();
//	t2.show_time();
//	return 0;
//}
//void Time::set_time()
//{
//	cin >> hour >> min >> sec;
//}
//void Time::show_time()
//{
//	cout << hour << ":" << min<<":" << sec;
//}
//class arr
//{
//public:
//	void set_date();
//	void max_date();
//	void show_date();
//private:
//	int max;
//	int arr[10];
//};
//void arr::set_date()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//}
//void arr::max_date()
//{
//	int i;
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i]; 
//	}
//}
//void arr::show_date()
//{
//	cout << "max=" << max;
//}
//int main()
//{
//	arr a1;
//	a1.set_date();
//	a1.max_date();
//	a1.show_date();
//	return 0;
//	
//}
//class cubiod
//{
//public :
//	void set_value();
//	void com_volume();
//	void show_volume();
//private:
//	int lenth;
//	int width;
//	int height;
//	int volume;
//};
//void cubiod::set_value()
//{
//	cin >> lenth >> width >> height;
//}
//void cubiod::com_volume()
//{
//	volume = lenth * width * height;
//}
//void cubiod::show_volume()
//{
//	cout << "长方体的体积是：" << volume << endl;
//}
//int main()
//{
//	cubiod c1;
//	c1.set_value();
//	c1.com_volume();
//	c1.show_volume();
//	return 0;
//}
//class Box
//{
//public:
//	Box(int, int, int);
//	int volume();
//private:
//	int lenth;
//	int width;
//	int heigth;
//};
//Box::Box(int h, int w, int l)
//{
//	lenth = l;
//	heigth = h;
//	width = w;
//}
//int Box:: volume()
//{
//	return lenth * width * heigth;
//}
//int main()
//{
//	Box b1={ 1,2,3 };
//	cout << "第一个盒子的体积是："<<b1.volume() << endl;
//	Box b2 = { 2,2,4 };
//	cout<< "第二个盒子的体积是：" <<b2.volume()<< endl;
//	return 0;
//}
//class Box
//{
//public:
//	Box();
//	Box(int h, int w, int l) : height(h), width(w), length(l){}
//	int volume();
//private:
//	int height;
//	int width;
//	int length;
//};
//Box::Box()
//{
//	height = 10;
//	width = 10;
//	length = 10;
//}
//int Box::volume()
//{
//	return length * height * width;
//}
//int main()
//{
//	Box b1;
//	Box b2(15, 30, 25);
//	cout << b1.volume() << " " << b2.volume() << endl;
//	return 0;
//}  






//class Box
//	{
//	public:
//		Box(int h=10,int w=10,int l=10);
//		int volume();
//	private:
//		int height;
//		int width;
//		int length;
//	};
//
//Box::Box(int h,int w,int l):length(l),width(w),height(h){}
//int Box::volume()
//{
//	return length * height * width;
//}
//
//int main()
//{
//	Box b1, b2(20), b3(20,20), b4(20,20,20);
//	cout << b1.volume() << " " << b2.volume() << " " << b3.volume() << " " << b4.volume() << endl;
//	return 0;
//}




//class stu
//{
//public:
//	stu();
//	~stu();
//	void display();
//	void setdate();
//private:
//	string name;
//	string sex;
//	int age;
//};
//stu::stu()
//{
//	name = "张三";
//	sex = "男";
//	age = 18;
//}
//stu::~stu()
//{
//	cout << "over" << endl;
//}
//void stu::display()
//{
//	cout << "姓名：" << name << endl << "性别：" << sex << endl << "年龄：" << age << endl;
//}
//void stu::setdate()
//{
//	cin >> name >> sex >> age;
//}
//int main()
//{
//	stu s1, s2;
//	s2.setdate();
//	s1.display();
//	
//	s2.display();
//
//	return 0;
//}






class Box
{
public:
	Box(int h = 10, int w = 10, int l = 10) :lenth(l), height(h), width(w) {};
	int volume();
private:
	int lenth;
	int height;
	int width;
};
int Box::volume()
{
	return height * width * lenth;
}
int main()
{
	Box b[3] = {
		Box(10,20,30),
	Box(20,30,40),
	Box(30,40,50),
	};
	for (int i= 0; i < 3; i++)
	{
		cout << b[i].volume() << endl;
	}
	return 0;
}