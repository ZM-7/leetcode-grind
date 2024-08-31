#include <iostream>

int main()
{
int i = 0;
int j = 1;
int A[4] = {4, 7 , 8, 2};
int target = 10;
std::cout << A[i] << " " << A[j] << "\n";

while ((i < 3) && (A[i] + A[j] != target))
{
	while ((A[i] + A[j] != target) && (j < 4))
	{
		j++;
	}
	i++; j = i+1;
}

std::cout << "[ " << i << ", " << j << "]\n";

return 0;


}
