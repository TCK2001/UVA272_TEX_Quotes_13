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
	while(getline(cin,in1)) //값 입력; 
	{
		int count=0;
		for(int i=0;i<in1.length();i++)
		{
			if(in1[i]=='"') //그냥 같으면 판단함수 들어가서 판단하기; 
			{
				count++; //홀수 는 밑에 모양; 
				if(count%2==1)
				{
					cout<<"``";
				}
				else if(count%2==0) //짝수 밑에 모양; 
				{
					cout<<"''";
				}
			}
			else
			{
				cout<<in1[i]; //둘다 아니면 원래 값 출력; 
			}
		}
		cout<<endl;
	}
return 0;
}

