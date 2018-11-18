#include<iostream>
#include<fstream>
using namespace std;

class FileDemo{
 char filename[20];
 int a,b,i=0;
 ifstream file;
public:
 FileDemo(){
  cout<<"\nEnter the file name: ";
  cin>>filename;
  file.open(filename,ios::in);
 }
void find(){
int a=0,b=0;
char c;
while(file){
 file.get(c);
 if(c==' '||c=='\n') a++;
 if(c=='\n') b++;
}
cout<<"\nName of the file: "<<filename;
cout<<"\nNumber of characters: "<<i-(a-1+b-1)<<"";
cout<<"\nNumber of Words: "<<a;
cout<<"\nNumber of Lines: "<<b;
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
