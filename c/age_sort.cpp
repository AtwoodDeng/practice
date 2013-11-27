#include <random>

#define MAX_AGE 100

void sort(int age[] , int n)
{
	int age_bucket[MAX_AGE]={0};// for record the age 0 - 100
	for(int i = 0 ; i < n ; ++i) // search for recore
	{
		if ( age[i] < 0 || age[i] >= MAX_AGE )
		{
			throw new std::exception("age out of range!");
		}else{
			++age_bucket[age[i]];
		}
		
	}
	int k = 0;//index of age[]
	for(int i = 0 ; i < MAX_AGE ; ++i)
	{
		for(int j = 0 ; j < age_bucket[i] ; ++j)
		{
			if ( k < n )
			{
				age[k++] = i;
			}
		}
	}
}

int main(int argc, char* argv[])
{
	//the number of cases
	int N = 100;
	//create the test cases
	int* age = new int[N];
	for ( int i = 0 ; i < N ; ++i )
	{
		age[i] = rand() % 100;
	}
	for ( int i = 0 ; i < N ; ++i )
	{
		printf("%d ", age[i]);
	}
	printf("\n");
	sort( age , N );
	for ( int i = 0 ; i < N ; ++i )
	{
		printf("%d ", age[i]);
	}
	return 0;
}