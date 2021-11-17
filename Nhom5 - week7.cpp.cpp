#include<iostream>
#include<vector>
using namespace std;
const MAX = 100;

class File
{
private:
	string nameFile;
	string type;
	double sizeFile;
public:
	// df constructor
	File() 
	{
		nameFile = "";
		type = "";
		sizeFile = 0.0;
	}
	File(string name, string c_type, double f_size)
	{
		nameFile = name;
		type = c_type;
		sizeFile = f_size;
	}
	File* search(string n_f);
	virtual void reName() = 0; // abstract
	bool copy();	
};
struct node
{
	File data;
	node *pnext;	
};
void addHead(node *phead, File f)
{
	node *p = new node;
	p->data = f;
	p->pnext = NULL;
	if(phead == NULL)
		phead = f;
	else
	{
		p->pnext = phead;
		phead = p;
	}
}
class Folder 
{
private:
	string nameFolder;
	static double sizeFolder;
	node *arrFile;
	vector<Folder> arrFolder;
	
public:
	// df constructor
	Folder()
	{
		nameFolder = "";
		arrFile = arrFolder = NULL;
	}
	Forder(string F_name, double F_size, File F_file, Folder F_folder)
	{
		nameFolder = F_name;
		sizeFolder += F_size;
		addHead(arrFile, F_file);
		arrFolder.push_back(F_folder);
	}
	void reName();
	File* search(string n_file);
	Folder* search(string n_folder)
	bool copy();
};
double Folder :: sizeFolder = 0.0;
//
class Word : public File
{
public:
	Word(){}: File();
	void Table();
	void InsertImage();
	void reName();
}

