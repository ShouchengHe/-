#include<iostream>
#include<string>
using namespace std;
#define MAX 1000 //�������������ɺ귽���Ժ��޸��������
//�˵�����
void showMenu() 
{
	cout << "-------------------------" << endl;
	cout << "***** 1���½���ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "-------------------------" << endl;
}

struct Person
{
	string m_Name;
	int m_Sex;//1 male 2 female
	int m_Age;
	int m_Phone;
	string m_Address;
};
//ͨѶ¼�ṹ��
struct AddressBooks
{
	Person PersonArray[MAX];
	int m_SizeOfPerson;
};

//�����ϵ�˵ĺ�����˼·�������ϵ������û�����ޣ�������ϵ��
void AddPerson(AddressBooks *abs)
{
	if (abs->m_SizeOfPerson == MAX)
	{
		cout << "ͨѶ¼�����Ѵﵽ���ޣ��޷���ӣ�" << endl;
		return;
	}
	else
	{
		string name;
		cout << "��������ϵ��������"
	}
}
//��ʾ��ϵ�˵ĺ���
void ShowPerson()
{

}
//������ϵ�˵ĺ���
void ChangePerson()
{

}
//ɾ����ϵ�˵ĺ���
void DeletePerson()
{

}
//�����ϵ�˵ĺ���
void ClearPerson()
{

}
//������ϵ�˵ĺ���
void FindPerson()
{

}

int main() 
{
	AddressBooks abs;
	abs.m_SizeOfPerson = 0;


	int select = 0;
	//�û�����ѡ��
	while (true) 
	{
		//��ʾ�˵�
		showMenu();
		cin >> select;
		switch (select)
		{
			
		case 1://1���½���ϵ��
			break;
		case 2://2����ʾ��ϵ��
			break;
		case 3://3��ɾ����ϵ��
			break;
		case 4://4��������ϵ��
			break;
		case 5://5���޸���ϵ��
			break;
		case 6://6�������ϵ��
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
}