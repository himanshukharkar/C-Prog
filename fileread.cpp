#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
string filename;
cout<<"Please enter the file name: ";

cin>>filename;

ifstream infile(filename, std::ifstream::in); 
if(!infile) {
		cout << "Cannot open file for reading.\n";

return 1;
	} 

char a,c;
int count=1;
int i=0;
int count1=1;

	
while(infile.get(a){
cout<<a;
if(a==' ')
{
	count++;
	count1++;
	}
else if(a==' ')
count1++;
i=i+1;
	}
cout<<"";
cout<<"\nNumber of characters: "<<i-(count-1+count1-1)<<"";
cout<<"\nNumber of words: "<<count1<<"";
cout<<"\nNumber of lines: "<<count<<"";
infile.close();

	return 0;
}
