#include <stdio.h>
#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool primo(int n, int & op)
{
	int cant=0;
	op=0;
	for (int k=1;k<=n;k++)
	{
		op++;
		if (n%k==0)
		{
			cant++;
		}
	}
	return cant==2;
}

bool primo2(int n, int & op)
{
	int cant=0,mitad=n/2;
	op=0;
	for (int k=1;k<=mitad;k++)
	{
		op++;
		if (n%k==0)
		{
			cant++;
		}
	}
	return cant==1;
}

bool primo3(int n, int & op)
{
	if (n==1)
	{
		return false;
	}
	else
	{
		int mitad=n/2,k=2;
		bool pos=true;
		while (k<=mitad)
		{
			op++;
			if (n%k==0)
			{
				pos=false;
				k=mitad;
			}
			k++;
		}
		return pos;
	}
}

bool primo4(int n, int & op)
{
	if (n==1)
	{
		return false;
	}
	else
	{
		int raiz=sqrt(n),k=2;
		bool pos=true;
		while (k<=raiz)
		{
			op++;
			if (n%k==0)
			{
				pos=false;
				k=raiz;
			}
			k++;
		}
		return pos;
	}
}

int main(int argc, char** argv)
{
	int n,op;
	cin>>n;
	if (primo(n,op))
	{
		cout<<n<<" Es primo"<<endl;
	}
	else
	{
		cout<<n<<" No es primo"<<endl;
	}
	cout<<n<<" Realizo "<<op<<" modulos"<<endl;
	cout<<"------------"<<endl;
	op=0;
	
	if (primo2(n,op))
	{
		cout<<n<<" Es primo"<<endl;
	}
	else
	{
		cout<<n<<" No es primo"<<endl;
	}
	cout<<n<<" Realizo "<<op<<" modulos"<<endl;
	cout<<"------------"<<endl;
	op=0;
	
	if (primo3(n,op))
	{
		cout<<n<<" Es primo"<<endl;
	}
	else
	{
		cout<<n<<" No es primo"<<endl;
	}
	cout<<n<<" Realizo "<<op<<" modulos"<<endl;
	cout<<"------------"<<endl;
	op=0;
	
	if (primo4(n,op))
	{
		cout<<n<<" Es primo"<<endl;
	}
	else
	{
		cout<<n<<" No es primo"<<endl;
	}
	cout<<n<<" Realizo "<<op<<" modulos"<<endl;
	return 0;
}
