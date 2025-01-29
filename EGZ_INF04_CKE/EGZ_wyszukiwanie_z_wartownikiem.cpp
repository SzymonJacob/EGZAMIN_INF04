#include<bits/stdc++.h>
using namespace std;
/*
**************************************************
<losuj>
<t liczby w tablicy>
<brak>
<t to skrot od tablica>
<Szymon 08251607039>
**************************************************
*/
void losuj(int t[])
{

	srand(time(NULL));
	for(int i=1; i<50; i++)
	{
		t[i]=rand()%100+1;
	}
}
/*
**************************************************
<drukuj>
t liczby w tablicy>
brak>
t to skrot od tablica>
Szymon 08251607039>
**************************************************
*/
void drukuj(int t[])
{

	for(int i=1; i<50; i++)
	{
		cout<<t[i]<<"   ";
	}
}
/*void drukuj2(int t[])
{
	for(int i=1; i<51; i++)
	{
		cout<<t[i]<<"   ";
	}
}	
*/
/*
**************************************************
<szukaj>
<t liczby w tablicy>
<x szuakana liczba w tablicy>
<int>
<t to skrot od tablica>
<Szymon 08251607039>
**************************************************
*/
int szukaj(int t[],int x)
{

	for(int i=0; i<51; i++)//Bo tablica ma pierwszy index 0
	{
		if(t[i]==x)
		{
			return i;
		}
		
	}
}
main()
{
	int x,t[51];
	losuj(t);
	cout<<"\nTablica po losowaniu\n";
	drukuj(t);
	cout<<"\nJaki element chcesz wyszukac\n";
	cin>>x;
	t[50]=x;
	if(szukaj(t,x)==50)
	{
		cout<<"Nie ma";
	}
	else
	cout<<"Jest na pozycji  "<<szukaj(t,x);	
}
