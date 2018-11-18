#include<iostream>
#include<fstream>
using namespace std;

class FileDemo{
    public:
 char filename[20];
 int a,b,i=0;
 ifstream file;

 FileDemo(){
  cout<<"\nEnter the file name: ";
  cin>>filename;
  file.open(filename,ios::in);
 }
void find(){
int a=1,b=1,d=1;
char c;
while(file){
 file.get(c);
 if(c==' '||c=='\n')
		{
			a++;
		//	b++;
		}
	if(c=='\n')
			d++;
		i=i+1;
}
cout<<"\nName of the file: "<<filename;
cout<<"\nNumber of characters: "<<i-a-1+b<<"";
cout<<"\nNumber of Words: "<<a;
cout<<"\nNumber of Lines: "<<d;
}
 ~FileDemo(){
   file.close();
  }
};
int main()
{
char ch;
  FileDemo obj;
  obj.find();
  

}
