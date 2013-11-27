#include <vector>

class CMyString
{
private:
	int data;
public:
	CMyString(int inData);
	CMyString(const CMyString& cpyData);
	CMyString& operator =(const CMyString &data);
	~CMyString();
	void show();
};

CMyString::CMyString(int inData)
{
	printf("%s\n", "constructor");
	data = inData;
}
CMyString::CMyString(const CMyString& cpyStr)
{
	printf("%s\n", "copy constructor");
	data = cpyStr.data;
}
CMyString& CMyString::operator = (const CMyString &str)
{
	printf("%s\n", "equal operator");
	data = str.data;
	return *this;
}
CMyString::~CMyString(){
	printf("%s\n", "deconstructor");
}
void CMyString::show(){
	printf("%s %d\n", "the data is", data);
}

int main(int argc, char* argv[]) {
	CMyString* a;
	printf("%s\n", "====================");
	a = new CMyString(5);
	printf("%s\n", "====================");
	a->show();
	printf("%s\n", "====================");
	CMyString b(6);
	printf("%s\n", "====================");
	CMyString c(b),d(*a);
	printf("%s\n", "====================");
	c.show();d.show();
	printf("%s\n", "====================");
	d = c = b;
	printf("%s\n", "====================");
	c.show();d.show();
	printf("%s\n", "====================");
	delete a;
	printf("%s\n", "====================");
	return 0;
}