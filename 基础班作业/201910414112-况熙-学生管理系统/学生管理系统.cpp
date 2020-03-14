#include<iostream>
#include<string>
#include<cstring>

using namespace std;
typedef struct
{
	string name;
	string id;
	int age=0;
	string sex;
	string address;
	
}Student;
int main() {

	Student info[100];
	Student* p = info;
	static int i = -1;
	for (;;)
	{
		system("cls");
		cout << "***************************" << endl;
		cout << "*****  1、添加联系人  *****" << endl;
		cout << "*****  2、查找联系人 *****" << endl;
		cout << "*****  3、删除联系人  *****" << endl;
		cout << "*****  4、显示联系人  *****" << endl;
		cout << "*****  5、修改联系人  *****" << endl;
		cout << "*****  6、清空联系人  *****" << endl;
		cout << "*****  0、退出通讯录  *****" << endl;
		cout << "***************************" << endl;
		cout << "请输入功能:";
		int key;
		cin >> key;
		switch (key)
		{
		case 1:
			system("cls");
			i++;
			cout << "请输入姓名:";
			cin >> info[i].name;
			cout << "请输入性别:";
			cin >> info[i].sex;
			cout << "请输入学号:";
			cin >> info[i].id;;
			cout << "请输入年龄:";
			cin >> info[i].age;
			cout << "请输入家庭地址:";
			cin >> info[i].address;
			cout << "学生信息录入完毕！" << endl;
			system("pause");
			break;
		case 2:
		{
			system("cls");
			cout << "请输入你想要查找的学生的姓名:";
			string aim;
			cin >> aim;
			int j;
			for (j = 0; j < 100; j++)
			{

				if (aim == info[j].name)
				{
					cout << "性别:";
					cout << info[j].sex << endl;
					cout << "学号:";
					cout << info[j].id << endl;
					cout << "年龄:";
					cout << info[j].age << endl;
					cout << "家庭住址:";
					cout << info[j].address << endl;
					system("pause");
					break;
				}

			}
			if (j++ == 100)
			{
				cout << "无该学生信息!" << endl;
				system("pause");
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "请输入要删除的学生信息姓名:";
			string aim;
			cin >> aim;
			int j;
			for (j = 0; j < 100; j++)
			{
				if (aim == info[j].name)
				{
					info[j].name = " ";
					info[j].address = " ";
					info[j].age = 0;
					info[j].sex = " ";
					info[j].id = " ";
					cout << "信息已删除！" << endl;
					system("pause");
					break;
				}
			}
			if (j++ == 100)
			{
				cout << "无该学生信息！" << endl;
				system("pause");
			}
			break;
		}
		case 4:
		{	system("cls");

		for (int i = 0; i < 100; i++)
		{
			if (info[i].age == 0)
			{
				system("pause");
				break;
			}
			else
			{
				cout << "姓名:";
				cout << info[i].name << endl;
				cout << "性别:";
				cout << info[i].sex << endl;
				cout << "学号:";
				cout << info[i].id << endl;
				cout << "年龄:";
				cout << info[i].age << endl;
				cout << "家庭住址:";
				cout << info[i].address << endl;
				cout << endl;

			}
		}
		break;
		}
		case 5:
		{
			system("cls");
			cout << "请输入你想要修改的学生的姓名:";
			string aim;
			cin >> aim;
			int j;
			for (j = 0; j < 100; j++)
			{

				if (aim == info[j].name)
				{
					for (;;)
					{
						system("cls");
						string Cname, ID, SEX, Addre;
						int Age;
						cout << endl;
						cout << "***************************" << endl;
						cout << "*****  1、修改姓名 *****" << endl;
						cout << "*****  2、修改学号 *****" << endl;
						cout << "*****  3、修改年龄  *****" << endl;
						cout << "*****  4、修改性别  *****" << endl;
						cout << "*****  5、修改地址  *****" << endl;
						cout << "*****  0、返回上层 *****" << endl;
						cout << "***************************" << endl;
						cout << "请选择修改内容:";
						int key1;
						cin >> key1;
						switch (key1)
						{
						case 1:
						{cout << "请修改姓名:";
						cin >> Cname;
						info[j].name = Cname;
						cout << "修改成功！";
						break;
						}
						case 2:
						{	cout << "请修改学号:";
						cin >> ID;
						info[j].id = ID;
						cout << "修改成功！";
						break;
						}
						case 3:
						{	cout << "请修改年龄:";
						cin >> Age;
						info[j].age = Age;
						cout << "修改成功！";
						break;
						}
						case 4:
						{	cout << "请修改性别:";
						cin >> SEX;
						info[j].sex = SEX;
						cout << "修改成功！";
						break;
						}
						case 5:
						{	cout << "请修改家庭地址:";
						cin >> Addre;
						info[j].address = Addre;
						cout << "修改成功！";
						break;
						}
						default:
							break;
						}

						if (key1 == 0)
							break;

					}
				}
			
			if (j++ == 100)
			{
				cout << "无该学生信息!";
				system("pause");
			}
			break;
			}
			


		}
		case 6:
			for (int j = 0; j < 100; j++)
			{
				info[j].address = " ";
				info[j].age = 0;
				info[j].id = " ";
				info[j].name = " ";
				info[j].sex = " ";
			}
			i = -1;
			cout << "清空完成！" << endl;
			system("pause");
			break;
		default:
			break;
			
		}
		if (key == 0)
				break;
	}
	cout << "欢迎下次使用！" << endl;
	return 0;
	/*250行是在逗我吗？？？*/
}