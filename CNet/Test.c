/* @���Գ��� 
 *
 */
#include<time.h>
#include"Matrix.h"
#include"Net.h"
#include"Data.h"
void main() {
	clock_t start, finish;
	double total_time;
	start = clock();


	finish = clock();
	total_time = ( (double)finish - (double)start ) / CLOCKS_PER_SEC;
	printf("\n��������ʱ�䣺%0.3f���� \n", total_time);

}
