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
class test
{
 public:
  void play(char filename[])
  { 
  
  	ifstream infile(filename,ios::binary);

    if (!infile)
    {
         std::cout << "Wave::file error: "<< filename << std::endl;
        return;
    }
    
    infile.seekg (0, ios::end);   // get length of file
    int length = infile.tellg();
    buffer = new char[length];    // allocate memory
    infile.seekg (0, ios::beg);   // position to start of file
    infile.read (buffer,length);  // read entire file

    infile.close();
 }
}O[20];
main()
{
    int i=0;
	char file1[]="open  .wav\0",val[]="asdfghjklwet";
	//for(int i=0;i<9;i++){
	 //wsprintf(file1,"open %c.wav alias %c",val[i],val[i]);
    //mciSendString("play msc.mp3",NULL,0,NULL);
	//scanf("%d",&ch);
	char file[]=" .wav\0";
	//PlaySound("msc.wav",NULL,SND_FILENAME|SND_ASYNC);
	while((file1[5]=file[0]=getch())!='\\'/*ch<=9*/&& printf("condition"))
	{
	 cout<<"\nValue="<<file;
	 //file[0]=val[ch++];
	 PlaySound(file,NULL,SND_FILENAME|SND_ASYNC|SND_NODEFAULT);
	 mciSendString(file,NULL,0,NULL);
	 //file[5]=getch();
	 // sleep(1);
	//O[i].play(file);
	i++;
	}
}
