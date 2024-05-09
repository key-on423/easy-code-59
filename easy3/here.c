#include <stdio.h>

//int main()
//{
//	unsigned int a = 16;
//	printf("%d,%d,%d", a>>2,a=a>>2,a);//最新1 4 4中间的a为所有a赋值； 以前1 4 16   
//	return 0;
//}

//#define y 80
//#define x y+40
//int main()
//{
//	int v = x * 20;// =y+40*20=880
//	printf("%d", v);
//}

//已有一维数组a，n为元素个数，取各元素均有值；函数void process（float *p，int n，float（*fun） （float*，int））
//为一个可完成下面各种计算的函数请分别写出以下计算各函数中的调用语句
//ps:第三个函数（*fun）指向一个函数 后面为该函数的内容


//(1)float arr_add(float* arr, int n)计算数组元素值之和
//(2)float odd_add(float* arr, int n)计算下标为奇数的元素之和
//(3)float arr_ave(float* arr, int n)计算各元素的平均值
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
	} while (1 <= x <= 2);//注意这里表达为只要x小于2或者x大于1都为真所以为 正确写法为1<=x&&x<=2才打印三个#
	
}