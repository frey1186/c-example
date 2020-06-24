/*
 * 想文件写入 日期和时间
 */

#include <math.h>
#include <stdio.h>

int main(void){
	FILE *fp;
	//time_t t;
	//struct tm *local;

	//time(&t);
	//local = localtime(&t);

	if ((fp = fopen("dt_dat", "w"))==NULL){
		printf("open file failed.");
	}else{
		int x = 100;
		fprintf(fp, "%d", x);
	//	printf("current date and time:");
	//	fprintf(fp, "%d %d %d %d %d \n",
	//			local->tm_year+1900, local->tm_mon+1, local->tm_today,
	//			local->tm_hour, local->tm_min, local->tm_sec);
		fclose(fp);
	}

	return 0;
}
