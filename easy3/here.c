#include <stdio.h>

//int main()
//{
//	unsigned int a = 16;
//	printf("%d,%d,%d", a>>2,a=a>>2,a);//����1 4 4�м��aΪ����a��ֵ�� ��ǰ1 4 16   
//	return 0;
//}

//#define y 80
//#define x y+40
//int main()
//{
//	int v = x * 20;// =y+40*20=880
//	printf("%d", v);
//}

//����һά����a��nΪԪ�ظ�����ȡ��Ԫ�ؾ���ֵ������void process��float *p��int n��float��*fun�� ��float*��int����
//Ϊһ�������������ּ���ĺ�����ֱ�д�����¼���������еĵ������
//ps:������������*fun��ָ��һ������ ����Ϊ�ú���������


//(1)float arr_add(float* arr, int n)��������Ԫ��ֵ֮��
//(2)float odd_add(float* arr, int n)�����±�Ϊ������Ԫ��֮��
//(3)float arr_ave(float* arr, int n)�����Ԫ�ص�ƽ��ֵ
//int main()
//{
//   process( a , n , arr_add);
//   process( a , n , odd_add);
//   process( a , n , arr_ave);
//}


int main()
{
	int x, y;
	x = 3;
	do
	{
		y = x--;
		if(!y)
		{
			printf("x");
			continue;
		}
		printf("#");
	} while (1 <= x <= 2);//ע��������ΪֻҪxС��2����x����1��Ϊ������Ϊ ��ȷд��Ϊ1<=x&&x<=2�Ŵ�ӡ����#
	
}