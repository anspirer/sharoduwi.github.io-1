#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	cout << "������� ������ �����  "<< endl;
	cin>>size;
	cout << "������� ����  "<< endl;
	int *key = new int [size];
	int *_key = new int [size];
	for (int k=0;k<size;k++)
	{
		cin>>key[k];
		_key[key[k]]= k;
						   
	}					  
	int m=size; //����� ��������
	string ptr;
	cout<<"������� ����� , ������� �� ������ �����������/�����������\n";
	cin>>ptr;
	while (ptr.length()%size!=0)
	{
	  ptr+='_';
	}
	int n = ptr.length()/size;
	cout<<"E or D"<<endl;
	char eod;
	cin>>eod;
	ofstream fout_e;
	fout_e.open("en.txt");
	ofstream fout_d;
	fout_d.open("de.txt");
	while(1)
	{
		switch (toupper(eod))
		{
		case 'E':
			cout <<"�������� ���"<<endl;
	for (int i=0;i<n;i++) //i ������ ������
	{
	for (int j=0;j<m;j++) //j ������ ������� 
	cout<<ptr[j*n+i]<<' ';
	cout<<endl;
	}
	cout <<"������������� ���" <<endl;
	for (int i=0;i<n;i++) 
	{
	for (int j=0;j<m;j++) // 
	cout<<ptr[key[j]*n+i]<<' ';
	cout<<endl;
	}
	cout <<endl;
	
	for (int i=0;i<n;i++)
	{
	
	for (int j=0;j<m;j++)
	{
	
	cout<<ptr[key[j]*n+i];
	fout_e<<ptr[key[j]*n+i];

	}
	}
	        
			break;
		case 'D':
			for (int j=0;j<m;j++) 
	{
	
	for (int i=0;i<n;i++)
	{
		cout<<ptr[_key[j]+i*m];
		fout_d<<ptr[_key[j]+i*m];
		
	}
	
			
		}
     
		break;
		default:
        
			break;
	}
   
	break;
	

	
	

	}
}

