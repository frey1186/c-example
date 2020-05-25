//
// 顺序查找
//

#include <stdio.h>

#define NUMBER 5
#define FAILED -1

/*
 * 查找n个元素的va数组中，与k相同值的元素索引，返回i
 */
int search(const int va[], int k, int n){
	while (n--) if (va[n] == k) return (n+1);
	return FAILED;
}



int main(void){

	int va[NUMBER] = {1,2,3,4,5};

	printf("va中跟4相同的元素是第%d个。\n", search(va, 4, NUMBER));
	printf("va中跟6相同的元素是第%d个。\n", search(va, 6, NUMBER));

	return 0;
}
