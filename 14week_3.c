// a
//#include <stdio.h>
//int main(void)
//{
//	int* number;
//	printf("%d\n", *number);
//}
//// ������ ���� number�� �ʱ�ȭ ���� �ʾҴ�. �ذ��: int* number = NULL;
//

// b
//#include <stdio.h>
//int main(void)
//{
//	float* realPtr = NULL;
//	float* integerPtr;
//	integerPtr = realPtr;
//}
//// float* �� long* �� ���� �ٸ� �ڷ������� ȣȯ���� �ʴ´�, �ذ��: long* integerPtr; �� float* integerPtr; �� �ٲٴ� ���̴�. ���� float* realPtr = NULL;�� �ʱ�ȭ����� �Ѵ�,

// c
//#include <stdio.h>
//int main(void)
//{
//	int* x, * y = NULL;
//	x = y;
//}
//// x�� ������ �������� y�� �׳� int ��� �ڷ������� �����Ǳ� ������ int*x,*y�� ���������ڸ� ������ ������ �ٿ���� �Ѵ�. ���� �ʱ�ȭ �ؼ� int*x,*y=NULL;�� �Է��ؾ���.

// d
//#include <stdio.h>
//int main(void)
//{
//	char s[] = "this is a character array";
//	int count;
//	for (; *s != '\0'; ++s)
//		printf("%c", *s);
//} // s�� char* �� ���ǵǾ�� �ϸ�, ��� �����ʹ� �̵��� �� ����.

// e
//#include <stdio.h>
//int main(void)
//{
//	short* numPtr, result;
//	void* genericPtr = numPtr;
//	result = *genericPtr + 7;
//} // void * �����ʹ� ���� ������ �� �����ϴ�. 

// f
//#include <stdio.h>
//int main(void)
//{
//	float x = 19.34;
//	float xPtr = &x;
//	printf("%f\n", xPtr);
//} // xPtr�� �����ͷ� ���ǵ��� �ʾ����Ƿ� �ش� �����͵� ���� �����ؾ� �մϴ�.

//g
//#include <stdio.h>
//int main(void)
//{
//	char* s;
//	printf("%s\n", s);
//} // s�� ���� �Ҵ���� �ʾ����� �ƹ� �͵� ����Ű�� �ʽ��ϴ�.