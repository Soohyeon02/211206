// a
//#include <stdio.h>
//int main(void)
//{
//	int* number;
//	printf("%d\n", *number);
//}
//// 포인터 변수 number을 초기화 하지 않았다. 해결법: int* number = NULL;
//

// b
//#include <stdio.h>
//int main(void)
//{
//	float* realPtr = NULL;
//	float* integerPtr;
//	integerPtr = realPtr;
//}
//// float* 와 long* 은 서로 다른 자료형으로 호환되지 않는다, 해결법: long* integerPtr; 을 float* integerPtr; 로 바꾸는 것이다. 또한 float* realPtr = NULL;로 초기화해줘야 한다,

// c
//#include <stdio.h>
//int main(void)
//{
//	int* x, * y = NULL;
//	x = y;
//}
//// x는 포인터 변수지만 y는 그냥 int 라는 자료형으로 지정되기 때문에 int*x,*y로 참조연산자를 각각의 변수에 붙여줘야 한다. 또한 초기화 해서 int*x,*y=NULL;로 입력해야함.

// d
//#include <stdio.h>
//int main(void)
//{
//	char s[] = "this is a character array";
//	int count;
//	for (; *s != '\0'; ++s)
//		printf("%c", *s);
//} // s는 char* 로 정의되어야 하며, 상수 포인터는 이동할 수 없다.

// e
//#include <stdio.h>
//int main(void)
//{
//	short* numPtr, result;
//	void* genericPtr = numPtr;
//	result = *genericPtr + 7;
//} // void * 포인터는 참조 해제할 수 없습니다. 

// f
//#include <stdio.h>
//int main(void)
//{
//	float x = 19.34;
//	float xPtr = &x;
//	printf("%f\n", xPtr);
//} // xPtr이 포인터로 정의되지 않았으므로 해당 포인터도 참조 해제해야 합니다.

//g
//#include <stdio.h>
//int main(void)
//{
//	char* s;
//	printf("%s\n", s);
//} // s에 값이 할당되지 않았으며 아무 것도 가리키지 않습니다.