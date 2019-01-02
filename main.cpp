#include<conio.h>
#include<windows.h>
#include<iostream>
#include<time.h>
using namespace std;
void sleep(int delay)
{
 time_t now, later;
 now=time(NULL);
 later=now+delay;
 while(now<=later)now=time(NULL);
}
main()
{
    int ch=0;
	char file[]=" .wav\0",val[]="asdfghjklwet";
	scanf("%d",&ch);
	while(ch<=9)
	{
	 cout<<"\nValue="<<file;
	 file[0]=val[ch++];
	 PlaySound(file,NULL,SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	 sleep(2);
	}
}
