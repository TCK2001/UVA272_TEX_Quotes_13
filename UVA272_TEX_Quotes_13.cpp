/*
Sample Input
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
Sample Output
``To be or not to be,'' quoth the Bard, ``that
is the question''.
The programming contestant replied: ``I must disagree.
To `C' or not to `C', that is The Question!''
*/
 
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string in1;
	while(getline(cin,in1)) //�� �Է�; 
	{
		int count=0;
		for(int i=0;i<in1.length();i++)
		{
			if(in1[i]=='"') //�׳� ������ �Ǵ��Լ� ���� �Ǵ��ϱ�; 
			{
				count++; //Ȧ�� �� �ؿ� ���; 
				if(count%2==1)
				{
					cout<<"``";
				}
				else if(count%2==0) //¦�� �ؿ� ���; 
				{
					cout<<"''";
				}
			}
			else
			{
				cout<<in1[i]; //�Ѵ� �ƴϸ� ���� �� ���; 
			}
		}
		cout<<endl;
	}
return 0;
}

