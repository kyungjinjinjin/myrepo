#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
FILE* fi;
int hakbun, kor, eng, mat, tot;

if ((fi = fopen("in.txt", "rt")) == NULL) 
{
puts("in.txt - ������ �����ϴ�.\n");
return -1;
}
printf("         �߰� ��� ���� �˸�ǥ\n"); 
printf("================================================\n");
printf("  �й�  ����\t����\t����\t����\t���\n");
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

