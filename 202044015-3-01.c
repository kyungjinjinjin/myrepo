#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
FILE* fi;
int hakbun, kor, eng, mat, tot;

if ((fi = fopen("in.txt", "rt")) == NULL) 
{
puts("in.txt - 파일이 없습니다.\n");
return -1;
}
printf("         중간 고사 성적 알림표\n"); 
printf("================================================\n");
printf("  학번  국어\t영어\t수학\t총점\t평균\n");
printf("================================================\n");
while (fscanf(fi, "%d %d %d %d", &hakbun, &kor, &eng, &mat) != EOF)
{
tot = kor + eng + mat;
printf("%7d %3d\t%3d\t%3d\t%3d\t%6.1f\n",
hakbun, kor, eng, mat, tot, (float)tot / 3);
}
fclose(fi); 
return 0;
}

