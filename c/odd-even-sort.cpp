#include <random>
#include <vector>;

bool isEven(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}

bool isOdd(int num)
{
	if (num % 2 == 1)
		return true;
	else
		return false;
}

void two_set_sort(int num[], int n, bool(*func)(int) )
{
	int i_fron = 0;//index of front numbers
	int i_back = n - 1;//index of back numbers
	if (n <= 1)
		return;
	while(i_fron <= i_back)
	{
		//set fron
		while(func(num[i_fron]) && i_fron <= i_back && i_fron <= n-1)
		{
			++i_fron;
		}
		//replace the first element that not belone to the front set
		if(i_fron <= n-1 && i_back != i_fron)
		{
			num[i_fron]=num[i_fron]^num[i_back];
			num[i_back]=num[i_fron]^num[i_back];
			num[i_fron]=num[i_fron]^num[i_back];
			--i_back;
		}
		//set back
		while(!func(num[i_back]) && i_fron <= i_back && i_back >= 0)
		{
			--i_back;
		}
		//replace the first element that not belone to the back set
		if(i_back >= 0 && i_back != i_fron)
		{
			
			num[i_fron]=num[i_fron]^num[i_back];
			num[i_back]=num[i_fron]^num[i_back];
			num[i_fron]=num[i_fron]^num[i_back];
			++i_fron;	
		}
	}
}

int main(int argc, char const *argv[])
{
	const int AMOUNT_NUMBER = 10; // amont of bumbers
	int * num = new int[AMOUNT_NUMBER];
	for(int i = 0 ; i < AMOUNT_NUMBER ; ++i )
	{
		num[i] = rand() % 30000;
	}
	for(int i = 0 ; i < AMOUNT_NUMBER ; ++i )
	{
		printf("%d ", num[i]);
	}
	printf("\n%s\n","=============");
	two_set_sort(num,AMOUNT_NUMBER,isOdd);
	for(int i = 0 ; i < AMOUNT_NUMBER ; ++i )
	{
		printf("%d ", num[i]);
	}
	
	return 0;

}